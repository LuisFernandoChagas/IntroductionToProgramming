#include <stdio.h>
#include <stdlib.h>

int main(){
    double n;
    int i, j, aux; // auxiliar

    scanf("%lf", &n);

    aux = n; // aux é do tipo int, logo não pode armazenar o valor após a vírgula
    if(n < 0 || aux != n){
        printf("\nNumero invalido!\n\n");
        // system("pause");
        return 0;
    }

    if(aux == 0 || aux == 1){
        printf("\nNAO PRIMO\n\n");
        // system("pause");
        return 0;
    }

    for(i = 2; i <= (n / 2); i++){
        j = n / i; // o cálculo de resto não é possível ser feito com valores do tipo double
        if(j * i == n){
            printf("\nNAO PRIMO\n\n");
            // system("pause");
            return 0;
        }
    }

    printf("\nPRIMO\n\n");


    // system("pause");
    return 0;
}