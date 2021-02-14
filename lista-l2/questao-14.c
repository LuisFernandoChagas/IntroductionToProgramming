#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, aux1, aux2;
    scanf("%d", &n);

    int i, j;
    double numbers[n];

    for(i = 0; i < n; i++){
        scanf("%lf", &numbers[i]);
    }

    for(i = 0; i < n; i++){
        for(j = i; j < n; j++){
            if(numbers[i] > numbers[j]){
                aux1 = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = aux1; // 2 4 6
            }
        }
    }

    if(n % 2 == 0){
        // pegar o n/2 e o n/2+1
        aux1 = n / 2;
        aux2 = (n / 2) - 1;

        // media aritmética dos termos do meio
        printf("\n%.2lf", (numbers[aux1]+numbers[aux2]) / 2);        

    } else {
        aux1 = (n / 2);

        printf("\n%.2lf", numbers[aux1]);
    }


    printf("\n\n");

    // system("pause");
    return 0;
}