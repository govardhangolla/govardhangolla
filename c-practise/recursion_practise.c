#include<stdio.h>
// sum of numbers
// int sum(int n);
// int main(){
//     printf("sum is: %d",sum(10));
//     return 0;
// }

// int sum(int n){
//     if  (n==1){
//         return 1;
//     }
//     int sumNm1 = sum(n-1);
//     int sumNm = sumNm1 + n;
//     return sumNm;
// }

//factorial
// int fact(int n);

// int main(){
//     printf("factorial of 5 is: %d", fact(5));
//     return 0;
// }

// int fact(int n){
//     if(n==1){
//         return 1;
//     }
//     int factNm1 = fact(n-1);
//     int factNm = factNm1 * n;
//     return factNm;
// }

// convert celsius to far
// float convertTemp(float celsius);

// int main(){
//     int far = convertTemp(0);
//     printf("%f",far);
//     return 0;
// }
 
// float convertTemp(float celsius){
//     float far = celsius * (9.0/5.0) + 32;
//     return far;
// }

// calculating percentage
// int calPercentage(int science, int math, int sanskrith);

// int main(){
//     int sc = 89;
//     int math = 89;
//     int san = 89;
//     printf("Percentage is: %i", calPercentage(sc,math,san));
//     return 0;
// }

// int calPercentage(int science, int math, int sanskrith){
//     return (science + math + sanskrith)/3;
// }

// fibonacci series

// int fib(int n);

// int main(){
//     fib(6);
//     return 0;
// }
// int fib(int n){
//     if(n==1){
//         return 1;
//     }
//     if(n==0){
//         return 0;
//     }
//     int fibNm1 = fib(n-1);
//     int fibNm2 = fib(n-2);
//     int fibN = fibNm1 + fibNm2;
//     printf("fib of %d is %d\n",n,fibN);
//     return fibN;
// }

//fibonacci of nth term
int fib(int n);

int main(){
    printf("%d",fib(6));
    return 0;
}
int fib(int n){
    if(n==1){
        return 1;
    }
    if(n==0){
        return 0;
    }
    int fibNm1 = fib(n-1);
    int fibNm2 = fib(n-2);
    int fibN = fibNm1 + fibNm2;
    return fibN;
}