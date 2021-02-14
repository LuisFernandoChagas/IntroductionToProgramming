#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int numberPar, cases;

    int i;

    scanf("%d %d", &numberPar, &cases);

    printf("\n");

    if(numberPar % 2 != 0){
        printf("\nO PRIMEIRO NUMERO NAO E PAR\n\n");
        return 0;
    }

    for(i = 0; i < cases; i++){
        if(i == 0){
            printf("%d ", numberPar);
        } else {
            printf("%d ", numberPar = numberPar + 2);
        }
    }
    

    printf("\n\n");

    return 0;
}