
#include <pthread.h> 
#include <stdio.h> 
#include <stdlib.h> 

#define Maximum_limit 1000
#define numb 10 

int arr[Maximum_limit] = {};
int min_arr[numb] = {0}; 
int partsare=0;

void* minima(void* arg) 
{ 
    int ind;
    int t=partsare++; 
    int min=0; 
  
    for (ind = t * 100; ind < (t + 1) * 100; ind++) 
	{ 
        if (arr[ind] < min) 
            min= arr[ind]; 	
    	} 
    min_arr[t] = min; 
} 
  
int main() 
{
	int min_n = 0,ind;     
     for(ind=0;ind <Maximum_limit;ind++)
    		{
	    		arr[ind]=ind;
    		} 
    
    pthread_t thread_1[numb]; 
  
    for (ind = 0; ind < numb; ind++) 
        pthread_create(&thread_1[i], NULL, minima,(void*)NULL); 
  
    for (ind= 0; ind < numb; ind++) 
        pthread_join(thread_1[ind], NULL); 

    for (ind = 0; ind < numb; ind++) { 
        if (min_arr[ind] < min_n) 
            min_n = min_arr[ind]; 
    } 
  
    printf("element is:%d\n", min_n); 
  
    return 0; 
} 