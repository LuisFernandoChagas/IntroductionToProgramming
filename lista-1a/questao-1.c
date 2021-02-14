#include <stdio.h>
#include <stdlib.h>

int main(){
    double wage, energy;
    double valueEnergy, valueTotal, valueDiscount;
    scanf("%lf", &wage);
    scanf("%lf", &energy);

    valueEnergy = (wage * 70) / 10000;
    printf("\nCusto por kW: R$ %.2lf", valueEnergy);

    valueTotal = valueEnergy * energy;
    printf("\nCusto do consumo: R$ %.2lf", valueTotal);

    valueDiscount = (valueTotal * 90) / 100;
    printf("\nCusto com desconto: R$ %.2lf\n\n", valueDiscount);


    return 0;
}