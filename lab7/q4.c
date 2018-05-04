#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<fcntl.h>
void main(int arg,char **args)
{
	if (arg != 1)
	{
		close(1);
		int f2=open(args[1],O_RDWR);
	}
		printf("Hello World\n");	
}
