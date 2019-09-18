#include "Flag.hh"
#include "Ufo.hh"


Flag::Flag() {}

Flag::Flag(int team): team(team) { setup(); }

void Flag::setup()
{
    gfx=Graphics();
    score=0;
    owned=false;
    color=gfx.sforange;
    posx=gfx.base.x;
    if (team) {
        color=gfx.sfpurple;
        posx=gfx.board.x-gfx.base.x;
    }
    spawn();
    shape=create_rect(gfx.side+pos,sc2vc(2*size),color);
}

std::vector<float> Flag::getData()
{
    return std::vector<float> {given_pos.x,given_pos.y};
}

void Flag::setData()
{
}

void Flag::spawn()
{
    owned=false;
    pos.x=posx;
    pos.y=100*(10+(std::rand()%70));
    given_pos=pos;
}

void Flag::draw(sf::RenderWindow &window)
{
    shape.setPosition(gfx.side+pos-sc2vc(size));
    window.draw(shape);
}
