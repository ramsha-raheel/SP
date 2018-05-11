#include<stdio.h>
#include<fcntl.h>

int main(int argc, char* argv[])
{
	if(argc != 2)
	{	
		printf("Incorrect args\n");
		exit(1);
	}
	if (access(argv[1], R_OK) == 0)
		printf("You have read access to this file\n");
	else
		printf("You do not have read access to this file\n");
	if (access(argv[1], R_OK|W_OK) == 0)
		printf("You have read and write access to this file\n");
	else
		printf("You do not have read and write access to this  file\n");
	if (access(argv[1],X_OK) == 0)
		printf("You have execute access to this file\n");
	else
		printf("You do not have execute access to this file\n");
	if (access(argv[1],F_OK) == 0)
		printf("This file exist\n");
	else
		printf("This file do not exist\n");
exit (0);
}
