// tools.cc
//

#include "tools.hh"
#define LZZ_INLINE inline
float norm2 (float x1, float y1, float x2, float y2)
{
    return sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
}
void clip (float & v, float lower, float upper)
{
    v=std::max(lower, std::min(v, upper));
}
#undef LZZ_INLINE
