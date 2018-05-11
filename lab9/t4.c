#include<stdio.h>
#include<stdlib.h>
#include<sys/stat.h>
#include<fcntl.h>

int main(int argc, char* argv[])
{
	int i;
	struct stat buf;
	char * ptr;
	if(argc != 2)
	{
		fprintf(stderr, "Incorrect number of arguments\n");
		exit(1);
	}
	if (lstat(argv[1], &buf)<0)
	{
		perror("Error in lstat");
		exit(1);
	}
	printf("%s",argv[1]);
	if (S_ISREG(buf.st_mode)) ptr = " is a regular file";
	else if (S_ISDIR(buf.st_mode)) ptr = " is a directory";
	else if (S_ISCHR(buf.st_mode)) ptr = " is a character special file";
	else if (S_ISBLK(buf.st_mode)) ptr = " is a block special file";
	else if (S_ISFIFO(buf.st_mode)) ptr = " is a FIFO file";
	else if (S_ISLNK(buf.st_mode)) ptr = " is a soft link";
	else if (S_ISSOCK(buf.st_mode)) ptr = " is a socket";
	else ptr = " have unknown mode";
	printf("%s\n",ptr);
return 0;
}
