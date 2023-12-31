#include<stdio.h>
int main(){
    int i=0, num;
    printf("Enter the number\n");
    scanf("%d",&num);
    while(i<=num){
        printf("%d\n",i);
        i++;
    }
    return 0;
}