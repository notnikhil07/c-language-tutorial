#include<stdio.h>
int main(){
    float side, area;
    printf("Enter the side of square\n");
    scanf("%f",&side);
    area = side*side;
    printf("The area of square is %f",area );
    return 0;
}