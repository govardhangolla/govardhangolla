// find sum of n natural numbers
#include<stdio.h>
// int main(){
    // int n;
    // printf("Enter number:");
    // scanf("%d", &n);

    // int sum=0;
    // for(int i=1, j=n; i<=n && j>=1; i++,j--){
    //     sum = sum + i;
    //     printf("%d\n", j);
    // }
    // printf("Sum is: %d", sum);

    // for(int i=n; i>=1; i--){
    //     printf("%d\n", i);
    // }
    // int sum=0;
    // for(int j=n;j>=1; j--){
    //     sum = sum + j;
    //     printf("%d\n", j);
    // }
    // printf("Sum is: %d", sum);
    // return 0;
// }

//table of number input by user
// int main(){
//     int n;
//     printf("Enter the number:");
//     scanf("%d", &n);

//     for(int i=1; i<=10; i++){
//         printf("%d\n", n*i);
//     }
//     return 0;
// }


//break 
// int main(){
//     for(int i=1; i<=5; i++){
//         if(i==3){
//             break;
//         }
//         printf("%d\n",i);
//     }
// }

//numbers as input from user until user enter odd number
//  int main(){
//     int n;
//     while(1){
//         printf("Enter value:");
//         scanf("%d", &n);
//         printf("%d\n",n);
//         if(n%2 != 0){
//             break;
//         }
//     }
// }

//numbers as input from users until user enters divisible by 7

// int main(){
    // int n;
    // while(1){
//         printf("Enter value:");
//         scanf("%d", &n);
//         printf("%d\n",n);
//         if(n%7 == 0){
//             break;
//         }
//     }
// }

//continue
// int main(){
//     for(int i=1; i<=5; i++){
//         if(i==3){
//             continue;;
//         }
//         printf("%d\n",i);
//     }
// }

//print odd numbers from 5 to 50
// int main(){
//     for(int i=5; i<=50; i++){
//         if(i%2 == 0){
//             continue;
//         }
//         printf("%d\n",i);
//     }
// }

//factorial of number
int main(){
    int n;
    printf("Enter the number:");
    scanf("%d", &n);
    int fact = 1;
    for(int i=1; i<=n; i++){
        fact = fact * i;
    }
    printf("%d", fact);
}