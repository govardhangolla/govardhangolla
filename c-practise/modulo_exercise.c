#include<stdio.h>
int main()
{
    printf("%d\n", 16%10);


    // printf("%d", 1.6%1.0);    returns error modulo division cannot works on float
    printf("%d", -18%10);
    
    return 0;
}