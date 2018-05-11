#include<stdio.h>
#include <fcntl.h> 

int main()
{
	char buff[1024];
	close(1);
	int fd1 = open ("abc.txt", O_RDONLY | O_WRONLY |O_CREAT |O_TRUNC,0777);
	close(2);
	int fd2 = dup2(fd1,0);
	dup2(fd1,1);
	dup2(fd1,2);
	int n;
	for(;;)
	{
		n = read (fd1, buff, 1023);
		if (n <= 0)	
		{
			//close(fd1);
			//close(fd2);
			return 0;
		}
	write(fd1, buff, n);
	}
return 0;
}
