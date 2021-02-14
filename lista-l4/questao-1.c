#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, j;
    double numero[2][2];
    
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            scanf("%lf", &numero[i][j]);
        }
    }

    printf("%.2lf", (numero[0][0] * numero[1][1]) - (numero[0][1] * numero[1][0]));



    printf("\n\n");

    // system("pause");
    return 0;
}