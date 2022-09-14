#include<stdio.h>

// void printString(char arr[]);

// int main(){
    // char name[] ={'h','e','l','l','o','\0'};
    // char name[] ="hello";
//     char firstName[] = "hello";
//     char lastName[] = "world";
     
//     printString(firstName);
//     printString(lastName);
//     return 0;
// }

// void printString(char arr[]){
//     for(int i=0; arr[i] != '\0'; i++){
//         printf("%c",arr[i]);
//     }
//     printf("\n");
// }

// int main(){
//     char name[50];
//     printf("enter name: ");
//     scanf("%s", name);
//     printf("name is: %s", name);
//     return 0;
// }

//multi_words cannot be taken by scanf

// int main(){
//     char fullName[100];
//     scanf("%s", fullName);
//     printf("fullname is: %s", fullName);
// }

//for multiple-words gets() and puts() comes into picture
//gets() is dangerous and outdated do we use fgets()

// int main(){
//     char name[100];
//     gets(name);
//     puts(name);

//     return 0;
// }


// int main(){
//     char name[100];
//     fgets(name, 100 , stdin);
//     puts(name);
// }

//string using array cannot be reinitialized
// int main(){
//     char canChange[100] = "hello world";
//     puts(canChange);
//     canChange[100] = "hello";
//     puts(canChange);
// }

//string can be reinitialized
// int main(){
//     char *canChange = "hello world";
//     puts(canChange);
//     canChange = "hello";
//     puts(canChange);
// }