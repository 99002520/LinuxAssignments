#include"bitmask.h"

int set(int biit,int n)
{
    biit |= (1 << (n-1));
    return biit;
}

int reset (int biit,int pos)
{
    biit &= ~(1 << (pos-1));
    return biit;
}

void query(int biit, int n)
{
    if (biit & (1 << (n - 1)))
        printf( "\n yay!! bit is set\n");
    else
        printf("\n sorry!! bit is not set\n");
}


int flip(int n, int jka)
{
 return (n^ (1<< (jka-1)));
}
