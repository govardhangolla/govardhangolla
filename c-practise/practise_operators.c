#include<stdio.h>
int main(){
    // logical and
    // int isSunday = 1;
    // int isSnowing = 1;
    // printf("%d\n", isSunday && isSnowing);
    
    // logical or
    // int isMonday = 1;
    // int isRaining = 0;
    // printf("%d\n", isMonday || isRaining);

    // 2 digit number
    // int x;
    // printf("Enter value: ");
    // scanf("%d", &x);
    // if(x>9 && x <100)
    //     printf("value is 2 digit");
    // else
    //     printf("value is not 2 digit");

    // average of 3 numbers
    // int a;
    // int b;
    // int c;
    // printf("Enter value of a:");
    // scanf("%d", &a);
    // printf("Enter value of b:");
    // scanf("%d", &b);
    // printf("Enter value of c:");
    // scanf("%d", &c);
    // float avg;
    // avg = (a + b + c) /3;
    // printf("avg is: %f",avg);

    //character is digit or not
    // char x;
    // printf("Enter character:");
    // scanf("%d", &x);
    // if(x>0 & x<=9)
    //     printf("character is digit");
    // else
    //     printf("character is not a digit");
        
    // print the smallest number
    int a;
    int b;
    printf("Enter the value of a:");
    scanf("%d", &a);
    printf("Enter the value of b");
    scanf("%d", &b);

    if (a<b)
        printf("value of %d is less than %d",a,b);
    else
        printf("value of %d is greater than %d",a,b);

}