#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void funcao(int n, char *texto){
    int i;
    if(n > strlen(texto)){
        puts(texto);
    } else {
        if(n == 0){
            printf("");
        } else {
            for(i = 0; i < n; i++){
                printf("%c", texto[i]);
            }
        }
    }
}

int main(){
    int n;
    scanf("%d", &n);

    int letras;
    while(n--){
        char texto[10000] = "";
        scanf("%d %[^\n]", &letras, &texto);

        funcao(letras, texto);
        printf("\n");
    }



    printf("\n\n");

    // system("pause");
    return 0;
}