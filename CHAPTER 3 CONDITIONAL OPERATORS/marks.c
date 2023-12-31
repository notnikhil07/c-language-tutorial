#include<stdio.h>
int main(){
    int marks;
    printf("Enter marks(0-100):");
    scanf("%d", &marks);

    if(marks >= 0 && marks <33){
        printf("FAIL");
    }
    else if(marks>33 && marks<100){
        printf("PASS");
    }
    else {
        printf("Wrong marks");
    }
    return 0;
}