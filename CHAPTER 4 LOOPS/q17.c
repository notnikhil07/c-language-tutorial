#include<stdio.h>
int main(){
    int num,mul;
    do {
        printf("Enter the number\n");
        scanf("%d",&num);

        if(num%7 ==0){
            break;
        }
    }while(1);
    return 0;
}