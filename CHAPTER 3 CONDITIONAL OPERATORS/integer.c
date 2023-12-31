#include<stdio.h>
int main(){
    int number;
    printf("Enter the number\n");
    scanf("%d",&number);

    if(number>=0){
        printf("Postitive\n");
        if(number % 2 == 0) {
            printf(("even \n"));
        }
        else{
                printf("Odd");
            }
    }
    else {
        printf("Negative\n");
        if(number % 2 == 0) {
            printf(("even \n"));
        }
        else{
                printf("Odd");
            }
    }
    return 0;
}