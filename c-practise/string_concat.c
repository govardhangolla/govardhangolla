#include<stdio.h>
#include<string.h>

int main(){
    char string1[100] = "hello"; //size must be taken carefully
    char string2[] = "world";
    strcat(string1, string2);
    puts(string1);
    puts(string2);
}