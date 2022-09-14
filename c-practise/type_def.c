#include<stdio.h>
#include<string.h>

typedef struct student{
    int roll;
    float cgpa;
    char name[100];
} stu;

int main(){
    stu s1;
    s1.roll= 2355;
    s1.cgpa = 7.8;                             
    strcpy(s1.name, "hello");    // s1.name = "hello"; gives error

    printf("%d\n", s1.roll);
    printf("%f\n", s1.cgpa);
    printf("%s\n", s1.name);

    stu s2;
    s2.roll= 2356;
    s2.cgpa = 8.9;                             
    strcpy(s2.name, "world");

    printf("%d\n", s2.roll);
    printf("%f\n", s2.cgpa);
    printf("%s\n", s2.name);

    stu s3;
    s3.roll= 2355;
    s3.cgpa = 7.8;                             
    strcpy(s3.name, "hello");

    printf("%d\n", s3.roll);
    printf("%f\n", s3.cgpa);
    printf("%s\n", s3.name);
}