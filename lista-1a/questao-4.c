#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    double a, b, c;
    double delta;

    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);

    delta = pow(b, 2) - 4 * a * c;
    
    printf("\nO VALOR DE DELTA E = %.2lf\n\n", delta);


    return (0);
    
}