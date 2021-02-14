#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 504

// essa função recebe de parâmetro 2 strings, 1° é a string original, e a 2° são os 
// caracteres que deseja achar na original. E retorna quantas vezes cada caracter foi
// repitido
int findLetters(char caracteresParaAchar, char *stringoriginal){
    int i, j, aux = 0, aux1 = strlen(stringoriginal);

    for(i = 2; i < aux1; i++){
        if(caracteresParaAchar == stringoriginal[i]){
            return i - 2;
        }
        if(i == aux1 - 1){
            return -1;
        }
    }

    return -1;
}

int main(){
    int n, i, aux = 0;
    char frase[N] = "";

    scanf("%d", &n);

    getchar();

    for(i = 0; i < n; i++){
        scanf("%[^\n]", &frase);
        getchar();

        if(aux = findLetters(frase[0], frase)){
            if(aux != -1){
                printf("Caractere %c encontrado no indice %d da string.\n", frase[0], aux);
            } else {
                if(aux == -1){
                    printf("Caractere %c nao encontrado.\n", frase[0]);
                }
            }
        }
    }


    printf("\n\n");

    // system("pause");
    return 0;
}