#include <stdio.h>
#include <stdlib.h>

int main(){
    // comando de leitura para saber o tamanho do vetor
    // o usuário será obrigado a colocar um número >=1 para que possa passar para a próxima etapa
    int i = 1; // variavel auxiliar
    int n;

    while(i){
        scanf("%d", &n);

        if(n >= 1 && n <= 1000){
            break;
        }
    }

    // será lido o vetor
    int vetor[n];

    for(i = 0; i < n; i++){
        scanf("%d", &vetor[i]);   
    }

    // número que será comparado com cada membro do vetor
    int numero;

    scanf("%d", &numero);

    // comando de repetição para cada vetor
    // variável "valor" irá carregar o valor de quantas vezes o número a ser comparado foi maior que o vetor
    int valor = 0;
    for(i = 0; i < n; i++){
        if(numero <= vetor[i]){
            valor++;
        }
    }

    printf("%d", valor);


    printf("\n\n");

    // system("pause");
    return 0;
}