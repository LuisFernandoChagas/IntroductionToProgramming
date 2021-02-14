#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int number, firstNumber, inverseNumber, aux, unidade, dezena, centena, x;
    
    scanf("%d", &number);

    if(number >= 100000){
        x = 0;
    } else {
        if(number >= 10000){
            x = 1;
        } else {
            if(number >= 1000){
                x = 2;
            } else {
                if(number >= 100){
                    x = 3;
                } else {
                    if(number >= 10){
                        x = 4;
                    } else {
                        x = 5;
                    }
                }
            }
        }
    }

    switch (x){
    case 1: // 5 dígitos
        // 12321
        firstNumber = number / 100; // 123
        aux = number % 1000; // 321
        unidade = aux / 100; // 3
        aux = aux % 100; // 21
        dezena = aux / 10; // 2
        centena = aux % 10; // 1

        inverseNumber = (centena * 100) + (dezena * 10) + unidade; // 123

        if(firstNumber == inverseNumber){
            printf("\nPALINDROMO\n\n");
        } else {
            printf("\nNAO PALINDROMO\n\n");
        }

        break;

    case 2: // 4 dígitos
        // 4334
        firstNumber = number / 100; // 43
        aux = number % 100; // 34
        unidade = aux / 10; // 3
        dezena = aux % 10; // 4

        inverseNumber = (dezena * 10) + unidade; // 43

        if(firstNumber == inverseNumber){
            printf("\nPALINDROMO\n\n");
        } else {
            printf("\nNAO PALINDROMO\n\n");
        }

        break;

    case 3: // 3 dígitos
        // 121
        firstNumber = number / 10; // 12
        aux = number % 100; // 21
        unidade = aux / 10; // 2
        dezena = aux % 10; // 1

        inverseNumber = (dezena * 10) + unidade; // 12

        if(firstNumber == inverseNumber){
            printf("\nPALINDROMO\n\n");
        } else {
            printf("\nNAO PALINDROMO\n\n");
        }

        break;

    case 4: // 2 dígitos
        // 55
        firstNumber = number / 10; // 5
        inverseNumber = number % 10; // 5

        if(firstNumber == inverseNumber){
            printf("\nPALINDROMO\n\n");
        } else {
            printf("\nNAO PALINDROMO\n\n");
        }

        break;

    case 5: // todo número de 1 dígito é palíndromo
        printf("\nPALINDROMO\n\n");

        break;

    default:
        printf("\nNUMERO INVALIDO\n\n");
        break;
    }


    return 0;
}