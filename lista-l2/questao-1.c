#include <stdio.h>
#include <stdlib.h>

int main(){
    // comando de leitura para saber quantos números estarão no vetor
    int n;
    int i, j; // variavel auxiliar

    scanf("%d", &n);

    // comando de leitura para ler os números do vetor
    int vetor[n];

    for(i = 0; i < n; i++){
        scanf("%d", &vetor[i]);
    }

    // comando de leitura para saber quantos números serão comparados
    int m;

    scanf("%d", &m);

    // comando de leitura para saber os números que serão comparados
    int numeros[m];

    for(i = 0; i < m; i++){
        scanf("%d", &numeros[i]);
    }

    // comparar os números com os números dos vetores
    // selecionar os números e depois os vetores
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            if(numeros[i] == vetor[j]){
                printf("\nACHEI");
                break;
            }
            if(j == n - 1){
                printf("\nNAO ACHEI");
            }
        }
    }


    printf("\n\n");

    system("pause");
    return 0;
}