#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv){

    if (argc==2){
        int i=0;
        int j=0;
        int iloscWierszy=atoi(argv[1]);

        printf("Wiersze: %d\n",iloscWierszy);

        for (i = 0; i < iloscWierszy; i++){
            for ( j = 0; j <iloscWierszy-i; j++){
                printf(" ");
            }
            

            for (j = 0;j<i*2-1; j++){
                printf("*");
            }
            printf("\n");
        }

    }

    return 0;

}