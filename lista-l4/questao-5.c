#include <stdio.h>
#include <stdlib.h>

int main(){
    int linha, coluna;

    scanf("%d %d", &linha, &coluna);

    int i, j, matriz[linha][coluna];

    for(i = 0; i < linha; i++){
        for(j = 0; j < coluna; j++){
            if(i == 0 || (!(i % 2) && i != 1)){
                if(j == 0 || (!(j % 2) && j != 1)){
                    matriz[i][j] = 1;
                } else {
                    matriz[i][j] = 0;
                }
            } else {
                if(j == 0 || (!(j % 2) && j != 1)){
                    matriz[i][j] = 0;
                } else {
                    matriz[i][j] = 1;
                }
            }
        }
    }

    for(i = 0; i < linha; i++){
        for(j = 0; j < coluna; j++){
            printf("%d", matriz[i][j]);
        }
        printf("\n");
    }



    printf("\n\n");

    // system("pause");
    return 0;
}