#include<stdio.h>
int main(){
    int a = 2 + 4 * 4;
    printf("value is: %d\n", a);
    int b = 2 * 3 / 6 * 2;
    printf("Value is : %d\n", b);
    int c = 2 * 4 - 5 * 2;
    printf("Value is: %d\n", c);
    int d = 2 * 4 / 5 * 2;              // associativity rule left to right
    printf("Value is: %d\n", d);

    int e = 5 * (2/2) * 3;
    printf("Value is: %d\n", e);
    int f = 5 + 2/2 * 3;
    printf("Value is: %d", f);

    return 0;
}