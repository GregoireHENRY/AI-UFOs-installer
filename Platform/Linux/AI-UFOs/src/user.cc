// user.cc
//

#include "user.hh"
#define LZZ_INLINE inline
namespace user
{
  float pi =3.14;
}
namespace user
{
  std::vector <float> main (std::vector <float> flag, std::vector <float> enemy_flag, std::vector <float> ally1, std::vector <float> ally2, std::vector <float> enemy1, std::vector <float> enemy2)
{
	/*
	Function called every frame to control your UFOs.
	Inputs:
		4 vectors of (1x5)[float] giving position and velocity for each UFO and
		                          the fifth float is either 0 or 1 if the UFO is
								  owning a flag
		2 vectors of (1x2)[flaot] giving position for each flag, if the flag is
		                          captured its coordinates are (-1, -1)
	Output:
		1 vector of (1x6)[float] returning magnitude and the direction of power
		engine for both ally UFOs.
	*/
	float mag1=0.f, aimx1=0.f, aimy1=0.f, mag2=0.f, aimx2=0.f, aimy2=0.f;

	return std::vector<float> {mag1,aimx1,aimy1,mag2,aimx2,aimy2};
}
}
#undef LZZ_INLINE
