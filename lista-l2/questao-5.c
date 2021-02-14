#include <stdio.h>
#include <stdlib.h>

int main(){
    int n = 1;

    while(n){
        scanf("%d", &n);
        if(n == 0){
            // system("pause");
            return 0;
        }

        int i, numeros[n], valor = 0, posicao;
        
        for(i = 0; i < n; i++){
            scanf("%d", &numeros[i]);
        }

        // maiorvalor(numeros, n);

        for(i = 0; i < n; i++){
            if(valor < numeros[i]){
                valor = numeros[i];
                posicao = i;
            }
        }

        printf("%d %d\n", posicao, valor);
    }


    printf("\n\n");

    // system("pause");
    return 0;
}