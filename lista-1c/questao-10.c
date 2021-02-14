#include <stdio.h>
#include <stdlib.h>

int main(){
    double number, nValues[50], incremento;
    int i = 1, j;

    scanf("%lf", &number);     // número da tabuada
    scanf("%lf", &nValues[0]); // Número inicial 
    scanf("%d", &j);           // Quantidade
    scanf("%lf", &incremento); // incremento

    while(i < j){
        nValues[i] = nValues[i - 1] + incremento; // Guardar o valor já incrementado dentro do vetor

        i++;
    }

    if(number > 9 || number < 0){
        return 0;
    }

    printf("Tabuada de soma:\n");
    for(i = 0; i < j; i++){
        printf("%.2lf + %.2lf = %.2lf\n", number, nValues[i], number + nValues[i]);
    }

    printf("Tabuada de subtracao:\n");
    for(i = 0; i < j; i++){
        printf("%.2lf - %.2lf = %.2lf\n", number, nValues[i], number - nValues[i]);
    }

    printf("Tabuada de multiplicacao:\n");
    for(i = 0; i < j; i++){
        printf("%.2lf x %.2lf = %.2lf\n", number, nValues[i], number * nValues[i]);
    }

    printf("Tabuada de divisao:\n");
    for(i = 0; i < j; i++){
        printf("%.2lf / %.2lf = %.2lf\n", number, nValues[i], number / nValues[i]);
    }

    printf("\n\n");


    system("pause");
    return 0;
}