#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    double priceFactory, percentegeDistributor, percentageTax;
    double totalDistributor, totalTax, salePrice;
    
    scanf("%lf", &priceFactory);
    scanf("%lf", &percentegeDistributor);
    scanf("%lf", &percentageTax);

    totalDistributor = priceFactory * percentegeDistributor / 100;
    totalTax = priceFactory * percentageTax / 100;
    salePrice = totalDistributor + totalTax + priceFactory;
    

    printf("\nO VALOR DO CARRO E = %.2lf\n\n", salePrice);


    return 0;
}