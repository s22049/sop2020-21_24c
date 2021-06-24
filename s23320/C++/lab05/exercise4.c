#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>


int main(){

    int input;

    pid_t masterPID = fork();  

    if (masterPID > 0){/*rodzic*/

        printf("Parent PID: %d\tPPID: %d\n",getpid(),getppid());
        waitpid(0, &input, 0);
        printf("Rodzic zakonczyl czekac na swoje dziecko\n");

    }else if (masterPID == 0){/*dziecko*/

        printf("Child PID: %d\tPPID: %d\n",getpid(),getppid());

    }else{
        printf("Dziecko nie zyje\n");
    }
    
    

    return 0;
}