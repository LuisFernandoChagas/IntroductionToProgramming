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
    int n, i, j, k = 0;

    scanf("%d", &n);

    int vetor[n], aux = 0, aux1 = 0, aux2 = 0;

    for(i = 0; i < n; i++){
        scanf("%d", &vetor[i]);
    }

    menorParaMaior(vetor, n);

    for(i = 0; i < n - 1; i++){
        for(j = i + 1; j < n; j++){
            if(vetor[i] == vetor[j]){
                aux++;

                if(!aux1){
                    aux++;
                    aux2 = j;
                }
                
                aux1++;
            }
        }
        if(aux2){
            i = aux2;
        }
        aux1 = 0;
        aux2 = 0;
    }

    printf("%d", n - aux);


    printf("\n\n");

    // system("pause");
    return 0;
}