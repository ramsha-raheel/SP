#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

int main(){
	printf("My Real user-ID is: %ld\n", (long)getuid());
	printf("My Effective user-ID is: %ld\n", (long)geteuid());
	printf("My Real group-ID is: %ld\n", (long)getgid());
	printf("My Effective group-ID is: %ld\n", (long)getegid());
	
	int fd = open("t1.c",O_WRONLY);
	if (fd == -1){
		perror("Errorr");
	}
	else {
			printf("Open successful with FD : %d\n",fd);
	}

	return 0;
}
