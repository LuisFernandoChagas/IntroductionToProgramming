#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int i, j;
    double matriz1[2][2], matriz2[2][2];

    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            scanf("%lf", &matriz1[i][j]);
        }
    }

    matriz2[0][0] = pow(matriz1[0][0], 2) + matriz1[0][1] * matriz1[1][0];
    matriz2[0][1] = matriz1[0][0] * matriz1[0][1] + matriz1[0][1] * matriz1[1][1];
    matriz2[1][0] = matriz1[1][0] * matriz1[0][0] + matriz1[1][1] * matriz1[1][0];
    matriz2[1][1] = matriz1[1][0] * matriz1[0][1] + pow(matriz1[1][1], 2);

    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            printf("%.3lf ", matriz2[i][j]);
        }
        printf("\n");
    }




    printf("\n\n");

    // system("pause");
    return 0;
}