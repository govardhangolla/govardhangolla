#include<stdio.h>
#include<string.h>

struct student{
    int roll;
    float cgpa;
    char name[100];
};

// int main(){
//     struct student s[100];
//     s[1].roll= 2355;
//     s[1].cgpa = 7.8;                             
//     strcpy(s[1].name, "hello");    // s1.name = "hello"; gives error

//     printf("%d\n", s[1].roll);
//     printf("%f\n", s[1].cgpa);
//     printf("%s\n", s[1].name);
// }

int main(){
   struct student s1 = {1765, 8.9, "hello"}; 
   printf("student roll = %d\n", s1.roll);
}