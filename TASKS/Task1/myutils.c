#include"myutils.h"

long factorial(int num)
{
   int indi;
   long int result=1;
   if(num==0)
   return 1;
   else
   {
    for( indi = 1 ; indi <= num ; indi++ )
        result = result*indi;
    return result;
   }
}

int isPalindrome(int num)
{
    int rnum=0,rem,cp;
    cp=num;
    while(cp>0)
    {
        rem=cp%10;
        rnum=rnum*10+rem;
        cp=cp/10;
    }
    if(rnum==num)
        return 1;
    else
        return 0;
}

int isPrime(int n)
{
	int prime;
	for(prime=2;prime <=n/2;prime++)
	{
		if(n%prime!=0)
			continue; // prime number
		else
			return 1;
		return 2;
	}
}

int vsum(int number,...)
{
    int indi;
    int first, a;
    
    va_list vlist;
    va_start(vlist,number);
  
    int sum=0;
    
    for (indi = 1; indi <= number; indi++) 
        sum+=va_arg(vlist,int);

    va_end(vlist);
    return sum;
}
