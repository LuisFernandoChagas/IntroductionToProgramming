#include <stdio.h>
#include <stdlib.h>

int main(){
    int criancasNascidas, sexoDaCrianca, tempoDeVida;
    float meninos = 0, meninas = 0, totalDeMortos = 0, mortosComMenos24Meses = 0;
    float n = 1, aux = 0;

    scanf("%d", &criancasNascidas);
    while(n){
        scanf("%d", &sexoDaCrianca);
        if(sexoDaCrianca == 2){
            break;
        }
        scanf("%d", &tempoDeVida);

        if(sexoDaCrianca == 0){
            meninos++;
        } else {
            meninas++;
        }

        if(tempoDeVida <= 24){
            mortosComMenos24Meses++;
        }
    }

    totalDeMortos = meninas + meninos;
    
    aux = (100 * totalDeMortos) / criancasNascidas;
    printf("PORCENTAGEM DE MORTOS = %.2lf\n", aux);

    aux = (100 * meninos) / criancasNascidas;
    printf("PORCENTAGEM DE MASCULINOS MORTOS = %.2lf\n", aux);

    aux = (100 * meninas) / criancasNascidas;
    printf("PORCENTAGEM DE FEMININOS MORTOS = %.2lf\n", aux);

    aux = (100 * mortosComMenos24Meses) / criancasNascidas;
    printf("PORCENTAGEM DE MORTOS COM ATE 24 MESES DE VIDA = %.2lf\n", aux);


    // system("pause");
    return 0;
}