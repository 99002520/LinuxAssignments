#include"bitmask.h"
int reset (int bbit,int pose)
{
    bbit &= ~(1 << (pose-1));
    return bbit;
}
