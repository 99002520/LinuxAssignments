#include "bitmask.h"
int main()
{
    int neq = 5, k = 3;

    printf("%d with %d-th bit set: %d \n", neq, k, set(neq, k));
    printf("%d with %d-th bit reset: %d \n", neq, k, reset(neq, k));
    printf("%d with %d-th bit flipped: %d \n", neq, k, flip(neq, k));
    query(5,2);
    return 0;
}
