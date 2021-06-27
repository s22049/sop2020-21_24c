#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>


int main(){

    int userInput; 

    printf("PID: %d\tPPID: %d\n",getpid(),getppid());

    scanf("%s",&userInput);

    return 0;
}