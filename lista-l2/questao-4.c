#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, i;
    scanf("%d", &n);

    int numeros[n];
    for(i = 0; i < n; i++){
        scanf("%d", &numeros[i]);

        printf("%d ", numeros[i]);
    }


    printf("\n\n");

    // system("pause");
    return 0;
}