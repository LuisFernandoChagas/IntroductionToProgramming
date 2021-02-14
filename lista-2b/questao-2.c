#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int count;
    double cubeMetters, pricePerCube, aux;
    char letter;

    scanf("%d %lf %c", &count, &cubeMetters, &letter);

    if(letter == 'R'){
        pricePerCube = 5.00 + (0.05 * cubeMetters);
    } else {
        if(letter == 'C'){
            aux = cubeMetters - 80;
            pricePerCube = 500 + (aux * 0.25);
        } else {
            aux = cubeMetters - 100;
            pricePerCube = 800 + (aux * 0.04);
        }
    }

    printf("\nCONTA = %d", count);
    printf("\nVALOR DA CONTA = %.2lf\n\n", pricePerCube);


    return 0;
}