#include <stdio.h>
#include <stdlib.h>

int potencia(int base, int expoente){
    int potencia, contador; 

    /* Inicializacoes */
    potencia = 1;
    contador = 0;

    /* Calculo da potencia */
    while(contador != expoente) {
        potencia = potencia * base;
        contador = contador + 1;
    }

    return potencia;
}

// essa função quebra o número original e o aloca em um vetor;
void quebraNumero(int *numeroQuebrado, int tamanho, int valorInteiro){
    int i, aux = potencia(10, tamanho - 1);

    for(i = 0; i < tamanho; i++){
        if(i != 0){
            aux /= 10;
        }

        numeroQuebrado[i] = valorInteiro / aux;

        if(i == tamanho - 1){
            numeroQuebrado[i + 1] = valorInteiro % aux;
            break;
        }

        valorInteiro = valorInteiro % aux;
    }
}

// Esta função retorna a posição do maior número encontrado + 1
int maiorNumero(int *numeroQuebrado, int posicaoInicial, int posicaoFinal, int *resultado, int n){
    int i, j, aux = 0;

    for(i = posicaoInicial; i < posicaoFinal; i++){
        if(numeroQuebrado[i] > resultado[n]){
            resultado[n] = numeroQuebrado[i];
            aux = i;
        }
    }

    return aux + 1;
}

int main(){
    int digitoOriginal, digitoFinal, i, j = 0;

    while(scanf("%d %d", &digitoOriginal, &digitoFinal) && (digitoOriginal + digitoFinal)){    
        int numero, numeroQuebrado[digitoOriginal], resultado[digitoFinal], aux = digitoOriginal - digitoFinal + 1;

        scanf("%d", &numero);

        quebraNumero(numeroQuebrado, digitoOriginal, numero);

        // zerando todos os números do vetor
        for(i = 0; i < digitoFinal; i++){
            resultado[i] = 0;
        }
        
        for(j = 0, i = 0; j < digitoFinal; j++){
            i = maiorNumero(numeroQuebrado, i, aux, resultado, j);
            aux++;
        }

        for(i = 0; i < digitoFinal; i++){
            printf("%d", resultado[i]);
        }

        printf("\n");
    }


    printf("\n\n");

    // system("pause");
    return 0;
}