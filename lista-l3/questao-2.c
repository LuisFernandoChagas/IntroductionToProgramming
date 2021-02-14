#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    // casos de teste
    int n;
    scanf("%d", &n);

    int i, j;
    // executar todos os casos de testes pré-estabelecidos
    for(i = 0; i < n; i++){
        int totalLeds = 0;
        char valor[10000] = "";
        scanf("%s", &valor);

        // analisar caracter por caracter a fim saber quantos leds valem pra cada número
        for(j = 0; j < strlen(valor); j++){
            // totalLeds += numeroLeds(valor, j);

            if(valor[j] == '0' || valor[j] == '6' || valor[j] == '9'){
                totalLeds += 6;
            } else {
                if(valor[j] == '1'){
                    totalLeds += 2;
                } else {
                    if(valor[j] == '2' || valor[j] == '3' || valor[j] == '5'){
                        totalLeds += 5;
                    } else {
                        if(valor[j] == '4'){
                            totalLeds += 4;
                        } else {
                            if(valor[j] == '7'){
                                totalLeds += 3;
                            } else {
                                totalLeds += 7;
                            }
                        }
                    }
                }
            }
        }

        printf("%d leds\n", totalLeds);
    }


    printf("\n\n");

    // system("pause");
    return 0;
}