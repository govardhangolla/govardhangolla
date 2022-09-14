#include<stdio.h>
int main(){
    // float price = 100.45;
    // float *ptr = &price;
    // float **pptr = &ptr;

    //value at address
    int a = 5;
    int *ptr = &a;
    int **pptr = &ptr;

    printf("a = %d\n", a);
    printf("*ptr = %d\n", *ptr);
    printf("**pptr= %d\n", **(pptr));
}