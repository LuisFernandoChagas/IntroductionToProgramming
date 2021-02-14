#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define N 51

// essa função deixa todas as letras de uma string maiúsculas e passa para outra string
void maiuscula(char *fraseMaiuscula, char *fraseMinuscula){
    int i, aux = 2;
    for(i = 0; i < strlen(fraseMinuscula); i++){
        if(fraseMinuscula[i] != ' '){
            if(aux == 2){
                fraseMaiuscula[i] = toupper(fraseMinuscula[i]);
                aux = 1;
            } else {
                fraseMaiuscula[i] = tolower(fraseMinuscula[i]);
                aux = 2;
            }
        } else {
            fraseMaiuscula[i] = fraseMinuscula[i];
        }
    }
}

int main(){
    char frase[N];

    while(scanf("%[^\n]", &frase) != EOF){
        getchar();

        char fraseDancante[N] = "";

        maiuscula(fraseDancante, frase);

        printf("%s\n", fraseDancante);
    }


    printf("\n\n");

    // system("pause");
    return 0;
}