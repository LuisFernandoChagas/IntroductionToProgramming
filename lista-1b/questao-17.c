#include <stdio.h>
#include <stdlib.h>

int main(){
    double numbers[4], aux;

    int i, j;

    for(i = 0; i < 4; i++){
        scanf("%lf", &numbers[i]);
    }

    for(i = 0; i < 4; i++){
        for(j = i; j < 4; j++){
            if(numbers[i] > numbers[j]){
                aux = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = aux; // 2 4 6
            }
        }
    }

    for(i = 0; i < 4; i++){
        printf("%.2lf", numbers[i]);
        if(i != 3){
            printf(", ");
        } else {
            printf("\n\n");
        }
    }


    return 0;
}