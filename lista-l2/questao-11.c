#include <stdio.h>
#include <stdlib.h>

void menorParaMaior(int *vetor, int tam){
    int i, j, aux;

    for(i = 0; i < tam; i++){
        for(j = i; j < tam; j++){
            if(vetor[i] > vetor[j]){
                aux = vetor[i],
                vetor[i] = vetor[j],
                vetor[j] = aux;
            }
        }
    }
}

int main(){
    int n;

    scanf("%d", &n);

    int vetor[n], i, j;

    for(i = 0; i < n; i++){
        scanf("%d", &vetor[i]);
    }

    for(i = 0; i < n; i++){
        printf("%d ", vetor[i]);
    }

    printf("\n");

    for(i = n - 1; i >= 0; i--){
        printf("%d ", vetor[i]);
    }

    menorParaMaior(vetor, n);

    printf("\n%d\n%d", vetor[n - 1], vetor[0]);



    printf("\n\n");

    // system("pause");
    return 0;
}