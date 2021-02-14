#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    double firstSide, secondSide, thirdSide;
    double t, totalArea;

    scanf("%lf", &firstSide);
    scanf("%lf", &secondSide);
    scanf("%lf", &thirdSide);

    t = (firstSide + secondSide + thirdSide) / 2;
    totalArea = sqrt(t * (t - firstSide) * (t - secondSide) * (t - thirdSide));


    printf("\nA AREA DO TRIANGULO E = %.2lf\n\n", totalArea);


    return 0;
}