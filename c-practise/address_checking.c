#include<stdio.h>
//call by value
void printAddress(int n);

//call by reference
void _printAddress(int *n);
int main(){
    int n =4;
    printAddress(n);
    printf("%u\n, &n");

    _printAddress(&n);
    printf("%u\n, &n");

    return 0;
}

void printAddress(int n){
    printf("%u\n", &n);
}

void _printAddress(int *n){
    printf("%u\n", n);
}