#include<stdio.h>

int sum(int n);

int main(){
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);

    printf("sum of first %d natural number is %d\n", n, sum(n));

    return 0;
}

int sum(int n){
    if(n == 1){
        return 1;
    }
    int sumNm1 = sum(n-1);
    int sumN = sumNm1 + n;
    return sumN;
}