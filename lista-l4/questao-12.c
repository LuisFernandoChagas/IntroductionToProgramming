#include <stdio.h>
#include <stdlib.h>

// se retornar 1, é porque é inválido
int verificacao(int vetor[][200], int posicaoI, int posicaoJ){
    int i, j, aux = 0, aux1 = 0;

    for(i = posicaoI; i < posicaoI + 2; i++){
        for(j = posicaoJ; j < posicaoJ + 2; j++){
            aux += vetor[i][j];
        }
    }

    if(aux <= 1){
        aux1 = 1;
    }

    return aux1;
}

int main(){
    int n, i, j;

    scanf("%d", &n);

    int matriz[200][200], aux = 0, aux1 = 0;

    for(i = 0; i < n + 1; i++){
        for(j = 0; j < n + 1; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if(verificacao(matriz, i, j)){
                printf("U");
            } else {
                printf("S");
            }
        }

        printf("\n");
    }


    printf("\n\n");

    // system("pause");
    return 0;
}