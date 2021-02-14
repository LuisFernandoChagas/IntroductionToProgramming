#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;

    scanf("%d", &n);

    int posicao[8][8], valorSomado = 0;
    int i, j;

    for(i = 0; i < 8; i++){
        for(j = 0; j < 8; j++){
            // detectar se a linha é par ou ímpar
            if(i % 2 == 0){
                if(j % 2 != 0){ // casa branca na linha par
                    posicao[i][j] = n;
                } else { // casa preta na linha par
                    posicao[i][j] = n * 2;
                }
            } else {
                if(j % 2 == 0){
                    posicao[i][j] = n;
                } else {
                    posicao[i][j] = n * 2;
                }
            }
            posicao[0][0] = n;
        }
    }

    for(i = 0; i < 8; i++){
        for(j = 0; j < 8; j++){
            valorSomado = valorSomado + posicao[i][j];
        }
    }

    printf("\n%d", valorSomado);


    printf("\n\n");

    // system("pause");
    return 0;
}