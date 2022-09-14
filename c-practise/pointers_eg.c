#include<stdio.h>
int main(){
    // int age = 22;
    // int *ptr = &age;
    // int _age = *ptr;

    // printf("The value is: %d ", _age);
    
    //printing address
    // printf("%u\n",&age);
    // printf("%u\n", ptr);
    // printf("%u\n", &ptr);

    //value at address
    // printf("%d\n", age);
    // printf("%d\n", *ptr);
    // printf("%d\n", *(&age));
    
    //practise
    int x;
    int *ptr;

    ptr = &x;
    *ptr = 0; //indirectly assigning 0 to x (i.e x=0)

    printf("x= %d\n", x);
    printf("*ptr= %d\n", *ptr);
    
    *ptr += 5; //*ptr -> x , x=x+5
    printf("x= %d\n", x);
    printf("*ptr= %d\n", *ptr);

    (*ptr)++;
    printf("x= %d\n", x);
    printf("*ptr= %d\n", *ptr);   
    return 0;
}