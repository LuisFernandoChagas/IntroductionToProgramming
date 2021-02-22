#include <stdio.h>
#include <stdlib.h>
#define N 50

int main(){
    int n, i, j, tamanhoPositivo = 0, tamanhoNegativo = 0;
    scanf("%d", &n);

    int numero, positivos[N], negativos[N], aux1;

    for(i = 0; i < n; i++){
        scanf("%d", &numero);

        if(numero > 0){
            positivos[tamanhoPositivo] = numero;
            tamanhoPositivo++;
        }

        if(numero < 0){
            negativos[tamanhoNegativo] = numero;
            tamanhoNegativo++;
        }
    }

    // ordenar
    for(i = 0; i < tamanhoPositivo; i++){
        for(j = i; j < tamanhoPositivo; j++){
            if(positivos[i] > positivos[j]){
                aux1 = positivos[i];
                positivos[i] = positivos[j];
                positivos[j] = aux1; // 2 4 6
            }
        }
    }

    for(i = 0; i < tamanhoNegativo; i++){
        for(j = i; j < tamanhoNegativo; j++){
            if(negativos[i] < negativos[j]){
                aux1 = negativos[i];
                negativos[i] = negativos[j];
                negativos[j] = aux1; // 2 4 6
            }
        }
    }
    
    for(i = 0; i < tamanhoPositivo; i++){
        printf("%d\n", positivos[i]);
    }

    for(i = 0; i < tamanhoNegativo; i++){
        printf("%d\n", negativos[i]);
    }
    


    printf("\n\n");

    // system("pause");
    return 0;
}