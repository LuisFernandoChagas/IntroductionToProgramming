#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int intValue, y;
    int centena, cinquentena, dezena;

    scanf("%d", &intValue); // 1271

    centena = intValue / 100; // 12 notas
    y = centena * 100; // y = 1200
    intValue = intValue - y; // intValue = 71

    cinquentena = intValue / 50; // 1 nota
    y = cinquentena * 50; // y = 50
    intValue = intValue - y; // intvalue = 21

    dezena = intValue / 10; // 2 notas
    y = dezena * 10; // y = 20
    intValue = intValue - y; // intValue = 1


    printf("\nNOTAS DE 100 = %d\n\n", centena);
    printf("\nNOTAS DE 50 = %d\n\n", cinquentena);
    printf("\nNOTAS DE 10 = %d\n\n", dezena);
    printf("\nMOEDAS DE 1 = %d\n\n", intValue);


    return 0;
}