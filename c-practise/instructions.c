#include<stdio.h>
int main()
{
    // type declaration instructions
    int a = 34;
    int b = a;
    int c = b * 6;
    int d = 1, e;

    // int oldAge = 45;                 /* results in error
    // int newAge = oldAge + years;        because we have to declare
    //  int years = 2;                     the year data type */

    int oldAge = 45;
    int years = 2;
    int newAge = oldAge + years;
 


    // int x = y = z = 4;      //results in error 
    int x, y, z;
    x = y = z = 4;

    //arithmetic instructions
    int e=4,f=5;
    int g= 4;
    // g+e = f;    results in error
    g = e + f;
    // e = fg;     results in error
    e = f * g;
    return 0;
}



