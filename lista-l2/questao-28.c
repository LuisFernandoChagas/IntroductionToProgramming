#include <stdio.h>
#include <stdlib.h>

// se o numero já tiver sido repetido dentro do conjunto, a função retornará 1
int repeticaoInterna(int *conjunto, int tamanho){
    int i, j;

    // tamanho = i do main
    for(i = 0; i < tamanho; i++){
        if(conjunto[tamanho] == conjunto[i]){
            return 1;
        }
    }

    return 0;
}

int main(){
    int n[2], aux = 1, i = 0, j;

    while(aux){
        scanf("%d", &n[i]);

        // n guarda o valor da quantidade de número dentro de cada conjunto
        if(!(n[i] < 1) || !(n[i] > 100)){
            i++;
            if(i == 2){
                aux = 0;
            }
        }
    }

    int conjunto1[n[0]], conjunto2[n[1]];

    for(i = 0; i < n[0]; i++){
        scanf("%d", &conjunto1[i]);

        if(repeticaoInterna(conjunto1, i)){
            i--;
        }
    }

    for(i = 0; i < n[1]; i++){
        scanf("%d", &conjunto2[i]);

        if(repeticaoInterna(conjunto2, i)){
            i--;
        }
    }

    // união = todos os números que ocorrem em ambos os conjuntos porém não podem se repetir
    printf("\n(");

    // como a ordem não importa, primeiro mostrar todo o conjunto1
    for(i = 0; i < n[0]; i++){
        printf("%d", conjunto1[i]);
        if(i != n[0] - 1){
            printf(",");
        }
    }

    // depois verificar se os números do conjunto2 se repetem com algum do conjunto1
    for(i = 0; i < n[1]; i++){
        for(j = 0; j < n[0]; j++){
            if(conjunto2[i] == conjunto1[j]){
                break;
            } else {
                if(j == n[0] - 1){
                    printf(",");
                    printf("%d", conjunto2[i]);
                    break;
                }
            }
        }
    }

    printf(")\n");

    // intersecção = apenas os números que se repetem em ambos os conjuntos
    printf("(");

    aux = 0;
    for(i = 0; i < n[1]; i++){
        for(j = 0; j < n[0]; j++){
            if(conjunto2[i] == conjunto1[j]){
                if(aux){
                    printf(",");
                }
                printf("%d", conjunto2[i]);
                aux = 1;
                break;
            }
        }
    }

    printf(")");



    printf("\n\n");

    system("pause");
    return 0;
}