#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>

int main(int argc, char** argv){
    
    int i;
    for ( i = 0; i < 100; i++){
        pid_t pid = fork();

        if (pid > 0){
            wait(NULL);
            break;
            fork();
        }else{
            printf("Kolejka: %d\tPID: %d\tPPID: %d\n",i+1,getpid(),getppid());
        }        
    }
        return 0;
}