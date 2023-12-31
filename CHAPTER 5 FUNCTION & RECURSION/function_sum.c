#include<stdio.h>

int sum(int a, int b);

int main(){
    int a, b;
    printf("Enter the value of a: ");
    scanf("%d", &a);

    printf("Enter the value of b: ");
    scanf("%d", &b);

    int s = sum(a, b);
    printf("The sum of a and b is %d", s);

    return 0;
}

int sum(int x, int y){
    return x + y;
}

