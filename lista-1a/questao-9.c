#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    double mass, acceleration, seconds;
    double maxSpeedMetter, maxSpeedKilometter, distance, joules;

    scanf("%lf", &mass);
    scanf("%lf", &acceleration);
    scanf("%lf", &seconds);

    maxSpeedMetter = (acceleration * seconds);
    maxSpeedKilometter = maxSpeedMetter * 3.6;
    distance = pow(seconds, 2) * acceleration / 2;
    joules = mass * 1000 * pow(maxSpeedMetter, 2) / 2;


    
    printf("\nVELOCIDADE = %.2lf", maxSpeedKilometter);
    printf("\nESPACO PERCORRIDO = %.2lf", distance);
    printf("\nTRABALHO REALIZADO = %.2lf\n\n", joules);


    system("pause");
    return 0;
}