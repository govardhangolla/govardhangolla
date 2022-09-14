 #include<stdio.h>
 int main(){
    // int i=1;
    // while(i<=5){
    //     printf("Hello World\n");
    //     i++;
    // }

    //print numbers from o to n, n is given by user

    int n;
    printf("Enter number:");
    scanf("%d",&n);
    int i=0;
    while(i<=n){
        printf("%d\n",i);
        i++;
    }
    
    // int i=0;                     /* This condition
    // while(i<=5){                     results in
    //     printf("%d",i);              infinite loop */
    // }
    return 0;
 }