#include<stdio.h>
// int main(){
//     int marks1 = 98;      // this statements can be
//     int marks2 =87;       //  written using   
//     int marks3 = 90;      //     ARRAYS*/

//     int marks[3] ={98,87,90};  // array 
// }

int main(){
    int marks[3];

    printf("Enter phy marks:");
    scanf("%d",&marks[0]);

    printf("Enter chem marks: ");
    scanf("%d",&marks[1]);

    printf("enter math marks: ");
    scanf("%d",&marks[2]);

    printf("phy  = %d, chem = %d, math = %d",marks[0],marks[1],marks[2]);
}