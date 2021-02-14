#include <stdio.h>
#include <stdlib.h>
#define N 300

// esta função ordena o vetor do menor para o maior
void menorParaMaior(int vetor[N][N], int tam, int coluna){
    int i, j, aux;

    for(i = 0; i < tam; i++){
        for(j = i; j < tam; j++){
            if(vetor[i][coluna] > vetor[j][coluna]){
                aux = vetor[i][coluna],
                vetor[i][coluna] = vetor[j][coluna],
                vetor[j][coluna] = aux;
            }
        }
    }
}

int main(){
    int n, i, j;

    scanf("%d", &n);

    int matriz[N][N];

    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    for(i = 0; i < n; i++){
        menorParaMaior(matriz, n, i);
    }

    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }



    printf("\n\n");

    // system("pause");
    return 0;
}