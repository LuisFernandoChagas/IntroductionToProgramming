#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int bissexto;

    scanf("%d", &bissexto);

    if(bissexto % 4 == 0){
        if(bissexto % 100 == 0 && bissexto % 400 != 0){
            printf("\nANO NAO BISSEXTO\n\n");
        } else {
            printf("\nANO BISSEXTO\n\n");
        }
    } else {
        printf("\nANO NAO BISSEXTO\n\n");
    }


    system("pause");
    return 0;
}