#include<stdio.h>
#include<stdlib.h>
int main(){
    float n;
    printf("Enter the n value: ");
    scanf("%f", &n);
    float *ptr;
    ptr =(float *) calloc(n, sizeof(float));

    for(int i=0; i<n; i++){
        printf("%f\n", ptr[i]);
    }

    free(ptr);

    ptr =(float *) calloc(2, sizeof(float));
    for(int i=0; i<2; i++){
        printf("%f\n", ptr[i]);
    }
}