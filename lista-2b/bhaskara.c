#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    double a = 0, b = 0, c = 0;
    double x1 = 0, x2 = 0, delta = 0;
    
    scanf("%lf %lf %lf", &a, &b, &c);
    
    delta = pow(b, 2) - 4 * a * c;
    
    if(delta<0){
        printf("\nRAIZES IMAGINARIAS\n\n");
    } else {
        if(delta==0){
            x1 = -b / (2 * a);
            printf("\nRAIZ UNICA");
            printf("\nX1 = %.2lf\n\n", x1);
        }
        else{
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);

            printf("\nRAIZES DISTINTAS");
            
            if(x1 < x2){
                printf("\nX1 = %.2lf\nX2 = %.2lf\n\n", x1, x2);
            } else {
                printf("\nX1 = %.2lf\nX2 = %.2lf\n\n", x2, x1);
            }
        }
    }


    return 0;
}