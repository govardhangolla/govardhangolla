#include<stdio.h>
#include<string.h>

int main(){
    char oldStr[] = "hello";
    char newStr[] = "world";
    strcpy(newStr, oldStr);
    puts(newStr);
}