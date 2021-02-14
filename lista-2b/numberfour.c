#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int time, aux1, aux2;
    double totalPrice;

    scanf("%d", &time);

    aux1 = time % 3;
    aux2 = time / 3;

    totalPrice = aux2 * 10;
    totalPrice = totalPrice + (aux1 * 5);

    printf("\nO VALOR A PAGAR E = %.2lf\n\n", totalPrice);


    return 0;
}