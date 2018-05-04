#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<fcntl.h>
void main()
{
	char buff[255];
	int n=0;
	int fd=open("newFile.txt",O_RDWR);
	int f2=open("f1",O_RDWR);
	while (1)
	{
		n=read(f2,buff,255);
		if(n<=0)
		break;
		write(fd,buff,n);
	}
	
}
