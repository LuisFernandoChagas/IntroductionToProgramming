#include <stdio.h>
#include <stdlib.h>

double conversion(double grauF){
    double grauC;

    grauC = 5 * (grauF - 32) / 9;

    return grauC;
}

int main(){
    int cases, i;
    scanf("%d", &cases);

    double fahrenheit[cases], celsius[cases];

    for(i = 0; i < cases; i++){
        scanf("%lf", &fahrenheit[i]);

        celsius[i] = conversion(fahrenheit[i]);
    }

    for(i = 0; i < cases; i++){
        printf("\n%.2lf FAHRENHEIT EQUIVALE A %.2lf CELSIUS", fahrenheit[i], celsius[i]);
    }

    
    printf("\n\n");

    return 0;
}