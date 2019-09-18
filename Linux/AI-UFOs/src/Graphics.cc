// Graphics.cc
//

#include "Graphics.hh"
#define LZZ_INLINE inline
Graphics::Graphics ()
    {
        fps=60;
        pxfac=2e-2;
        friction=0.999;
        restwall=1.0;
        restufo=0.45;
        repulufo=500;
        can={19200,10800};
        board={10000,8000};
        base={1000,board.y};
        side=(can-board)*0.5f;
        tlb2={side.x+board.x-base.x,side.y};
        name1={can.x*0.5f-board.x*0.5f,side.y*0.5f};
        name2={can.x*0.5f+board.x*0.5f,side.y*0.5f};
        score1={can.x*0.5f-base.x,side.y*0.5f};
        score2={can.x*0.5f+base.x,side.y*0.5f};
        nvect={0,-1};
        nhorz={1,0};
        sforange={250,141,39,60};
        sfpurple={221,48,111,60};
        font1.loadFromFile("resources/font/Roboto/Roboto-Black.ttf");
    }
#undef LZZ_INLINE
