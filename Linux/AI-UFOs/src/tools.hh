// tools.hh
//

#ifndef LZZ_tools_hh
#define LZZ_tools_hh
#include <iostream>
#include <cmath>
#include <sstream>
#include "tools.hh"
#define LZZ_INLINE inline
float norm2 (float x1, float y1, float x2 = 0, float y2 = 0);
void clip (float & v, float lower, float upper);
template <typename T>
std::string toString (T arg);
template <typename T>
std::string toString (T arg)
{
    std::stringstream ss;
    ss << arg;
    return ss.str();
}
#undef LZZ_INLINE
#endif
