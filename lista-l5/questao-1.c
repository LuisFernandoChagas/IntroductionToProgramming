#include <stdio.h>
#include <stdlib.h>

struct fracoes{
    int numerador, denominador;
};

int main(){
    int n, i, j, k;

    scanf("%d", &n);

    for(k = 0; k < n; k++){
        int m, aux = 0;

        scanf("%d", &m);

        struct fracoes fracao[m];

        for(i = 0; i < m; i++){
            scanf("%d/%d", &fracao[i].numerador, &fracao[i].denominador);
        }

        printf("Caso de teste %d\n", k + 1);

        for(i = 0; i < m; i++){
            for(j = i + 1; j < m; j++){
                if(fracao[i].numerador * fracao[j].denominador == fracao[i].denominador * fracao[j].numerador){
                    aux = 1;
                    printf("%d/%d equivalente a %d/%d\n", fracao[i].numerador, fracao[i].denominador, fracao[j].numerador, fracao[j].denominador);
                }
            }
        }

        if(!aux){
            printf("Nao ha fracoes equivalentes na sequencia\n");
        }
    }


    printf("\n\n");

    // system("pause");
    return 0;
}