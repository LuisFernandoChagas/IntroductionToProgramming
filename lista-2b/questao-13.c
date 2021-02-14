#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int funcao(int conteudo, int dureza, int resistencia){
    if(conteudo >= 7){
        printf("\nACO DE GRAU = 7\n\n");
    } else {
        if(dureza <= 50){
            printf("\nACO DE GRAU = 8\n\n");
        } else {
            if(resistencia <= 80000){
                printf("\nACO DE GRAU = 9\n\n");
            } else {
                printf("\nACO DE GRAU = 10\n\n");
            }
        }
    }
}

int main(){
    int content, toughness, resistence;

    scanf("%d", &content);
    scanf("%d", &toughness);
    scanf("%d", &resistence);

    funcao(content, toughness, resistence);

    // system("pause");
    return 0;
}