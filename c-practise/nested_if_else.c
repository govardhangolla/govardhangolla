#include<stdio.h>
int main(){
    int number ;
    printf("Enter number:");
    scanf("%d", &number);

    if(number > 0){
        printf("positive number\n");
        if(number%2 == 0){
            printf("even");
        } else{
            printf("odd");
        }
    }
    else{
        printf("not a positive number");
    }
}