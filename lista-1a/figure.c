#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int threeDigits, fourDigits; // 721
    int firstDigit, secondDigit, thirdDigit, y; // y = variável auxiliar
    scanf("%d", &threeDigits);

    thirdDigit = threeDigits % 10;  //  n3 = 1
    y = threeDigits / 10; // y = 72
    secondDigit = y % 10; // n2 = 2
    y = y / 10; // y = 7
    firstDigit = y; // n1 = 7

    y = firstDigit + (secondDigit * 3) + (thirdDigit * 5);
    y = y % 7; //  y = 4
    fourDigits = (threeDigits * 10 + y);


    printf("\nO NOVO NUMERO E = %d\n\n", fourDigits);



    return 0;
}