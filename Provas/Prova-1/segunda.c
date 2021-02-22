#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pi 3.1416

int main(){
    double raio, altura, linha, base;

    scanf("%lf %lf", &raio, &altura);

    base = 2 * pi * raio;

    linha = pow(base, 2) + pow(altura, 2);


    printf("\n%.2lf", sqrt(linha));

    

    printf("\n\n");

    // system("pause");
    return 0;
}