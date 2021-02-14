#include <stdio.h>
#include <stdlib.h>

double FahrenToCelsius(double temperaturefahrenheit){
    double x;
    x = (5 * (temperaturefahrenheit - 32)) / 9;

    return x;
}

int main(){
    double temperatureFahrenheit, measureInch;
    double temperatureCelsius, measureMillimeter;

    scanf("%lf", &temperatureFahrenheit);
    scanf("%lf", &measureInch);

    temperatureCelsius = FahrenToCelsius(temperatureFahrenheit);
    printf("\nO VALOR EM CELSIUS = %.2lf", temperatureCelsius);

    measureMillimeter = measureInch * 25.4;
    printf("\nA QUANTIDADE DE CHUVA E = %.2lf\n\n", measureMillimeter);


    return 0;
}