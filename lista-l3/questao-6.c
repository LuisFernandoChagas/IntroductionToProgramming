#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char palavra[10000];
    while(scanf("%s", &palavra) != EOF){
        getchar();
        int i, j, aux = 0;
        
        for(i = 0, j = strlen(palavra) - 1; i < strlen(palavra) && j >= 0; i++, j--){
            if(palavra[i] == palavra[j]){
                aux++;
            }
        }

        if(aux == strlen(palavra)){
            printf("sim\n");
        } else {
            printf("nao\n");
        }
    }

    // system("pause");
    return 0;
}