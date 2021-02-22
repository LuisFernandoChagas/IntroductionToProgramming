#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, i;
    double tipo1, tipo2, tipo3;

    scanf("%d", &n);

    int numeroDeInscricao[n];
    double salarioFixo, salarioBruto[n], salarioLiquido[n], salarioTotal, comissao, inss, impostoDeRenda, aux;
    for(i = 0; i < n; i++){
        scanf("%d", &numeroDeInscricao[i]);
        scanf("%lf", &salarioFixo);
        scanf("%lf", &tipo1);
        scanf("%lf", &tipo2);
        scanf("%lf", &tipo3);

        if(tipo1 < 10){
            aux = 20 * tipo1;
        } else {
            aux = 100 * tipo1;
        }

        if(tipo2 < 15){
            aux = aux + (15 * tipo2);
        } else {
            aux = aux + (90 * tipo2);
        }

        if(tipo3 < 20){
            aux = aux + (25 * tipo3);
        } else {
            aux = aux + (150 * tipo3);
        }

        salarioBruto[i] = salarioFixo + aux;
        
        inss = (salarioFixo * 8) / 100;

        salarioTotal = salarioFixo + aux - inss;

        if(salarioTotal >= 5000){
            impostoDeRenda = (15 * salarioTotal) / 100;
            salarioLiquido[i] = salarioBruto[i] - impostoDeRenda - inss;
        } else {
            salarioLiquido[i] = salarioBruto[i] - inss;
        }
    }

    for(i = 0; i < n; i++){
        printf("NUMERO DE INSCRICAO = %d\n", numeroDeInscricao[i]);
        printf("SALARIO BRUTO = %.2lf\n", salarioBruto[i]);
        printf("SALARIO LIQUIDO = %.2lf\n", salarioLiquido[i]);
    }
    


    printf("\n\n");

    // system("pause");
    return 0;
}