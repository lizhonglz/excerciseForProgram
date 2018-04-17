#include"count.h"

int main()
{
    BLH blh0;
    blh0.coorB=pi/4;
    blh0.coorL=pi/2;
    blh0.coorH=100;
    Geodesy geodesy("E:\\文件\\物理大地测量\\EGM2008.gfc",blh0);
    geodesy.run();

    return 0;
}
