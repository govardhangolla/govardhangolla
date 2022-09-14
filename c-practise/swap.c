#include<stdio.h>

//call by value
void swap(int a, int b);
//call by reference
void _swap(int *a, int *b);
int main(){
    int x = 3;
    int y = 5;
    swap(x,y);
    printf("swap of x is %d and y is %d \n",x,y);

    _swap(&x,&y);
    printf("swap of x is %d and y is %d \n",x,y);
    return 0;
}

void swap(int a, int b){
    int t = a;
    a = b;
    b = t;
    printf("swap of a is: %d and b is %d\n",a,b);
}

void _swap(int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;
    printf("swap of a is: %d and b is %d\n",*a,*b);
}