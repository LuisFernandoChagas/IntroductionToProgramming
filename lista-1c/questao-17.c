#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    double n, erro, r[50];
    double aux;
    int i = 0;

    scanf("%lf", &n);
    scanf("%lf", &erro);

    // O cálculo do r[1] será o único feito fora do comando de repetição
    r[i] = (1 + n) / 2;

    aux = n - pow(r[i], 2);

    // O aux está dentro de um módulo
    if(aux < 0){
        aux = aux * -1;
    }

    for(i = 1; aux > erro; i++){
        printf("\nr: %.9lf, erro: %.9lf", r[i - 1], aux);

        r[i] = (r[i - 1] + (n / r[i - 1])) / 2;

        aux = n - pow(r[i], 2);

        if(aux < 0){
            aux *= -1;
        }
    }

    printf("\nr: %.9lf, erro: %.9lf", r[i - 1], aux);


    printf("\n\n");

    // system("pause");
    return 0;
}