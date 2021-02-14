#include <stdio.h>
#include <stdlib.h>

int main(){
    int altura, largura;

    scanf("%d %d", &altura, &largura);

    int i, j, vetor[altura][largura];

    // pegar a matriz
    for(i = 0; i < altura; i++){
        for(j = 0; j < largura; j++){
            scanf("%d", &vetor[i][j]);
        }
    }

    // achar o wally
    for(i = 0; i < altura; i++){
        for(j = 0; j < largura; j++){
            if((vetor[i][j] == 1111) && (vetor[i - 1][j] == 4 || vetor[altura - 1][j] == 4) && (vetor[i + 1][j] == 8 || vetor[0][j] == 8) && (vetor[i][j + 1] == 0 || vetor[i][0] == 0) && (vetor[i][j - 1] == 0 || vetor[i][largura - 1] == 0)){
                printf("%d %d", i, j);

                printf("\n\n");

                // system("pause");
                return 0;
            }
        }
    }

    printf("WALLY NAO ESTA NA MATRIZ");

    printf("\n\n");

    // system("pause");
    return 0;
}