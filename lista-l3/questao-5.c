#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int n = 1, i, j;
    while(n){
        int first = 0, second = 0;
        char resultado[10000] = "";
        scanf("%d %d", &first, &second);

        if(first == 0 && second == 0){
            // system("pause");
            return 0;
        }

        sprintf(resultado, "%d", first + second);

        for(i = 0; i < strlen(resultado); i++){
            if(resultado[i] == '0'){
                for(j = i; j < strlen(resultado); j++){
                    resultado[j] = resultado[j + 1];
                }
                i--;
            }
        }

        printf("%s\n", resultado);
    }


    printf("\n\n");

    // system("pause");
    return 0;
}