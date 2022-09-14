#include<stdio.h>

// int main(){
//     FILE *fptr;
//     fptr = fopen("text.txt", "r");
//     char ch;
//     fscanf(fptr, "%c", &ch);
//     printf("%c", ch);
//     fscanf(fptr, "%c", &ch);
//     printf("%c", ch);
//     fscanf(fptr, "%c", &ch);
//     printf("%c", ch);
//     fscanf(fptr, "%c", &ch);
//     printf("%c", ch);
//     fclose(fptr);
// }

int main(){
    FILE *fptr;
    fptr = fopen("text.txt", "r");
    int ch;
    fscanf(fptr, "%d", &ch);
    printf("%d\n", ch);
    fscanf(fptr, "%d", &ch);
    printf("%d\n", ch);
    fscanf(fptr, "%d", &ch);
    printf("%d\n", ch);
    
    fclose(fptr);
}