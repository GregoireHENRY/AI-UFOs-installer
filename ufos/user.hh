// user.hh
//

#ifndef LZZ_user_hh
#define LZZ_user_hh
#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#define LZZ_INLINE inline
namespace user
{
  extern int nframe;
}
namespace user
{
  extern float pi;
}
namespace user
{
  extern float mybasex;
}
namespace user
{
  std::vector <float> main (std::vector <float> flag, std::vector <float> enemy_flag, std::vector <float> ally1, std::vector <float> ally2, std::vector <float> enemy1, std::vector <float> enemy2);
}
#undef LZZ_INLINE
#endif
