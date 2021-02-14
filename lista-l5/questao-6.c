#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int i, j, casos, tamVet;

    scanf("%d", &casos);

    char *nomes[casos], buffer[1000];

    for(i = 0; i < casos; i++){
        getchar();
        scanf("%[^\n]", &buffer);

        tamVet = strlen(buffer);

        nomes[i] = (char*) malloc(tamVet + 1);

        if(!nomes[i]){
            printf("Nao ha memoria suficiente\n");
            exit(1);
        }

        strcpy(nomes[i], buffer);

        printf("%s\n", nomes[i]);
    }

    for(i = 0; i < casos; i++){
        free(nomes[i]);
    }

    // system("pause");
    return 0;
}