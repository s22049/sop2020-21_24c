#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>

int main(int argc, char** argv){
    
    int i;
    pid_t master = getpid();

    printf("MasterPID: %d\n", master);

    for ( i = 0; i < 100; i++){

        if (getpid()==master)
        {
            if (fork() == 0){
                printf("Kolejka: %d\tPID: %d\tPPID: %d\n",i+1,getpid(),getppid());

            }  
        }
        if (master == getpid()){
            int status = 0;
            waitpid(0,&status,0);
            printf("rodzic zaczekal, koniec\n");
        }
        
    }
        return 0;
}