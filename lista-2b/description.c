#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    unsigned int x;
    int aux, milhar, centena, dezena, unidade;

    scanf("%d", &x);
    
    if(x <= 0 || x > 9999){
        printf("\nNumero invalido!\n\n");
        return 0;
    }

    if(x >= 1000){ //3206
        milhar = x / 1000; // 3
        aux = x % 1000; // 206
        centena = aux / 100; // 2
        aux = aux % 100; // 56
        dezena = aux / 10; // 0
        unidade = aux % 10; // 6

        if(milhar != 0){
            if(milhar == 1){
                printf("\n(quarta ordem) %d = %d unidade de milhar", x, milhar);
            } else {
                printf("\n(quarta ordem) %d = %d unidades de milhar", x, milhar);
            }
        }

        if(centena != 0){
            if(centena == 1){
                printf(" + %d centena", centena);
            } else {
                printf(" + %d centenas", centena);
            }
        }

        if(dezena != 0){
            if(dezena == 1){
                printf(" + %d dezena", dezena);
            } else {
                printf(" + %d dezenas", dezena);
            }
        }

        if(unidade != 0){
            if(unidade == 1){
                printf(" + %d unidade", unidade);
            } else {
                printf(" + %d unidades", unidade);
            }
        }

        printf(" = %d", milhar * 1000);

        if(centena != 0){
            printf(" + %d", centena * 100);
        }

        if(dezena != 0){
            printf(" + %d", dezena * 10);
        }

        if(unidade != 0){
            printf(" + %d", unidade);
        }

        printf("\n\n");

    } else {
        if(x >= 100){ // 542
            centena = x / 100; // 5
            aux = x % 100; // 42
            dezena = aux / 10; // 4
            unidade = aux % 10; // 2

            if(centena == 1){
                printf("\n(terceira ordem) %d = %d centena", x, centena);
            } else {
                printf("\n(terceira ordem) %d = %d centenas", x, centena);
            }

            if(dezena != 0){
                if(dezena == 1){
                    printf(" + %d dezena", dezena);
                } else {
                    printf(" + %d dezenas", dezena);
                }
            }

            if(unidade != 0){
                if(unidade == 1){
                    printf(" + %d unidade", unidade);
                } else {
                    printf(" + %d unidades", unidade);
                }
            }

            printf(" = %d", centena * 100);

            if(dezena != 0){
                printf(" + %d", dezena * 10);
            }

            if(unidade != 0){
                printf(" + %d", unidade);
            }

            printf("\n\n");

        } else {
            if(x >= 10){ // 57
                dezena = x / 10; // 5
                unidade = x % 10; // 7

                if(dezena == 1){
                    printf("\n(segunda ordem) %d = %d dezena", x, dezena);
                } else {
                    printf("\n(segunda ordem) %d = %d dezenas", x, dezena);
                }

                if(unidade != 0){
                    if(unidade == 1){
                        printf(" + %d unidade", unidade);
                    } else {
                        printf(" + %d unidades", unidade);
                    }
                }

                printf(" = %d", dezena * 10);

                if(unidade != 0){
                    printf(" + %d", unidade);
                }

                printf("\n\n");

            } else {
                unidade = x;

                printf("\n(primeira ordem) %d = ", x);
                
                if(unidade == 1){
                    printf("%d unidade", unidade);
                } else {
                    printf("%d unidades", unidade);
                }

                printf("\n\n");
            }
        }
    }
    
    system("pause");
    return 0;
}