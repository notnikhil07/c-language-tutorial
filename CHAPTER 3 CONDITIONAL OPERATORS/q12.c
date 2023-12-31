#include<stdio.h>
int main(){
    char ch;
    printf("Enter the character:-");
    scanf("%c", &ch);

    if(ch>= 'A' && ch<= 'Z') {
        printf("Upper case");
    }
    else if (ch>='a' && ch<='z') {
        printf("Lower case");
    }
    else {
        printf("not english letter");
    }
    return 0;
}
