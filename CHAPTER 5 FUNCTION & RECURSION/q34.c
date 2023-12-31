#include<stdio.h>

float convertTemp(float celcius);

int main(){
    float celcius, far;
    printf("Enter the temprature\n");
    scanf("%f", &celcius);

    printf("%f", convertTemp(celcius));

    return 0;
}

float convertTemp(float celcius){
    float far = celcius * (9.0/5.0) + 32;
    return far;
}
