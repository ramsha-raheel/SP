#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(){
	
	
	int cpid;

	cpid = fork();
	if (cpid == -1){
		printf("Fork failed\n");
		exit(1);
	}
	
	printf("pid: %d, ppid:%d\n",getpid(), getppid());
	return 0;
}
