#include<stdio.h>
void printTable();

int main(){
    int n;
    printf("Enter the number");
    scanf("%d", &n);

    printTable(n);


    return 0;
}

void printTable(int n){
    for(int i =1; i<=10 ; i++){
        printf("%d\n", i*n);
    }
    
}
