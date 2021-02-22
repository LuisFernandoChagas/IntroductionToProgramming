#include <stdio.h>
#include <stdlib.h>

// essa função retorna quantos números não foram repetidos dentro de um vetor
int findNumber(int *vetor, int n){
    int i, j, aux = 0, aux2 = 0, resultado = 0;

    // primeiro número para ser comparado com todos os outros
    for(i = 0; i < n; i++){
        // quando o aux for igual a 0, significa que nenhum número se repitiu
        aux = 0;

        // todos os números dos vetores que serão comparados
        for(j = 0; j < n; j++){
            if(!(i == j) && vetor[i] == vetor[j]){
                aux++;
            }
        }
        if(aux == 0){
            aux2++;
        }
    }

    return aux2;
}

int main(){
    int n;
    scanf("%d", &n);
    while(n--){
        int i, casos;
        
        scanf("%d", &casos);
        int vetor[casos], resultado = 0;
        for(i = 0; i < casos; i++){
            scanf("%d", &vetor[i]);
        }

        resultado = findNumber(vetor, casos);

        printf("%d\n", resultado);
    }


    printf("\n\n");

    // system("pause");
    return 0;
}