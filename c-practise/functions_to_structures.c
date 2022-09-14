#include<stdio.h>

struct student{
    int roll;
    float cgpa;
    char name[20];
};

void printStructure(struct student s1);

int main(){
    struct student s1 = {124, 5.9,"hello"};
    printStructure(s1);
    return 0;
}

void printStructure(struct student s1){
    printf("student roll = %d\n", s1.roll);
    printf("student cgpa = %f\n", s1.cgpa);
    printf("student name = %s\n", s1.name);
}