#include<stdio.h>
int main(){
    int marks;
    printf("Enter the marks(0-100):-");
    scanf("%d", &marks);

    if (marks<30){
        printf("C GRADE");
    }
    else if  (marks>= 30 && marks<70) {
        printf("B GRADE");
    }
    else if (marks>=70 && marks<90){
        printf("A GRADE");
    }
    else if (marks>=90 && marks<=100) {
        printf("A+ GRADE");
    }
    else {
        printf("wrong marks");
    }

    return 0;
}