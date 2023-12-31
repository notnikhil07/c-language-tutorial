#include<stdio.h>

int calcPercentage(int science, int maths, int sanskrit);

int main(){
    int science, maths, sanskrit;
    printf("Enter the marks of Science\n");
    scanf("%d",&science);
    printf("Enter the marks of Maths\n");
    scanf("%d",&maths);
    printf("Enter the marks of Sanskrit\n");
    scanf("%d",&sanskrit);

    printf("%d", calcPercentage(science, maths, sanskrit));

    return 0;
}

int calcPercentage(int a, int b, int c){
    return ((a+b+c)/3);
}   
