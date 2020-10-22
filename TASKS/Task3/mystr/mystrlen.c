#include "mystring.h"
int mystrlen(char str[])
{
    int leen;
    for(leen=0; str[leen]!='\0'; ++leen);
    printf("\n Length of the given string: %d",leen);
    return leen;
}
