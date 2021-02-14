#include <stdio.h>
#include <stdlib.h>

int main(){
    int linha, coluna, n = 1;

    while(n){
        scanf("%d", &linha);
        
        if(linha > 0 && linha < 11){
            n = 0;
        }
    }

    n = 1;
    while(n){
        scanf("%d", &coluna);

        if(coluna > 0 && coluna < 11){
            n = 0;
        }
    }

    int i, j, matriz[linha][coluna];

    for(i = 0; i < linha; i++){
        for(j = 0; j < coluna; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    for(i = 0; i < linha; i++){
        printf("\nlinha %d: ", i + 1);
        for(j = 0; j < coluna; j++){
            printf("%d", matriz[i][j]);
            if(j != coluna - 1){
                printf(",");
            }
        }
    }


    printf("\n\n");

    system("pause");
    return 0;
}