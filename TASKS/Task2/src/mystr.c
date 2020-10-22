#include "mystring.h"

int mystrlen(char str[])
{
    int length;
    for(length=0; str[length]!='\0'; ++length);
    printf("\n Length of the given string: %d",length);
    return length;
}

void mystrcpy(char str1[] ,char str2[])
{
	int indi;
    for (indi = 0; str1[indi] != '\0'; ++indi)
    {
            str2[indi] = str1[indi];
    }
    str2[indi] = '\0';
    printf("str2: %s", str2);
}

void mystrcat(char str1[], char str2[])
{
    int s = 0;
    int j;
    while (str1[s] != '\0')
    {
        ++s;
    }
    for (j = 0; str2[j] != '\0'; ++j, ++s)
    {
        str1[s] = str2[j];
    }
    str1[s] = '\0';
    printf("After concatenation: ");
    puts(str1);
}

void mystrcmp(char str1[] ,char str2[])
{
   int count = 0;
   while (str1[count] == str2[count] && str1[count] != '\0')
      count++;
   if (str1[count] > str2[count])
      printf("str1 is greater than str2");
   else if (str1[count] < str2[count])
      printf("str1 is less than str2");
   else
      printf("str1 is equal to str2");
      
}
