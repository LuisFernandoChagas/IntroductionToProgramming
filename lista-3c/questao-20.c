#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, j, k = 1; // i linha, j coluna
    int numeroDeLinha, numeroDeColuna;

    scanf("%d %d", &numeroDeLinha, &numeroDeColuna); // 3 3

    int linhaPrincipal[numeroDeLinha], colunaPrincipal[numeroDeColuna];

    // detectar a linha vertical principal
    for(i = 0; i < numeroDeLinha; i++){
        linhaPrincipal[i] = i + 1; // 1 2 3
    }

    for(i = 0; i < numeroDeColuna; i++){
        colunaPrincipal[i] = i + 1; // 1 2 3
    }

    printf("\n");

    // Detectar os valores abaixo dos da linha principal
    for(i = linhaPrincipal[1]; i <= numeroDeLinha; i++){
        for(j = colunaPrincipal[0]; j <= numeroDeColuna; j++){
            printf("(%d,%d)", i, j);
            if(k == numeroDeColuna + 1){
                k--;
            }
            if(k == j){
                k++;
                break;
            }
            printf("-");
        }
        printf("\n");
    }




    printf("\n\n");

    system("pause");
    return 0;
}