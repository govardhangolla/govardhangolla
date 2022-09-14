#include<stdio.h>

// int main(){
//     FILE *fptr;
//     // fptr = fopen("text.txt", "w");
//     fptr = fopen("text.txt", "r");


    //   fputc('A', fptr);
    //   fputc('P', fptr);
    //   fputc('P', fptr);
    //   fputc('L', fptr);
    //   fputc('E', fptr);
//    printf("%c", fgetc(fptr));
//    printf("%c", fgetc(fptr));
//    printf("%c", fgetc(fptr));
//    printf("%c", fgetc(fptr));
//    printf("%c", fgetc(fptr));

//    fclose(fptr);
//    return 0;
// }


// upto end of file

int main(){
    FILE *fptr;
    fptr = fopen("text.txt", "r");
    char ch;
    ch = fgetc(fptr);
    while(ch != EOF){
        printf("%c", ch);
        ch = getc(fptr);
    }
    printf("\n");
    fclose(fptr);
    return 0;
}

