#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    double firstNote, secondNote, thirdNote;
    double media;
    scanf("%lf %lf %lf", &firstNote, &secondNote, &thirdNote);
    
    media = (firstNote + secondNote + thirdNote) / 3;


    printf("\nMEDIA = %.2lf", media);

    if(media >= 6){
        printf("\nAPROVADO\n\n");
    } else {
        printf("\nREPROVADO\n\n");
    }

    return 0;
}