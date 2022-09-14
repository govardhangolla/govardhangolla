#include<stdio.h>
#include<string.h>
int main(){
    char str1[] ="apple";
    char str2[] = "apple";

    printf("%d\n", strcmp(str1, str2));
    
    char alp1[] = "banana";
    char alp2[] = "apple";

    printf("%d\n", strcmp(alp1, alp2));
    
    char string1[] = "apple";
    char string2[] = "banana";
    printf("%d", strcmp(string1, string2));
    return 0;
}