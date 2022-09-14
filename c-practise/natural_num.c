#include<stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    if(n>=1){
        printf("number is natural number..");
    } else {
        printf("number is not a natural number..");
    }
}