#include<stdio.h>

int main()
{
    // printf("Hello World..");
    int number = 25;
    char star = '*';
    int age = 22;
    age = 34;           //can be updated
    float pi = 3.14;

    int a = 34;
    int A = 23;         // variables are case sensitive

    int _age = 45;      //1st character must be alphabet or '_'
    // int 1age = 45;    results in error
    // int -age = 45;    results in error

    int monthly_income = 23689;     //no comma or blank space other than '_'
    // int monthly income = 23689;   results in error

    //data types
    // int age = 34;
    // float pi = 3.14;
    // char hashtag = '#';
    // printf("age is: %d \n", age);
    // printf("float is: %f \n", pi);
    // printf("star is: %c \n", star);
   

    int count;
    printf("Enter the count:\n ");
    scanf("%d", &count);
    printf("Entered count is %d", count);

     return 0;
}
