#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int letrasIguais(char *numero, char *palavra){
    int i, j, aux = 0;
    for(i = 0; i < strlen(numero); i++){ // too
        if(numero[i] == palavra[i]){
            aux++;
        }
    }

    return aux;
}

int main(){
    // casos de teste
    int n;
    scanf("%d", &n);

    while(n--){
        char one[4] = "one";
        char second[4] = "two";
        char third[6] = "three";
        char numero[6];

        int i, j, aux;

        scanf("%s", &numero);
        getchar();

        aux = letrasIguais(numero, one);

        if(aux >= 2 && strlen(numero) == 3){
            printf("1\n");
        } else {
            aux = letrasIguais(numero, second);
            if(aux >= 2 && strlen(numero) == 3){
                printf("2\n");
            } else {
                aux = letrasIguais(numero, third);
                if(aux >= 4 && strlen(numero) == 5){
                    printf("3\n");
                }
            }
        }
    }
    

    printf("\n\n");

    // system("pause");
    return 0;
}