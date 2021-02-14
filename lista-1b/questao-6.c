#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    double initialWage, finalWage;

    scanf("%lf", &initialWage);
    
    if(initialWage <= 300){
        finalWage = initialWage + (0.5 * initialWage); 
    } else {
        finalWage = initialWage + (0.3 * initialWage);
    }


    printf("\nSALARIO COM REAJUSTE = %.2lf\n\n", finalWage);


    return 0;
}