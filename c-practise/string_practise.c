// read characters using %c
#include<stdio.h>
#include<string.h>
// int main(){
//     char str[100];
//     char ch;
//     int i=0;
  
//     while(ch != '\n'){
//         scanf("%c", &ch);
//         str[i] = ch;
//         i++;
//     }
//     str[i] = '\0';
//     puts(str);
//     return 0;

// }

//salted  form of password entered by user at the end
// void salting(char password[]);

// int main(){
//     char password[100];
//     scanf("%s", password);
//     salting(password);

//     return 0;
// }

// void salting(char password[]){
//     char salt[] ="123";
//     char newPass[100];

//     strcpy(newPass, password);
//     strcat(newPass, salt);
//     puts(newPass);
// }

// slice 
// void slice(char str[], int n, int m);
// int main(){
//     char str[] ="hello world";
//     slice(str, 3,6);
//     return 0;
// }

// void slice(char str[], int n, int m){
//     char newStr[100];
//     int j =0;
//     for(int i=n; i<=m; i++,j++){
//         newStr[j] = str[i];
//     }
//     newStr[j] ='\0';
//     puts(newStr);
// }

//count vowel
// int countVowel(char str[]);
// int main(){
//     char str[] = "helloworld";
//     printf(" count is:%d",countVowel(str));
//     return 0;
// }

// int countVowel(char str[]){
//     int count=0;
    // for(int i=0; str[i] != '\0'; i++){
    //     if(str[i] =='a'|| str[i] =='e' || str[i]=='i'|| str[i] =='o' || str[i] =='u'){
    //         count++;
    //     }
    // }
//     return count++;
// }

//search for character
// void checkCharacter(char str[], char ch);
// int main(){
//     char str[] = "hello world";
//     char ch ='w';
//     checkCharacter(str, ch);
//     return 0;
// }

// void checkCharacter(char str[], char ch){
//     for(int i=0; str[i] != '\0'; i++){
//         if(str[i] == ch){
//             printf("character is present");
//             return;
//         }
//     }
//     printf("character is not present");
// }

//vector
// struct vector{
//     int x;
//     int y;
// };

// void calcSum(struct vector v1, struct vector v2, struct vector sum);
// int main(){
//     struct vector v1 = {5, 10};
//     struct vector v2 = {3, 7};
//     struct vector sum = {0};

//     calcSum(v1, v2, sum);
//     return 0;
// }

// void calcSum(struct vector v1, struct vector v2, struct vector sum){
//     sum.x = v1.x + v2.x;
//     sum.y = v1.y + v2.y;

    
//     printf("sum of x is: %d\n", sum.x);
//     printf("sum of y is: %d\n", sum.y);
// }


// struct complex{
//     int real;
//     int img;
// };

// int main(){
//     struct complex number1 = {5,8};
//     struct complex *ptr = &number1;
//     printf("real part is: %d\n", ptr->real);
//     printf("imaginary part is : %d\n", ptr->img);
//     return 0;
// }

//bank account
typedef struct BankAccount{
    int accountNo;
    char name[100];
} acc;

int main(){
    acc acc1 = {123, "hello"};
    acc acc2 = {345, "world"};

    printf("acc no: %d\n", acc1.accountNo);
    printf("name = %d\n", acc1.name);
}