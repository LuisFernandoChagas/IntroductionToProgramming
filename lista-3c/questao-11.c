#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, j, casos;

    // 1° => número de variáveis para pegar para a 2° linha

    scanf("%d", &casos);

    int segment[casos], segmentMax = 0, aux = 0;

    // 2° => pegar a quantidade de variáveis estabelecida na linha 1

    for(i = 0; i < casos; i++){
        scanf("%d", &segment[i]);
    }

    // Verificar a maior quantidade de números seguidos crescente. Ex: 5 10 3 "2 4 7 9" 8 5 => 4 números

    for(i = 0; i < casos; i++){
        if(segment[i] < segment[i + 1]){
            aux++;
        } else {
            if(aux > segmentMax){
                segmentMax = aux;
            }
            aux = 0;
        }
    }

    printf("\nO comprimento do segmento crescente maximo e: %d\n\n", segmentMax);


    system("pause");
    return 0;
}