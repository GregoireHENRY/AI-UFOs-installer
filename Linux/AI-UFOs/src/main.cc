#include <SFML/Graphics.hpp>
#include <SFML/OpenGL.hpp>
#include <iostream>
#include <string>
#include "tools.hh"
#include "sfmltools.hh"
#include "Graphics.hh"
#include "Ufo.hh"
#include "Flag.hh"
#include "user.hh"
#include "bot.hh"

int main()
{
    srand(time(NULL));

    // Initialize window
    Graphics gfx=Graphics();
    sf::RenderWindow window(sf::VideoMode(gfx.can.x,gfx.can.y),"Ufo",
                            sf::Style::Fullscreen,sf::ContextSettings(24,8,4,3,0));
    window.setVerticalSyncEnabled(true); //window.setFramerateLimit(gfx.fps);
    window.setView(sf::View(sf::FloatRect(0,0,gfx.can.x,gfx.can.y)));
    window.clear(sf::Color(4,60,60));

    // Affects random side to user
    int rng=std::rand()%2, rng2=(rng+1)%2;
    int rngs[4]={2*rng,2*rng+1,2*rng2,2*rng2+1};
    std::string names[2]={"YOU","BOT"};

    // Board interface creation
    std::vector<sf::RectangleShape> rectangles={
        create_rect(gfx.side,gfx.board,sf::Color::Transparent),
        create_rect(gfx.side,gfx.base,gfx.sforange),
        create_rect(gfx.tlb2,gfx.base,gfx.sfpurple)
    };
    std::vector<sf::Text> texts={
        create_text(gfx.name1,names[rng],500,gfx.font1),
        create_text(gfx.name2,names[rng2],500,gfx.font1),
        create_text(gfx.score1,"0",300,gfx.font1),
        create_text(gfx.score2,"0",300,gfx.font1)
    };

    // Ufos creation
    Ufo ufos[4]={Ufo(0,0),Ufo(0,1),Ufo(1,0),Ufo(1,1)};
    Ufo *user[2]={&ufos[rngs[0]], &ufos[rngs[1]]};
    Ufo *bot[2]={&ufos[rngs[2]], &ufos[rngs[3]]};

    // Flags creation
    Flag flags[2]={Flag(0),Flag(1)};
    for (int ii=0; ii<2; ii++) {
        user[ii]->flag=&flags[rng];
        user[ii]->enemy_flag=&flags[rng2];
        user[ii]->name=&texts[0];
        user[ii]->score=&texts[2];
    }
    for (int ii=0; ii<2; ii++) {
        bot[ii]->flag=&flags[rng2];
        bot[ii]->enemy_flag=&flags[rng];
        bot[ii]->name=&texts[1];
        bot[ii]->score=&texts[3];
    }

    // Main loop
    std::vector<float> usermotor, botmotor;
    sf::Clock clk;
    float dt;
    while (window.isOpen()) {
        dt=clk.restart().asSeconds();
        sf::Event event;
        while (window.pollEvent(event)) if (event.type == sf::Event::Closed) window.close();
        // Get motor engine force magnitudes and directions from user and bot
        // and compute new positions, detect collisions with walls, between
        // ufos and capture flags
        usermotor=user::main(user[0]->flag->getData(),
                             user[0]->enemy_flag->getData(),
                             user[0]->getData(),user[1]->getData(),
                             bot[0]->getData(),bot[1]->getData());
        botmotor=bot::main(bot[0]->flag->getData(),
                           bot[0]->enemy_flag->getData(),
                           bot[0]->getData(),bot[1]->getData(),
                           user[0]->getData(),user[1]->getData());
        user[0]->setData(dt,usermotor[0],usermotor[1],usermotor[2]);
        user[1]->setData(dt,usermotor[3],usermotor[4],usermotor[5]);
        bot[0]->setData(dt,botmotor[0],botmotor[1],botmotor[2]);
        bot[1]->setData(dt,botmotor[3],botmotor[4],botmotor[5]);
        for (int ii=0; ii<4; ii++)
            for (int jj=0; jj<4; jj++)
                if (ii!=jj) ufos[ii].collufos(&ufos[jj]);
        flags[0].setData();
        flags[1].setData();

        // Clear, draw & display
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
        for (const auto &e: rectangles) {
          window.draw(e);
        }
        for (const auto &e: texts) {
          window.draw(e);
        }
        for (auto& ufo : ufos) {
          ufo.draw(window);
        }
        for (auto& flag : flags) {
          flag.draw(window);
        }
        window.display();
    }
}
