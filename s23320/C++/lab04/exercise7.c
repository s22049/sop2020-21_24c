#include <stdlib.h>
#include <stdio.h>

int forAll(int *array, int amount, int (*f)(int, int));
int min (int v, int next);
int max (int v, int next);
int sum (int v, int next);

int main(int argc, char *argv[]){
    int z;
    int n;
    int i;
    int *array;
    int result;
    int (*function[3])(int, int);
    function[0] = sum;
    function[1] = min;
    function[2] = max;

    printf("wpisz ile chcesz wprowadzić liczb.\n");
    scanf("%d", &n);

    array = (int*) malloc(n * sizeof(int));

    printf("Wpisz liczby:\n");
    for (i = 0; i < n; i++) 
        scanf("%d", &array[i]);
    

    printf("Co chcesz zrobić?\n1. Znajdź minimum\n2. Znajdź maksimum\n0. Oblicz sumę\n");
    scanf("%d",&z);

    result = forAll(array, n, function[z]);
    
    printf("Wynik wynosi: %d\n", result);

    free(array);

    return 0;
}

int forAll(int *tab, int amount, int (*f)(int, int)) {
    int value = tab[0];
    int i;

    for(i = 1; i < amount; i++) 
        value = f(value, tab[i]);
     
    return value;
}

int min (int value, int next) {
    if(value>next) 
        value = next;
    
    return value;
}

int max (int value, int next) {
    if(value<next) 
        value = next;
    
    return value;
}

int sum (int value, int next) {
    return (value + next);
}