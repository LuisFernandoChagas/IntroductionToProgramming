#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    double note;
    char letter;

    scanf("%lf", &note);

    if(note >= 9){
        letter = 'A';
    } else {
        if(note >= 7.5){
            letter = 'B';
        } else {
            if(note >= 6){
                letter = 'C';
            } else {
                letter = 'D';
            }
        }
    }


    printf("\nNOTA = %.1lf CONCEITO = %c\n\n", note, letter);


    return 0;
}