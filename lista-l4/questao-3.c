#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, i, j, aux;
    scanf("%d", &n);

    double matriz[n][n];
    aux = n - 1;

    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            scanf("%lf", &matriz[i][j]);
        }
    }

    for(i = 0; i < n; i++){
        for(j = aux; j >= 0; j--){
            if(j == aux){
                printf("%0.lf\n", matriz[i][j]);
            }
        }
        aux--;
    }


    printf("\n\n");

    // system("pause");
    return 0;
}