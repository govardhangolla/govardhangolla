#include<stdio.h>

int main(){
    printf("logical and\n");
    printf("%d\n", 4>3 && 2<7);
    printf("%d\n", 3>7 && 4 < 7);
    printf("logical or\n");
    printf("%d\n", 3>7 || 4 < 7);
    printf("%d\n", 3>9 || 7>8);
    printf("logical not\n");
    printf("%d\n", !(7<6));
    printf("%d\n", !(3>7 && 4 < 7));
}