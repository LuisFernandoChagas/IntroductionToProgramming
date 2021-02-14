#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 257

void str_clean(char *stringoriginal, char *caracteresIndesejados){
    int i, j, k, aux1 = strlen(stringoriginal), aux2 = strlen(caracteresIndesejados);

    for(i = 0; i < aux1; i++){
        for(j = 0; j < aux2; j++){
            if(stringoriginal[i] == caracteresIndesejados[j]){
                k = i;
                while(k < aux1){
                    stringoriginal[k] = stringoriginal[k + 1];
                    k++;
                }
                i--;
                break;
            }
        }
    }
}

int main() {
    char str[N]; // string original
    char clr[N]; // lista de caracteres indesejados
    scanf("%[^\n]", str);
    scanf("\n%[^\n]", clr);
    str_clean(str, clr) ;
    printf("%s\n", str);
    // system("pause");
    return 0;
}