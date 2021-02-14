#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int number;
    double i, value = 0;

    scanf("%d", &number);
    
    if(number <= 1){
        printf("\nNumero invalido!\n\n");
        return 0;
    }

    for(i = 1; i <= number; i++){
        value = value + 1 / i;
    }

    printf("\n%.6lf\n\n", value);

    printf("\n\n");

    system("pause");
    return 0;
}