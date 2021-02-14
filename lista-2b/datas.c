#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    unsigned int data;
    unsigned int dia, mes, ano, aux;

    scanf("%d", &data);

    dia = data / 1000000;
    if(dia < 10){
        aux = data % 100000;
    } else {
        aux = data % 1000000;
    }

    mes = aux / 10000;
    ano = data % 10000;
    

    if(dia > 31 || dia == 0 || mes > 12 || mes == 0){
        printf("\nData invalida!\n\n");
    } else {
        if((mes == 2 && dia >28) || ((mes == 4 || mes == 6 || mes == 9 || mes == 11) && dia == 31)){
            printf("\nData invalida!\n\n");
        } else {
            switch (mes){
            case 1: 
                printf("\n%u de janeiro de %u\n\n", dia, ano);
                break;

            case 2:
                printf("\n%u de fevereiro de %u\n\n", dia, ano);
                break;

            case 3:
                printf("\n%u de marco de %u\n\n", dia, ano);
                break;

            case 4:
                printf("\n%u de abril de %u\n\n", dia, ano);
                break;

            case 5:
                printf("\n%u de maio de %u\n\n", dia, ano);
                break;

            case 6:
                printf("\n%u de junho de %u\n\n", dia, ano);
                break;

            case 7:
                printf("\n%u de julho de %u\n\n", dia, ano);
                break;

            case 8:
                printf("\n%u de agosto de %u\n\n", dia, ano);
                break;

            case 9:
                printf("\n%u de setembro de %u\n\n", dia, ano);
                break;

            case 10:
                printf("\n%u de outubro de %u\n\n", dia, ano);
                break;

            case 11:
                printf("\n%u de novembro de %u\n\n", dia, ano);
                break;
            
            default:
                printf("\n%u de dezembro de %u\n\n", dia, ano);
                break;
            }
        }
    }


    system("pause");
    return 0;
}