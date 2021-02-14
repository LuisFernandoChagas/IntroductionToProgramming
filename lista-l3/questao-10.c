#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 1000

// essa função passa uma string para outra, porém invertida
void inversao(char *textoInvertido, char *textoParaInverter){
    int i, j = 0;
    for(i = strlen(textoParaInverter) - 1; i >= 0; i--){
        textoInvertido[j] = textoParaInverter[i];
        j++;
    }
}

// essa função recebe de parâmetro 2 strings, 1° é a string original, e a 2° são os 
// caracteres que deseja achar na original. E retorna quantas vezes cada caracter foi
// repitido
int findLetters(char *stringoriginal, char caracteresParaAchar){
    int i, j, aux = 0, aux1 = strlen(stringoriginal);

    for(i = 0; i < aux1; i++){
        if(caracteresParaAchar == stringoriginal[i]){
            aux++;
        }
    }

    return aux;
}

int main(){
    int n;
    char letras[53] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

    scanf("%d", &n);
    getchar();

    while(n--){
        char frase[N] = "", fraseInvertida[N] = "";

        scanf("%[^\n]", &frase);
        getchar();

        int i, aux = strlen(frase);

        for(i = 0; i < aux; i++){
            if(findLetters(letras, frase[i])) frase[i] += 3;
        }

        inversao(fraseInvertida, frase);

        for(i = (aux * 1.0) / 2; i < aux; i++){
            fraseInvertida[i] -= 1;
        }
        
        printf("%s\n", fraseInvertida);
    }



    printf("\n\n");

    // system("pause");
    return 0;
}