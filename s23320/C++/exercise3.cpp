#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){

    FILE *f = fopen("plik.txt", "r");
    int i=0;
  
    for ( i = 0; i < argc; i++)
    {
        /* code */
    }
    

    fclose(f);
    
    return 0;

}