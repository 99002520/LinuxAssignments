#include "mystring.h"
void mystrcat(char str1[], char str2[])
{
    int lengtth = 0;
    int jo;
    while (str1[lengtth] != '\0')
    {
        ++lengtth;
    }
    for (jo = 0; str2[jo] != '\0'; ++jo, ++lengtth)
    {
        str1[lengtth] = str2[jo];
    }
    str1[lengtth] = '\0';
    printf("After concatenation: ");
    puts(str1);
}
