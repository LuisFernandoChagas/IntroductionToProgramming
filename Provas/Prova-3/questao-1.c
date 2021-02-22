#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void inversao(char *texto){
    int i;
    for(i = strlen(texto) - 1; i >= 0; i--){
        printf("%c", texto[i]);
    }
}

int main(){
    int n = 1;
    char texto[10000] = "";
    while(scanf("%[^\n]", &texto) != EOF){
        getchar();

        inversao(texto);
        printf("\n");
    }


    printf("\n\n");

    // system("pause");
    return 0;
}