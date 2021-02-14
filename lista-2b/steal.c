#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int matricula, dependency;
    double minWage, manWage, steal;
    double roughSteal, liquidSteal, totalSteal, difference;

    scanf("%d %lf %d %lf %lf", &matricula, &minWage, &dependency, &manWage, &steal);

    // ***********************************************************************************************************

    printf("\nMATRICULA = %d", matricula);

    // ***********************************************************************************************************

    if(manWage > minWage * 12){
        roughSteal = manWage * 20 / 100;
    } else {
        if(manWage <= minWage * 5){
            roughSteal = 0;
        } else {
            roughSteal = manWage * 8 / 100;
        }
    }

    printf("\nIMPOSTO BRUTO = %.2lf", roughSteal);

    // ***********************************************************************************************************

    liquidSteal = roughSteal - (300 * dependency);

    printf("\nIMPOSTO LIQUIDO = %.2lf", liquidSteal);

    // ***********************************************************************************************************


    totalSteal = manWage * steal / 100;
    difference = liquidSteal - totalSteal;

    printf("\nRESULTADO = %.2lf", difference);

    // ***********************************************************************************************************

    if(difference < 0){
        printf("\nIMPOSTO A RECEBER\n\n");
    } else {
        if(difference == 0){
            printf("\nIMPOSTO QUITADO\n\n");
        } else {
            printf("\nIMPOSTO A PAGAR\n\n");
        }
    }


    system("pause");
    return 0;
}