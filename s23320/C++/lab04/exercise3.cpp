#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){

    FILE *f = fopen("plik.txt", "r");
    int i=0;
    int loop=0;
    int *liczby=0;
    bool printFlag=false;
    char *filename;

    for (loop  = 1; i < argc; loop++){
        if (strcmp(argv[loop],"--print")){
            printFlag  =true;
        }
        else{
            filename = argv[loop];
        }
        
    }
    

    if (argc < 2){
        f=stdin; 
    }
    else{
        f = fopen(argv[1], "r");
    }
    

    if (f == NULL){
        return 1;
    }

    fscanf(f, "%d\n", i);
    liczby = reinterpret_cast<int*> (malloc(i * sizeof(i)));

    for (loop = 0; loop <i ; loop++)
    {
        int a;
        fscanf(f, "%d\n", &a);
        liczby[loop]=a;
    }

    if (f!=NULL)
    {
        fclose(f);
    }
    

    for (loop = i; loop >0; --loop)
    {
        int a=liczby[loop-1];

        printf("%d\n", a);
    }
    

    if (liczby != NULL)
    {
        free(liczby);
    }
    
    return 0;

}