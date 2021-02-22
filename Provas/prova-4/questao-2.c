#include <stdio.h>
#include <stdlib.h>

int main(){
    int casos, i, j, tamanho, aux = 0, aux1 = 0;

    scanf("%d", &casos);

    while(casos--){
        aux = 0, aux1 = 0;
        scanf("%d", &tamanho);

        int matriz[tamanho][tamanho];

        for(i = 0; i < tamanho; i++){
            for(j = 0; j < tamanho; j++){
                scanf("%d", &matriz[i][j]);

                // se for diferente de 0 e 1, já não é matriz de permutação
                if(matriz[i][j] != 0 && matriz[i][j] != 1){
                    aux++;
                }
            }
        }

        for(i = 0; i < tamanho; i++){
            // procurando mais de um número "1" por linha
            for(j = 0; j < tamanho; j++){
                if(matriz[i][j] == 1){
                    aux1++;
                }
            }

            // aux1 tem que dar exatamente 1, porque só pode ter um único número 1 por linha
            if(aux1 != 1){
                aux++;
                break;

                // caso contrário, aux1 é zerado e o programa busca essa repetição na próxima linha
            } else {
                aux1 = 0;
            }
        }

        // se aux der qualquer número diferente de 0, é porque não é matriz de permutação
        if(aux){
            printf("Nao permutacao\n");
        } else {
            printf("Matriz permutacao\n");
        }
    }

    system("pause");
    return 0;
}