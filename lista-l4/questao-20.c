#include <stdio.h>
#include <stdlib.h>

int main(){
    int linha, coluna, i, j, aux1, aux2;

    scanf("%d %d", &linha, &coluna);

    int matriz[linha][coluna];

    for(i = 0; i < linha; i++){
        for(j = 0; j < coluna; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    int maior_elemento = matriz[0][0], menor_elemento = matriz[0][0];

    // primeiro procurar o maior elemento
    for(i = 0; i < linha; i++){
        for(j = 0; j < coluna; j++){
            if(maior_elemento <= matriz[i][j]){
                maior_elemento = matriz[i][j];
            }
        }
    }

    for(i = 0; i < linha; i++){
        for(j = 0; j < coluna; j++){
            if(menor_elemento >= matriz[i][j]){
                menor_elemento = matriz[i][j];
                aux1 = i, aux2 = j;
            }
        }
    }

    for(i = 0; i < linha; i++){
        for(j = 0; j < coluna; j++){
            if(maior_elemento == matriz[i][j]){
                matriz[i][j] = menor_elemento;
            }
        }
    }

    matriz[aux1][aux2] = maior_elemento;

    for(i = 0; i < linha; i++){
        for(j = 0; j < coluna; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }




    printf("\n\n");

    // system("pause");
    return 0;
}