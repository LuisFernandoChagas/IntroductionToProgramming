#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define N 10
#define M 320

int comparacao(int logotipo[N][N], int imagem[M][M], int tam_total, int posicao_inicial_i, int posicao_inicial_j){
    int i, j, k, l, aux = 0;

    for(i = 0, k = posicao_inicial_i; i < tam_total; i++, k++){
        for(j = 0, l = posicao_inicial_j; j < tam_total; j++, l++){
            if(logotipo[i][j] == imagem[k][l]){
                aux++;
            } else {
                return 0;
            }
        }
    }

    if(aux == tam_total * tam_total){
        return 1;
    } else {
        return 0;
    }
}

int main(){
    // INICIALIZADORES & ENTRADA

    int n, m, i, j, k, l, aux = 0;

    scanf("%d", &n);

    int logotipo[N][N];

    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            scanf("%d", &logotipo[i][j]);
        }
    }

    scanf("%d", &m);

    int imagem[M][M];
    
    for(i = 0; i < m; i++){
        for(j = 0; j < m; j++){
            scanf("%d", &imagem[i][j]);
        }
    }

    // COMPARAÇÂO DAS MATRIZES
    for(i = 0; i < m; i++){
        for(j = 0; j < m; j++){
            if(logotipo[0][0] == imagem[i][j]){
                if(comparacao(logotipo, imagem, n, i, j)){
                    printf("sim\n");

                    // system("pause");
                    return 0;
                }
            }
        }
    }

    printf("nao\n");


    printf("\n\n");

    // system("pause");
    return 0;
}