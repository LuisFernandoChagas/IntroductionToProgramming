#include <stdio.h>
#include <stdlib.h>

int main(){
    double valueA, valueB, valueC;
    double valueResult;
    
    scanf("%lf %lf %lf", &valueA, &valueB, &valueC);

    if(((valueB - valueC) < valueA && (valueB + valueC) > valueA) && ((valueA - valueC) < valueB) && ((valueA + valueC) > valueB) && ((valueA - valueB) < valueC) && (valueA + valueB) > valueC){
        valueResult = valueA + valueB + valueC;
        
        printf("\nPerimetro = %.1lf\n\n", valueResult);
    } else {
        valueResult = (valueA + valueB) * valueC / 2;

        printf("\nArea = %.1lf\n\n", valueResult);
    }


    return 0;
}