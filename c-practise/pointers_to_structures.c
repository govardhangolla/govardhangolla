#include<stdio.h>

struct student{
    int roll;
    float cgpa;
    char name[100];
};

int main(){
    struct student s1 = {1568,8.9, "hello"};
    printf("student roll is: %d\n", s1.roll);

    struct student *ptr = &s1;
    printf("student roll is: %d\n", (*ptr).roll);
    printf("student roll is: %d\n", ptr->roll);
}
