// sfmltools.hh
//

#ifndef LZZ_sfmltools_hh
#define LZZ_sfmltools_hh
#include <SFML/Graphics.hpp>
#include <iostream>
#include <cmath>
#include <string>
#include "sfmltools.hh"
#define LZZ_INLINE inline
float dot (sf::Vector2f v1, sf::Vector2f v2);
float norm (sf::Vector2f v);
float angvec2 (sf::Vector2f v1, sf::Vector2f v2);
sf::Vector2f vdir (sf::Vector2f v);
sf::Vector2f rotate (sf::Vector2f v, float ang);
sf::Vector2f sc2vc (float scal);
sf::RectangleShape create_rect (sf::Vector2f pos, sf::Vector2f size, sf::Color colorin, sf::Color colorout = sf::Color::White, float thick = 25);
sf::CircleShape create_circ (sf::Vector2f pos, float size, sf::Color colorin, sf::Color colorout = sf::Color::White, float thick = 25);
sf::Text create_text (sf::Vector2f pos, std::string text, int size, sf::Font & font, sf::Text::Style style = sf::Text::Regular, sf::Color colorin = sf::Color::White, sf::Color colorout = sf::Color::Black, int thick = 10);
#undef LZZ_INLINE
#endif
