#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    double a, b, c, d, e, f;
    double x, y, aux1, aux2;

    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);
    scanf("%lf", &d);
    scanf("%lf", &e);
    scanf("%lf", &f);
    
    aux1 = f - (d * c / a);
    aux2 = e - (d * b / a);
    y = aux1 / aux2;

    x = (c - (b * y)) / a;



    printf("\nO VALOR DE X E = %.2lf\n\n", x);
    printf("\nO VALOR DE Y E = %.2lf\n\n", y);

    return 0;
}