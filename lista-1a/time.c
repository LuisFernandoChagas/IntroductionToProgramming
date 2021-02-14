#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int hour, minutes, seconds;
    int hourToSeconds, minutesToSeconds;
    int resultSeconds;

    scanf("%d", &hour);
    scanf("%d", &minutes);
    scanf("%d", &seconds);

    hourToSeconds = hour * 3600;
    minutesToSeconds = minutes * 60;
    resultSeconds = hourToSeconds + minutesToSeconds + seconds;


    printf("\nO TEMPO EM SEGUNDOS E = %d\n\n", resultSeconds);


    return 0;
}