#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    double height, edge;
    double volume, baseArea;

    scanf("%lf %lf", &height, &edge);

    baseArea = pow(edge, 2) * 3 * sqrt(3) / 2;
    volume = baseArea * height / 3;


    printf("\nO VOLUME DA PIRAMIDE E = %.2lf METROS CUBICOS\n\n", volume);


    return 0;
}