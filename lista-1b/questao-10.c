#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    double numbers[3], aux;
    int i, j;

    scanf("%lf", &numbers[0]); // 5
    scanf("%lf", &numbers[1]); // 3
    scanf("%lf", &numbers[2]); // 2

    printf("\n");

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            if(numbers[i] < numbers[j]){
                aux = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = aux;
            }
        }
    }

    for(i = 0; i < 3; i++){
        printf("%.2lf", numbers[i]);
        if(i != 2){
            printf(", ");
        }
    }
    
    printf("\n\n");


    system("pause");
    return 0;
}