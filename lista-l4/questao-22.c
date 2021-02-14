#include <stdio.h>
#include <stdlib.h>

// se retornar 1, é porque é inválido
int verificacao(int vetor[][9], int posicaoI, int posicaoJ){
    int i, j, aux = 0, aux1 = 0;

    for(i = posicaoI; i < posicaoI + 3; i++){
        for(j = posicaoJ; j < posicaoJ + 3; j++){
            aux += vetor[i][j];
        }
    }

    if(aux != 45){
        aux1 = 1;
    }

    return aux1;
}

int main(){
    int i, j, vetor[9][9], aux = 0, aux1 = 0;

    // ENTRADA

    for(i = 0; i < 9; i++){
        for(j = 0; j < 9; j++){
            scanf("%d", &vetor[i][j]);

            // verificando linha por linha
            // se aux der resultado diferente de 45, já não é uma solução
            aux += vetor[i][j];
        }
        if(aux != 45){
            aux1 = 1;

            break;
        }
        aux = 0;
    }

    if(aux1){
        printf("invalido\n");

        system("pause");
        return 0;
    }

    // verificar coluna por coluna
    for(i = 0; i < 9; i++){
        for(j = 0; j < 9; j++){
            aux += vetor[j][i];
        }
        if(aux != 45){
            aux1 = 1;

            break;
        }
        aux = 0;
    }

    if(aux1){
        printf("invalido\n");

        system("pause");
        return 0;
    }

    for(i = 0; i < 9; i += 3){
        for(j = 0; j < 9; j += 3){
            if(verificacao(vetor, i, j)){
                printf("invalido\n");

                system("pause");
                return 0;
            }
        }
    }

    printf("valido\n");


    printf("\n");

    system("pause");
    return 0;
}