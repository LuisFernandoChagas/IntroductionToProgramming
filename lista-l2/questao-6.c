#include <stdio.h>
#include <stdlib.h>

int main(){
    // número de casos
    int i, n, total = 0;
    scanf("%d", &n);

    int vetor[n];
    for(i = 0; i < n; i++){
        scanf("%d", &vetor[i]);

        total += vetor[i];
    }

    printf("%d", total);


    printf("\n\n");

    // system("pause");
    return 0;
}