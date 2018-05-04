#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<fcntl.h>
void main(int arg,char **args)
{
	char buff[1024];
	int fd=open("/etc/shadow",O_RDONLY);
	int f2=open(args[1],O_RDWR);
	int n=0;
	n=read(fd,buff,255);
	write(f2,buff,n);
}
