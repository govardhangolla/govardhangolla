#include<stdio.h>
int main(){
    int x;
    printf("Enter value : ");
    scanf("%d", &x);
    // for for other numbers x%3,x%4,x%5,.....
    if (x%2==0)
        printf("%d is divisible by 2", x);
    else
        printf("%d is not divisible by 2",x);
}