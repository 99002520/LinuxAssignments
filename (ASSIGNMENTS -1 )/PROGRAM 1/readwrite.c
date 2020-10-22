/*  Write a program to copy one file contents to other using open,read,write,close system 
   calls (like cp command, which takes source, destination files as cmd line args). */

#include<unistd.h>
#include<fcntl.h>

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int fir,number1bytes;
    int fden2,number2bytes;
	fir=open("rw.txt",O_RDONLY);
	if(fir<0)
	{
		perror("open");
		exit(1);
	}
	int maxlen=200;
	char buf[maxlen];

    //reading from the text file
	number1bytes=read(fir,buf,maxlen);
	if(number1bytes<0)
	{
		perror("read");
		exit(2);
	}
    buf[number1bytes]='\0';

    //writing to a different file 
    fden2=open("wr.txt",O_WRONLY|O_CREAT|O_TRUNC, 0666); //system call of fopen
	if(fden2<0)
	{
		perror("open");
		exit(1);
	}

	number2bytes=write(fden2, buf, number1bytes);//system call of fwrite
    if(number2bytes<0)
	{
		perror("write");
		exit(2);
	}

	printf(" Congrats! File written into another file is success,number2bytes=%d\n",number2bytes);
	
    close(fden2);
    close(fir); //system call of fclose
	return 0;
}	
