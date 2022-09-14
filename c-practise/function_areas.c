#include<stdio.h>
float squareArea(float side);
float circleArea(float radius);
float rectangleArea(float a, float b);

int main(){
    float a=8;
    float b=5;

    printf("Area of rectangle is: %f", rectangleArea(a,b));
    return 0;
}

float squareArea(float side){
    return side * side;
}

float circleArea(float radius){
    return 3.14 * radius * radius;
}

float rectangleArea(float a, float b){
    return a*b;
}
