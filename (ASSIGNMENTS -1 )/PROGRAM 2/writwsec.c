/*  Write a program to display file contents on console (like cat command)  */

#include<unistd.h>
#include<fcntl.h>

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int fnumber1,numbbytes;
	fnumber1=open("rw.txt",O_RDONLY);
	if(fnumber1<0)
	{
		perror("open");
		exit(1);
	}
	int maxlen=200;
	char buf[maxlen];
	numbbytes=read(fnumber1,buf,maxlen);
	if(numbbytes<0)
	{
		perror("read");
		exit(2);
	}
    buf[numbbytes]='\0';

    write(1,buf,numbbytes);
    
    printf(" Great.. Writing is successful \n");
	close(fnumber1);
	return 0;
}