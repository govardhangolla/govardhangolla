#include<stdio.h>
int main(){
    float price[3] = {100.0, 200.0, 300.0};
    // printf("Enter 3 numbers:");
    // scanf("%f",&price[0]);
    // scanf("%f",&price[1]);
    // scanf("%f",&price[2]);

//     float total_price1 = price[0]+(0.18*price[0]);
//     float total_price2 = price[1]+(0.18*price[1]);
//     float total_price3 = price[2]+(0.18*price[2]);

//     printf("total is %f\n",total_price1);
//     printf("total is %f\n", total_price2);
//     printf("total is %f\n",total_price3);

    printf("total_price of 1 is %f \n",price[0]+(0.18*price[0]));
    printf("total_price of 2 is %f \n",price[1]+(0.18*price[1]));
    printf("total_price of 3 is %f \n",price[2]+(0.18*price[2]));
}