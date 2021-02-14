#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    // pegar a quantidade de frases que serão concatenadas
    int n;
    scanf("%d", &n);
    
    // pegar as 2 palavras
    int i, j, k;
    for(i = 0; i < n; i++){
        char palavra1[50] = "", palavra2[50] = "", palavraFinal[100] = "";
        scanf("%s %s", &palavra1, &palavra2);
        setbuf(stdin, NULL);

        // pegar a primeira letra da primeira palavra e depois a primeira letra da 2° palavra
        if(strlen(palavra1) == strlen(palavra2)){
            for(j = 0, k = 0; j < strlen(palavra1); j++){
                palavraFinal[k] = palavra1[j];
                k++;
                palavraFinal[k] = palavra2[j];
                k++;
            }

            printf("%s\n", palavraFinal);
        } else {
            if(strlen(palavra1) < strlen(palavra2)){
                for(j = 0, k = 0; j < strlen(palavra1); j++){
                    palavraFinal[k] = palavra1[j];
                    k++;
                    palavraFinal[k] = palavra2[j];
                    k++;
                }
                for(j; j <= strlen(palavra2); j++){
                    palavraFinal[k] = palavra2[j];
                    k++;
                }
                printf("%s\n", palavraFinal);
            } else {
                for(j = 0, k = 0; j < strlen(palavra2); j++){
                    palavraFinal[k] = palavra1[j];
                    k++;
                    palavraFinal[k] = palavra2[j];
                    k++;
                }
                for(j; j <= strlen(palavra1); j++){
                    palavraFinal[k] = palavra1[j];
                    k++;
                }
                printf("%s\n", palavraFinal);
            }
        }
    }

    printf("\n\n");
    
    // system("pause");
    return 0;
}