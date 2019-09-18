// Graphics.hh
//

#ifndef LZZ_Graphics_hh
#define LZZ_Graphics_hh
#include <SFML/Graphics.hpp>
#define LZZ_INLINE inline
class Graphics
{
public:
  int fps;
  float pxfac;
  float friction;
  float restwall;
  float restufo;
  float repulufo;
  sf::Vector2f can;
  sf::Vector2f board;
  sf::Vector2f base;
  sf::Vector2f side;
  sf::Vector2f name1;
  sf::Vector2f name2;
  sf::Vector2f score1;
  sf::Vector2f score2;
  sf::Vector2f tlb2;
  sf::Vector2f nvect;
  sf::Vector2f nhorz;
  sf::Color sforange;
  sf::Color sfpurple;
  sf::Font font1;
  Graphics ();
};
#undef LZZ_INLINE
#endif
