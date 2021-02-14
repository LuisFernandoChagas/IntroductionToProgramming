#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pi 3.14159

int main(){
    double radius, height;
    double circleArea, sideArea, totalArea, finalPrice;

    scanf("%lf", &radius);
    scanf("%lf", &height);

    circleArea = pow(radius, 2) * pi;
    sideArea = 2 * pi * radius * height;
    totalArea = (2 * circleArea) + sideArea;

    finalPrice = totalArea * 100;


    printf("\nO VALOR DO CUSTO E = %.2lf\n\n", finalPrice);


    return 0;
}