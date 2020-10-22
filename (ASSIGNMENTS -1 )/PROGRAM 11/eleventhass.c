/*  Write a program to compute time taken for execution of a function/code snippet (Hint:- gettimeofday or clock_gettime)   */

#include <stdio.h>
#include <time.h>
#include <unistd.h>

int main()
{
    double time__spents=0;
    clock_t time_1=clock();
    clock_t time_2=clock();
    int variablwe1=5,variable2=10;
    int va3;
    
    va3=variablwe1*variable2;
    printf("\n %d",va3);
    
    time__spents=(double)(time_2 - time_1)/CLOCKS_PER_SEC;
    printf("\n the time for execution for the function is: %f \n",time__spents);
    
    return 0;

}