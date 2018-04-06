#include <stdio.h> 
#include <unistd.h> 
#include <stdlib.h> 
void pr_exit(int); 
int main (){ 
	pid_t cpid; 
	int status; 
	cpid = fork (); 
	//child process code 
	if (cpid == 0) {

	
		exit(-1);
	}
	//parent process code 
	else{ 
		pid_t w = waitpid(cpid, &status, WUNTRACED | WCONTINUED); 

		if (w == -1) 
			perror("waitpid failed"); 
		pr_exit(status); 

	} 
	return 0;
}
void pr_exit(int status){ 
	if(WIFEXITED(status)) 
		printf("Normal termination, exit status = %d\n", WEXITSTATUS(status)); 
}
