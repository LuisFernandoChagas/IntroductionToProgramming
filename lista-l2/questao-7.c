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

        int i, j, vetor[n], valor = 0, maior = 0;
        for(i = 0; i < n; i++){
            scanf("%d", &vetor[i]);

            if(vetor[i] > maior){
                maior = vetor[i];
            }
        }

        for(i = 0; i <= maior; i++){
            for(j = 0; j < n; j++){
                if(vetor[j] == i){ // 6 13 7 3 13 6 14 3 14 9
                    valor++;
                }
            }

            printf("(%d) %d\n", i, valor);
        }
    }


    printf("\n\n");
    
    // system("pause");
    return 0;
}