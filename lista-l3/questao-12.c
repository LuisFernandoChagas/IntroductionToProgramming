#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define N 102
 
// essa função deixa todas as letras de uma string maiúsculas e passa para outra string
void maiuscula(char *frase, char *Str){
    int i;
    for(i = 0; i < N; i++){
        frase[i] = toupper(Str[i]);
    }
}
 
int comparador(char *stringoriginal){
    char str[N];

    maiuscula(str, stringoriginal);
 
    int i = 0, j = 0, k = 0, aux = 0;
    char aux1 = ' ';

    for(i = 1; i < strlen(str); i++){
        if(str[i] == ' '){
            if(str[0] == str[i + 1]){
                aux1 = str[0];
                aux++;
                // printf("\nPrimeiro aux: %d\n", aux);
            }
            k = i;
            break;
        }
    }
 
    for(i = k - 1; i < strlen(str); i++){
        for(j = i + 1; j < strlen(str); j++){
            if(str[j] == ' ' && str[i] == ' '){
                if(str[i + 1] == str[j + 1] && str[i + 1] != aux1){
                    aux1 = str[j + 1];
                    aux++;
                    i = j;
                    // printf("\nSegundo aux: %d\n", aux);
                }

                if(str[i + 1] != str[j + 1]){
                    aux1 = ' ';
                }
                break;
            }
        }
    }
 
    return aux;
}
 
int main(){
    char frase[N] = "";
 
    while(scanf("%[^\n]", &frase) != EOF){
        getchar();
    
        printf("%d\n", comparador(frase));
    }
 
 
    printf("\n\n");
 
    // system("pause");
    return 0;
}