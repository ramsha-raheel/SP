#include<stdio.h>
#include<unistd.h>
#include<signal.h>

void sighandler(int signum){
printf("\nHey, I got SIGINT: %d\n\n",signum);
}
int main(){
signal(SIGINT, sighandler);
signal(SIGQUIT, sighandler);
signal(SIGTSTP, sighandler);
while(1) {
printf("I am in an infinite loop!\n");
sleep(1);
}
return 0;
}
