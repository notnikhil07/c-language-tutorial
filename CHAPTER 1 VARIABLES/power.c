#include<stdio.h>
int main(){
    int power, a, b;
    printf("Enter the number\n");
    scanf("%d",&a);
    printf("Enter the power\n");
    scanf("%d",&b);
    power = pow(a,b);
    printf("%d",power);

    return 0;
}