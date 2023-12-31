#include<stdio.h>
int main(){
    float radius, area;
    printf("Enter the radius of circle\n");
    scanf("%f", &radius);
    area = 3.14*radius*radius;
    printf("Area of circle is %f", area);


    return 0;
}