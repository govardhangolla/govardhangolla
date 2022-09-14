#include<stdio.h>
// int main(){
//     int aadhar[5];
//     int *ptr = &aadhar[0];
//     for(int i=0; i<5; i++){
//         printf("%d index : ", i);
//         scanf("%d", &aadhar[i]);
//     }

//     for(int i=0; i<5; i++){
//         printf("%d index = %d\n", i, aadhar[i]);
//     }
//     return 0;
// }

//count the number of odds in array
// int countOdd(int arr[], int n);

// int main(){
//     int arr[] ={1,2,3,4,5,6};
//     printf("%d", countOdd(arr, 6));
//     return 0;
// }

// int countOdd(int arr[], int n){
//     int count = 0;
//     for (int i=0; i<=n;i++){
//         if(arr[i]%2 != 0){
//             count++;
//         }
//     }
//     return count;
// }

// int main(){
//     int arr[]={1,2,3,4,5};
//     printf("%d\n", *(arr+2));
//     printf("%d\n", *(arr+5));
//     return 0;
// }

//function to reverse an array
// void reverse(int arr[], int n);
// void printNum(int arr[], int n);
 
//  int main(){
//     int num[] = {1,2,3,4,5};
//     reverse(num, 5);
//     printNum(num, 5);
//     return 0;
//  }

//  void reverse(int arr[], int n){
//     for(int i=0; i<n/2; i++){
//         int firstNum = arr[i];
//         int secondNum = arr[n-i-1];
//         arr[i] = secondNum;
//         arr[n-i-1] = firstNum;
//     }
//  }

// void printNum(int arr[], int n){
//     for(int i=0; i<n; i++){
//         printf("%d\t", arr[i]);
//     }
//     printf("\n");
// }

//fibonacci number

// int main(){
//     int n;
//     printf("Enter number(n>2): ");
//     scanf("%d", &n);
//     int fib[n];
//     fib[0]=0;
//     fib[1]=1;
    
//     for (int i=2; i<n; i++){
//         fib[i] = fib[i-1] + fib[i-2];
//         printf("%d\t",fib[i]);
//     }
//     return 0;
// }

//print tables in 2-d
void storeTable(int arr[][10], int n, int m, int number);
int main(){
    int tables[2][10];
    storeTable(tables,0,10,2);
    storeTable(tables,1,10,3);

    for(int i=0; i<10; i++){
        printf("%d\t", tables[0][i]);
    }

    
    for(int i=0; i<10; i++){
        printf("%d\t", tables[1][i]);
    }
    return 0;
}

void storeTable(int arr[][10], int n, int m, int number){
    for (int i=0; i<m; i++){
        arr[n][i]=number * (i+1);
    }
}