#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, i, j;
    scanf("%d", &n);

    double matriz[n][n];
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            scanf("%lf", &matriz[i][j]);
        }
    }

    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if(i == j){
                printf("%0.lf\n", matriz[i][j]);
            }
        }
    }



    printf("\n\n");

    // system("pause");
    return 0;
}