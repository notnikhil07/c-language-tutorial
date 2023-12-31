#include<stdio.h>
int main(){
    int row;
    printf("Enter the number:-");
    scanf("%d", &row);

    for (int i = 0; i<row ;i++){
        for (int j = 0; j<2*(row - i)-1; j++){
            printf(" ")
        }
    }
}