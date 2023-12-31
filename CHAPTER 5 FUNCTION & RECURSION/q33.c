#include<stdio.h>

int fact(int n);

int main(){
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);

    printf("factorial of %d is %d\n", n, fact(n));

    return 0;
}

int fact(int n){
    if(n == 0){
        return 1;
    }
    int factNm1 = fact(n-1);
    int factN = factNm1 * n;
    return factN;
}