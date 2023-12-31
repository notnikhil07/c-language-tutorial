#include<stdio.h>
int main(){
    int num;
    printf("Enter the number:-");
    scanf("%d", &num);

    int sum=0;
    for(int i=1;i<=num;i++){
        sum = sum + i;
    }
    printf("Sum is %d\n",sum);

    for(int i=num;i>=1;i--){
    printf("%d\n",i);
    }
    return 0;
}