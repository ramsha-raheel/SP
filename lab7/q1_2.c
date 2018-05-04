#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
void main(int arg,char **args)
{
	char buff[255];
	int fd=open(args[2],O_RDWR);
	int f2=open(args[3],O_RDWR);
	int n=0;
	n=read(fd,buff,255);
	write(f2,buff,n);
	printf("unlink");
	unlink(args[2]);
}
