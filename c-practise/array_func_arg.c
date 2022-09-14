
// void printNumber(int arr[], int n);
void printNumber(int *ptr, int n);

#include<stdio.h>
int main(){
    int arr[] = {100,67,891,89,67};
    // printNumber(arr, 5);
    printNumber(&arr[0], 5);
    return 0;
}

// void printNumber(int arr[], int n){
    void printNumber(int *arr, int n){
    for(int i=0; i<n; i++){
        printf("%d\n", arr[i]);
    }
}