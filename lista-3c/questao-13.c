#include <stdio.h>
#include <stdlib.h>
 
int main(){
    int i, j = 1;
    double  par = 0, impar = 0, quantidadeDePar = 0, quantidadeDeImpar = 0, mediaPar, mediaImpar;;
    int sequencia;
    
    for(i = 0; i < j; i++){
        sequencia = 0;
        scanf("%d", &sequencia);
 
        if(sequencia != 0){
            // separar os números da sequencia em pares e ímpares
            if(sequencia % 2 == 0){
                // concatenar os valores e somente depois tirar a média
                par = par + sequencia;
                
                quantidadeDePar++;
            } else {
                impar = impar + sequencia;
 
                quantidadeDeImpar++;
            }
 
            j++;
        } else {
            break;
        }
    }

    mediaPar = par / quantidadeDePar;
    mediaImpar = impar / quantidadeDeImpar;
    
    if(quantidadeDePar == 0){
        mediaPar = 0;
    }

    if(quantidadeDeImpar == 0){
        mediaImpar = 0;
    }


    printf("\nMEDIA PAR: %.2lf", mediaPar);
    printf("\nMEDIA IMPAR: %.2lf\n\n", mediaImpar);
 
 
    // system("pause");
    return 0;
}