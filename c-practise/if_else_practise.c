#include<stdio.h>
int main(){
    // int marks;
    // printf("Enter marks:");
    // scanf("%i", &marks);
    // if(marks>= 0 && marks <= 30){
    //     printf("Fail \n");
    // } else if(marks >= 30 && marks <= 100) {
    //     printf("Pass \n");
    // } else{
    //     printf("wrong marks");
    // }

    // marks <= 30 ? printf("FAIL"):printf("PASS");
    // if(marks >= 90 && marks <= 100){
    //     printf("grade A+");
    // }else if (marks >= 70 && marks < 90){
    //     printf("grade A");
    // } else if (marks >= 30 && marks < 70){
    //     printf("grade B");
    // } else{
    //     printf("FAIL");
    // }

    // int x = 2;
    // if (x= 1){
    //     printf("x is equal to 2");
    // }else {
    //     printf("x is not equal to 2");
    // }

    char c;
    printf("Enter character:");
    scanf("%c", &c);

    if(c >= 'A' && c <= 'Z'){
        printf("upper character");
    } else if(c >= 'a' && c <= 'z'){
        printf("lower character");
    } else{
        printf("not english character");
    }

}
