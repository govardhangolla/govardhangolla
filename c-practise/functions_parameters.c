#include<stdio.h>

// call by value
void square(int n);
// call by reference
void _square(int *n);
int main(){
    int number = 4;
    square(4);
    printf("nuumber is: %d\n", number);

    _square(&number);
    printf("nuumber is: %d\n", number);
    return 0;
}

void square(int n){
    n = n*n;
    printf("square is: %d\n", n);
}

void _square(int *n){
    *n = (*n) * (*n);
    printf("square is: %d\n", *n);
}