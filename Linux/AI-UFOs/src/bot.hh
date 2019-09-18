// bot.hh
//

#ifndef LZZ_bot_hh
#define LZZ_bot_hh
#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#define LZZ_INLINE inline
namespace bot
{
  extern int nframe;
}
namespace bot
{
  extern float pi;
}
namespace bot
{
  extern float mybasex;
}
namespace bot
{
  std::vector <float> main (std::vector <float> flag, std::vector <float> enemy_flag, std::vector <float> ally1, std::vector <float> ally2, std::vector <float> enemy1, std::vector <float> enemy2);
}
#undef LZZ_INLINE
#endif
