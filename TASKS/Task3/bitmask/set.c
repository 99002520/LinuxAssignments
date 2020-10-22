#include"bitmask.h"
int set(int bidt,int nd)
{
    bidt |= (1 << (nd-1));
    return bidt;
}
