#include<stdio.h>
int main()
{
    int value = 3/2;
    float value1 = 3.0 / 2;                 //to find exact answer use float
    printf("The value is:%d\n", value);
    printf("The value is :%f\n", value1);
    int a =(int)1.999999;       // completely removes the decimal points
    printf("%d", a);
}