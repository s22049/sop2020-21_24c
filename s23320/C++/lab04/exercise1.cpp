#include <stdio.h>

int main(){

    int suma=0;
    int x=0;

    while(scanf("%d\n", &x)>0){
        suma += x;
    }

    printf("%d\n", suma);
    
    return suma;

}