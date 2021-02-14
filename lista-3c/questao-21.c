#include <stdio.h>
#include <stdlib.h>

int compararNumerosInvertidos(int *numeroParaInverter, int i){ // 3 2 1
    int primeiroNumero, segundoNumero, terceiroNumero;
    int aux, j, maiorNumero[i];

    for(j = 0; j < i; j++){
        primeiroNumero = numeroParaInverter[j] / 100; // 3
        aux = numeroParaInverter[j] % 100; // 2 1
        segundoNumero = aux / 10; // 2
        terceiroNumero = aux % 10; // 1

        maiorNumero[j] = (terceiroNumero * 100) + (segundoNumero * 10) + primeiroNumero;
    }

    if(maiorNumero[0] > maiorNumero[1]){
        return maiorNumero[0];
    } else {
        return maiorNumero[1];
    }
}

int main(){
    int casos;

    scanf("%d", &casos);

    int numero[2], numeroMaior[casos];
    int i;

    for(i = 0; i < casos; i++){
        scanf("%d %d", &numero[0], &numero[1]);

        numeroMaior[i] = compararNumerosInvertidos(numero, 2);
    }

    for(i = 0; i < casos; i++){
        printf("\n%d", numeroMaior[i]);
    }


    printf("\n\n");

    system("pause");
    return 0;
}