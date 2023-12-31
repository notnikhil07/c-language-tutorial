#include<stdio.h>

float areaSquare(float side);
float areaRectangle(float a, float b);
float areaCircle(float rad);

int main(){
    float a, b, side, rad;
    printf("Enter the radius of circle:-");
    scanf("%f",&rad);

    printf("\nThe are of circle is %0.2f", areaCircle(rad));

    return 0;
}

float areaSquare(float side){
    return side * side;
}
float areaRectangle(float a, float b){
    return a * b;
}
float areaCircle(float rad){
    return 3.14 * rad * rad;
}
