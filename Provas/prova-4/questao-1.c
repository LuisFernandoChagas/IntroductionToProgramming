#include <stdio.h>
#include <stdlib.h>

int main(){
    int tamanho;

    while(scanf("%d", &tamanho) && tamanho != 1){
        int i, j, aux = 0;
        double matriz[tamanho][tamanho];

        for(i = 0; i < tamanho; i++){
            for(j = 0; j < tamanho; j++){
                scanf("%lf", &matriz[i][j]);
            }
        }

        for(i = 0; i < tamanho; i++){
            for(j = 0; j < tamanho; j++){
                if(i < j && matriz[i][j] != 0){
                    aux++;
                }
            }
        }

        // se aux > 0, é porque existe um M ixj (em que i < j), diferente de 0
        if(aux){
            printf("\nMatriz nao triangular inferior\n");
        } else {
            printf("\nMatriz triangular inferior\n");
        }


    }


    printf("\n\n");

    // system("pause");
    return 0;
}