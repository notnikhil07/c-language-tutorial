#include<stdio.h>
void namaste();
void bonjour();
int main(){
    char country;
    printf("Name the country(For INDIA(i) AND FOR FRENCH(f)):-\n");
    scanf("%c", &country);

    if(country == 'i'){
        namaste();
    }
    else if(country == 'f'){
        bonjour();
    }
    else {
        printf("Not found");
    }
    return 0;
}

void namaste(){
    printf("NAMASTE");
}

void bonjour(){
    printf("BONJOUR");
}