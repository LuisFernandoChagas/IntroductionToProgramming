#include <stdio.h>
#include <stdlib.h>

int main(){
    int altura, largura;

    scanf("%d %d", &altura, &largura);

    int i, j, vetor[altura][largura];
    double totalElementos = 0, auxMaior = 0, auxMenor = 0;

    for(i = 0; i < altura; i++){
        for(j = 0; j < largura; j++){
            scanf("%d", &vetor[i][j]);
        }
    }

    double maior = vetor[0][0], menor = vetor[0][0];

    for(i = 0; i < altura; i++){
        for(j = 0; j < largura; j++){
            // pegar maior valor da matriz
            if(vetor[i][j] > maior){
                maior = vetor[i][j];
            }
            // pegar menor valor da matriz
            if(vetor[i][j] < menor){
                menor = vetor[i][j];
            }
        }
    }

    for(i = 0; i < altura; i++){
        for(j = 0; j < largura; j++){
            // determinar quantidade de números maiores e menores
            if(vetor[i][j] == maior){
                auxMaior++;
            }

            if(vetor[i][j] == menor){
                auxMenor++;
            }
        }
    }

    totalElementos = altura * largura;

    printf("%.0lf %.2lf%%\n", menor, auxMenor * 100 / totalElementos);

    printf("%.0lf %.2lf%%", maior, auxMaior * 100 / totalElementos);


    printf("\n\n");

    // system("pause");
    return 0;
}