#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;

    scanf("%d", &n);

    while(n--){
        int tamanho;

        scanf("%d", &tamanho);

        int vetor[tamanho];
        int i, j, aux = 99999, modulo, resultado = 9999, posicao = 0, aux1 = 0, calculoMinimo = 0;

        for(i = 0; i < tamanho; i++){
            scanf("%d", &vetor[i]);
        }

        for(i = 0; i < tamanho - 1; i++){
            for(j = i + 1; j < tamanho; j++){
                modulo = vetor[i] - vetor[j];

                if(modulo < 0){
                    modulo *= -1;
                }
                if(modulo < aux){
                    aux = modulo;
                }
                aux1 = j;
            }
            if(aux <= resultado){
                resultado = aux;
                posicao = aux1;
            }
            aux = 99999;
        }

        for(i = 0; i <= posicao; i++){
            for(j = i; j < posicao; j++){
                calculoMinimo++;
            }
        }


        printf("%d %d\n", resultado, calculoMinimo);
    }





    printf("\n\n");

    // system("pause");
    return 0;
}