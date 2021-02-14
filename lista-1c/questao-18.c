#include <stdio.h>
#include <stdlib.h>

int main(){
    double valorIngresso, valorInicial, valorFinal;

    scanf("%lf %lf %lf", &valorIngresso, &valorInicial, &valorFinal);

    double i, ingressosVendidos, lucro, auxI = 0, auxLucro = 0, auxIngressoVendido = 0;

    // calcular variação do valor inicial até o valor final
    for(i = valorInicial; i <= valorFinal; i++){
        // determinar a quantidade de ingressos vendidos a partir do valor do ingresso

        if(i < valorIngresso){
            ingressosVendidos = 120 + (50 * (valorIngresso - i));
        } else {
            if(i == valorIngresso){
                ingressosVendidos = 120;
            } else {
                ingressosVendidos = 120 - (60 * (i - valorIngresso));
            }
        }

        // despesas = 200 + 0,05 * total de ingressos
        // lucro = preço do ingresso * quantidade de ingressos vendidos - despesas

        lucro = (i * ingressosVendidos) - (200 + (0.05 * ingressosVendidos));

        printf("\nV: %.2lf, N: %.0lf, L: %.2lf", i, ingressosVendidos, lucro);

        if(lucro > auxLucro){
            auxI = i;
            auxIngressoVendido = ingressosVendidos;
            auxLucro = lucro;
        }
    }

    printf("\nMelhor valor final: %.2lf\n", auxI);
    printf("Lucro: %.2lf\n", auxLucro);
    printf("Numero de ingressos: %.0lf", auxIngressoVendido);

    
    printf("\n\n");

    // system("pause");
    return 0;
}