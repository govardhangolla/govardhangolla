#include<stdio.h>
int main(){
    int n;
    int sum=0;
    int temp;
    int r;
    printf("Enter number:");
    scanf("%d", &n);
    temp=n;
    while(n>0){
        r=n%10;
        sum=sum+(r*r*r);
        n=n/10;
    }
    if(temp==sum)
        printf("number is armstrong",sum);
    else
        printf("number is not armstrong");
    return 0;
}




