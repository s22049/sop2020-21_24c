#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv){

    int input;
    int userInput = atoi(argv[1]); 
    pid_t master = fork();
    

    if (master > 0){ /*Parent*/
        int suma=0;
        int i=0;
        for (i = 0; i < userInput ; i++)
        {
            suma+=i;
        }
        waitpid(0, &input, 0);
        printf("Suma z rodzica: %d\n", suma);
        

    }else if(master ==0){ /*Child*/
        int i ;
        for ( i=1 ; i < userInput; i=i+2)
        {
            printf("Dziecko, liczba nieparzysta: %d\n",i);
        }       
    }
        return EXIT_SUCCESS;
}