#include <stdio.h>
#include <stdlib.h>

int main(){
    int matricula, horasTrabalhadas, numeroDeFilhos;
    double salarioPorHora, salarioFamilia, salarioTotal, aux;

    scanf("%d %d %lf %d %lf", &matricula, &horasTrabalhadas, &salarioPorHora, &numeroDeFilhos, &salarioFamilia);

    salarioTotal = (salarioPorHora * horasTrabalhadas) + (numeroDeFilhos * salarioFamilia);


    printf("\nMATRICULA DO FUNCIONARIO = %d\n", matricula);
    printf("SALARIO TOTAL = %.2lf\n\n", salarioTotal);


    // system("pause");
    return 0;
}