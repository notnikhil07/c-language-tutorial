//YES - 1
//NO - 0
#include<stdio.h>
int main(){
    int isSunday,isSnowing;

    printf("Its Sunday if yes then type 1 else 0?\n");
    scanf("%d",&isSunday);
    printf("Its Snowing if yes then type 1 else 0?\n");
    scanf("%d",&isSnowing);
    printf("%d", isSunday && isSnowing);

    return 0;
}