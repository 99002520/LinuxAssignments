#include"bitmask.h"
void query(int biit, int no)
{
    if (biit & (1 << (no - 1)))
        printf( "\n bit is set");
    else
        printf("\n bit is not set");
}
