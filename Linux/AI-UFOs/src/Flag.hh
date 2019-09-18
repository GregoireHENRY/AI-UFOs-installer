#ifndef FLAG_HH
#define FLAG_HH

#include <SFML/Graphics.hpp>
#include <iostream>
#include "sfmltools.hh"
#include "tools.hh"
#include "Graphics.hh"


class Ufo;


class Flag
{
public:
    bool owned;
    int team, score;
    float size=100, posx;
    sf::Vector2f pos, given_pos;
    sf::RectangleShape shape;
    sf::Color color;
    Graphics gfx;

    Flag();
    Flag(int team);
    void setup();
    std::vector<float> getData();
    void setData();
    void spawn();
    void draw(sf::RenderWindow &window);
};


#endif
