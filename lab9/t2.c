#include<stdio.h>
#include <fcntl.h> 

int main()
{
	char buff[1024];
	close(1);
	int fd1=open("errorandoutput.txt",O_WRONLY | O_CREAT |O_TRUNC, 0777);
	close(2);
	int fd2=dup(fd1);
	int fd3 = open ("abc.txt", O_RDONLY);
	int n;
	if(fd3<=0)
	{
		perror("Error:");
		return;
	}
	while(1)
	{
		n = read (fd3, buff, 1023);
		if (n <= 0)
			{break;}
	write(fd2, buff, n);
	}
return 0;
}






























