#include <stdio.h>
#include <stdlib.h>

int main(){
    int n; // números de times
    int casosPossiveis = 1, primeiroTime = 1, numeroDaFinal = 1, segundoTime = 2;

    scanf("%d", &n);

    if(n < 2){
        printf("Campeonato invalido!\n");
        // system("pause");
        return 0;
    }

    // Entrada = 5

    // Saída:

    // Final 1: Time1 X Time2
    // Final 2: Time1 X Time3
    // Final 3: Time1 X Time4
    // Final 4: Time1 X Time5

    // Final 5: Time2 X Time3
    // Final 6: Time2 X Time4
    // Final 6: Time2 X Time5

    // Final 6: Time3 X Time4
    // Final 6: Time3 X Time5

    // Final 6: Time4 X Time5

    while(casosPossiveis < n){
        printf("\nFinal %d: Time%d X Time%d", numeroDaFinal++, primeiroTime, segundoTime++);

        casosPossiveis++;

        if(casosPossiveis == n){
            primeiroTime++;
            casosPossiveis = primeiroTime;
            segundoTime = primeiroTime + 1;
        }
    }

    printf("\n\n");


    // system("pause");
    return 0;
}