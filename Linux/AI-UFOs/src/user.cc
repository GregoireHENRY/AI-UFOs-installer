// user.cc
//

#include "user.hh"
#define LZZ_INLINE inline
namespace user
{
  int nframe =0;
}
namespace user
{
  float pi =3.14;
}
namespace user
{
  float mybasex;
}
namespace user
{
  std::vector <float> main (std::vector <float> flag, std::vector <float> enemy_flag, std::vector <float> ally1, std::vector <float> ally2, std::vector <float> enemy1, std::vector <float> enemy2)
{
    /*
    Function called every frame to control your ufos.
    Inputs:
        4 vectors of (1x5)[float] giving position and velocity for each ufo and
                                  the fifth float is either 0 or 1 if the ufo is
		   		  owning a flag
        2 vectors of (1x2)[flaot] giving position for each flag
    Output:
        1 vector of (1x6)[float] returning magnitude and the direction of power
    engine for both ally ufos.
    */
    float mag1=0, aimx1=0, aimy1=0, mag2=0, aimx2=0, aimy2=0;

    return std::vector<float> {mag1,aimx1,aimy1,mag2,aimx2,aimy2};
}
}
#undef LZZ_INLINE
