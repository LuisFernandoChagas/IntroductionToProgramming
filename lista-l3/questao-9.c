#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 1000

// essa função recebe um número inicial, e quantos números após a ele serão alocados em um vetor
void sequencia(int quantidade, int primeiroNumero, int *vetor){
    int i, j;

    for(i = primeiroNumero, j = 0; i < quantidade + primeiroNumero; i++, j++){
        vetor[j] = i;
    }
}

int main(){
    int n, i, j, k;
    
    scanf("%d", &n);

    int primeiro, segundo, aux = 0;

    for(i = 0; i < n; i++){
        scanf("%d %d", &primeiro, &segundo);

        aux = 1 - (primeiro - segundo);

        int vetor[aux];
        char auxiliar[7];

        sequencia(aux, primeiro, vetor);

        for(j = 0; j < aux; j++){
            printf("%d", vetor[j]);
        }

        for(j = aux - 1; j >= 0; j--){
            sprintf(auxiliar, "%d", vetor[j]);

            for(k = strlen(auxiliar) - 1; k >= 0; k--){
                printf("%c", auxiliar[k]);
            }
        }

        printf("\n");
    }


    printf("\n\n");

    // system("pause");
    return 0;
}