#include <stdio.h>
#include <stdlib.h>
#define N 50

int main(){
    int matricula[N], i = 0, j = 1;
    double horasTrabalhadas[N], salarioPorHora[N], salarioTotal[N];

    while(j){
        scanf("%d %lf %lf", &matricula[i], &horasTrabalhadas[i], &salarioPorHora[i]);
        getchar();

        if(matricula[i] == 0){
            j = i;
            break;
        }

        salarioTotal[i] = horasTrabalhadas[i] * salarioPorHora[i];


        i++;
    }

    for(i = 0; i < j; i++){
        printf("\n%d %.2lf", matricula[i], salarioTotal[i]);
    }

    printf("\n\n");



    // system("pause");
    return 0;
}