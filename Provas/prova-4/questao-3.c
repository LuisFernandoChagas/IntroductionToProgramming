#include <stdio.h>
#include <stdlib.h>
 
int main(){
    int i, j, k, casos;

    char velha[3][3];
 
    scanf("%d", &casos);
 
    for(i = 0; i < casos; i++){ 
        for(j = 0; j < 3; j++){
            for(k = 0; k < 3; k++){
                scanf(" %c", &velha[j][k]);
            }
        }
 
        // for(j = 0; j < 3; j++){
        //     for(k = 0; k < 3; k++){
        //         printf("%c", velha[j][k]);
        //     }
        // }

        // verificando se houve um vencedor
        if(((velha[0][0] == velha[1][1]) && (velha[0][0] == velha[2][2])) ||
        ((velha[0][0] == velha[0][1]) && (velha[0][0] == velha[0][2])) ||
        ((velha[0][0] == velha[1][0]) && (velha[0][0] == velha[2][0]))){
            // como o velha[0][0] é comum a todos os exemplos, basta saber se ele é 'X' ou 'O' para identificar o ganhador
            if(velha[0][0] == 'X'){
                printf("o jogador X venceu\n");
            } else {
                printf("o jogador O venceu\n");
            }
        } else {
            if(((velha[0][2] == velha[1][1]) && (velha[0][2] == velha[2][0])) ||
            ((velha[0][1] == velha[1][1]) && (velha[0][1] == velha[2][1])) ||
            ((velha[1][0] == velha[1][1]) && (velha[1][0] == velha[1][2]))){
                if(velha[1][1] == 'X'){
                    printf("o jogador X venceu\n");
                } else {
                    printf("o jogador O venceu\n");
                }
            } else {
                if(((velha[0][2] == velha[1][2]) && (velha[0][2] == velha[2][2])) ||
                ((velha[2][0] == velha[2][1]) && (velha[2][0] == velha[2][2]))){
                    if(velha[2][2] == 'X'){
                        printf("o jogador X venceu\n");
                    } else {
                        printf("o jogador O venceu\n");
                    }

                    // não houve vencedor
                } else {
                    printf("o jogo deu velha\n");
                }
            }
        }
    }
 
 
    printf("\n\n");
 
    // system("pause");
    return 0;
}