#include <stdio.h>
#include <stdlib.h>

void ordenacao(char *letra, int i, int *numero){
    if(letra[i] == 'A'){
        printf("%d ", numero[0]);
    } else {
        if(letra[i] == 'B'){
            printf("%d ", numero[1]);
        } else {
            printf("%d ", numero[2]);
        }
    }
}

int main(){
    int numbers[3];
    char letter[3];

    int aux, i, j;

    scanf("%d %d %d\n", &numbers[0], &numbers[1], &numbers[2]); // 6 2 4
    // setbuf(stdin, NULL);
    scanf("%c %c %c", &letter[0], &letter[1], &letter[2]); // A B C

    for(i = 0; i < 3; i++){
        for(j = i; j < 3; j++){
            if(numbers[i] > numbers[j]){
                aux = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = aux; // 2 4 6
            }
        }
    }

    printf("\n");

    for(i = 0; i < 3; i++){
        ordenacao(letter, i, numbers);
    }

    printf("\n\n");

    // system("pause");
    return 0;
}