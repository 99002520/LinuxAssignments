#include "mystring.h"
void mystrcpy(char str1[] ,char str2[])
{
	int ined;
    for (ined = 0; str1[ined] != '\0'; ++ined)
    {
            str2[ined] = str1[ined];
    }
    str2[ined] = '\0';
    printf("str2: %s", str2);
}
