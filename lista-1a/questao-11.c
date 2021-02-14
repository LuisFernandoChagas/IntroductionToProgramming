#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int threeDigits, invertedDigits; // 721
    int firstDigit, secondDigit, thirdDigit, y; // y = variável auxiliar
    scanf("%d", &threeDigits);

    thirdDigit = threeDigits % 10;  //  n3 = 1
    y = threeDigits / 10; // y = 72
    secondDigit = y % 10; // n2 = 2
    y = y / 10; // y = 7
    firstDigit = y; // n1 = 7

    invertedDigits = (thirdDigit * 100) + (secondDigit * 10) + firstDigit;

    printf("\n%d\n\n", invertedDigits);


    return 0;
}