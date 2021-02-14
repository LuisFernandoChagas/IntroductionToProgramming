#include <stdio.h>
#include <stdlib.h>

int main(){
    // ler o tamanho do vetor
    int n;

    scanf("%d", &n);

    // ler o vetor
    int vetor[n], valor[n];
    int i, j = 0, aux; // variavel auxiliar
    
    for(i = 0; i < n; i++){
        scanf("%d", &vetor[i]);
    }

    for(i = n - 1; i >= 0; i--){
        valor[j] = vetor[i];
        j++;
    }

    printf("\n");

    for(i = 0; i < n; i++){
        printf("%d ", valor[i]);
    }




    printf("\n\n");

    // system("pause");
    return 0;
}