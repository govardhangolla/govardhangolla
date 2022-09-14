#include<stdio.h>
// //function declaration
// void printHello();
// void printGoodbye();

// int main(){
//     printHello(); //function call
//     printGoodbye();
//     printHello();
//     return 0;
    
// }

// //function definition
// void printHello(){
//     printf("Hello!\n");
// }
// void printGoodbye(){
//     printf("good bye!..\n");
// }

// void namaste();
// void bonjour();

// int main(){
//     char ch;
//     printf("Enter character:");
//     scanf("%c", &ch);
//     if (ch =='i'){
//         namaste();          //direct call
//     } //else {
//     //     bonjour();
//     // }
//     return 0;
// }

// void namaste(){
//     printf("namaste\n");
//     bonjour();              //indirect call
// }
// void bonjour(){
//     printf("bonjour\n");
// }

//function declaration
// int sum(int x, int y);

// int main(){
//     int a,b;
//     printf("Enter first number:");
//     scanf("%d", &a);
//     printf("Enter second number: ");
//     scanf("%d", &b);

//     int s= sum(a,b);     //function call
//     printf("%d", s);
//     return 0;
// }
// //function definition
// int sum(int x, int y){
//     return x+y;
// }

//function declaration
void printTable(int n);

int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);

    printTable(n);  //argument/actual parameter

    return 0;
}

void printTable(int n){  //parameter/formal parameter
    for(int i=1; i<=10; i++){
        printf("%d\n", n*i);
    }
}

