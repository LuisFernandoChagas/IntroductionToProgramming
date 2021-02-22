#include <stdio.h>
#include <stdlib.h>

int main(){
    char sexo, bloco;
    int idade, alojamento;

    scanf("%c %d", &sexo, &idade);

    if(sexo == 'F'){
        bloco = 'A';

        if(idade > 15){
            alojamento = 7;
        } else {
            if(idade <= 12){
                alojamento = 5;
            } else {
                alojamento = 6;
            }
        }

    printf("\nBem vinda! Voce deve se instalar no alojamento %d do bloco %c", alojamento, bloco);
    } else {
        bloco = 'B';

        if(idade > 15){
            alojamento = 3;
        } else {
            if(idade <= 12){
                alojamento = 1;
            } else {
                alojamento = 2;
            }
        }
    
    printf("\nBem vindo! Voce deve se instalar no alojamento %d do bloco %c", alojamento, bloco);
    }
    

    printf("\n\n");

    // system("pause");
    return 0;
}