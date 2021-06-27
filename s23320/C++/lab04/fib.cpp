#include <iostream>

using namespace std;

int fib(int n);
int fib_iterative(int n);
   
int main (){

    int n;
    int result;

    cout<<"Podaj numer wyrazu ciagu: \n";
    cout<<"Rekurencja\n";
    cin>>n;
    cout<<fib(n)<<"\n";
    cout<<"Iteracja:\n";
    cout<<fib_iterative(n);

    return 0;
}

int fib(int n){
        
     if (n<3)
    
         return 1;
    
    return fib(n-2) + fib(n-1);
}

int fib_iterative(int n){
    int x=0, y=1, z=0;
    for (int i = 0; i < n; i++)
    {
        z = x+y;
        x=y;
        y=z;
    }
    return z;
}