#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, j, casos;

    // 1° => número de variáveis para pegar para a 2° linha

    scanf("%d", &casos);

    int segment[casos], subSequencia = 0, aux = 0;

    // 2° => pegar a quantidade de variáveis estabelecida na linha 1

    for(i = 0; i < casos; i++){
        scanf("%d", &segment[i]);
    }

    // Verificar a maior quantidade de números seguidos crescente. Ex: 0 0 2 "5 5 5" 6 => 3 números

    for(i = 0; i < casos; i++){
        if(segment[i] == segment[i + 1]){
            aux++;
        } else {
            if(aux > subSequencia){
                subSequencia = aux;
            }
            aux = 0;
        }
    }

    printf("\nA maior subsequencia de elementos iguais possui %d elementos.\n\n", subSequencia + 1);


    system("pause");
    return 0;
}