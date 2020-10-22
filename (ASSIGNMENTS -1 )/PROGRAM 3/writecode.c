/*Write a program to count no.of lines, words, characters in given file (like wc command)
*/
#include<unistd.h>
#include<fcntl.h>

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int fod1,nvbytes;
	int indexx; // for indexing reference
    int word_count=0;
    int line_count=0;	
	int inword=0;

	fod1=open("rw.txt",O_RDONLY);
	if(fod1<0)
	{
		perror("open");
		exit(1);
	}
	int maxlen=200;
	char buf[maxlen];

    //Reading the file
	nvbytes=read(fod1,buf,maxlen);
	
	if(nvbytes<0)
	{
		perror("read");
		exit(2);
	}
	else
	{
	indexx=0;
	while(indexx!=nvbytes)
	{ 
	    if(buf[indexx]==' '|| buf[indexx]=='\t'|| buf[indexx]=='\n' || buf[indexx]=='\0')
	        {

	            if(inword)
	            {
	                inword=0;
	                word_count++;
	            }
	 
	            if(buf[indexx]=='\n' || buf[indexx]=='\0')
	            line_count++;
	        }
	    else
	        {
	            inword=1;
	        }
	    indexx++;
	}
	}
    printf("word is :%d line is :%d char is :%d",word_count,line_count,nvbytes);
	
	close(fod1);
	return 0;	
}
		
