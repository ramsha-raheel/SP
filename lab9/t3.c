#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
int main()
{
	int buff[1024];
	close(0);
	int fd2=open("f1",O_RDONLY);
	//int fd=dup2(1,2);
	//int n;
	//close(1);
	//int fd1 = open("f2", O_RDONLY | O_WRONLY |O_CREAT |O_TRUNC,0777);
	
	if(fd2<0)
	{
		perror("error");
	}
	int fd=dup2(1,2);
	//int n;
	int fd1 = open("f2", O_RDONLY | O_WRONLY |O_CREAT |O_TRUNC,0777);
	while(1)
	{
		n=read(fd2,buff,1023);
		if(n<=0)
			{break;}
		write(fd1,buff,n);
	}
return 0;
}
