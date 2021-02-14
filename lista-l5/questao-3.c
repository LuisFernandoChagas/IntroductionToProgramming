#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char pais[16];
} country;

typedef struct{
    char natal[23]; 
} felizNatal;

country paises[24];
felizNatal christmas[24];

void inicializador(void);

int main(){
    inicializador();

    char pais[16];
    int i, aux = 0;

    while(scanf("%[^\n]", &pais) != EOF){
        getchar();

        aux = 0;

        for(i = 0; i < 24; i++){
            if(!strcmp(paises[i].pais, pais)){
                printf("%s\n", christmas[i].natal);
                aux++;
                break;
            }

            if(!aux && i == 23){
                printf("-- NOT FOUND --\n");
            }
        }
    }
    

    // system("pause");
    return 0;
}

void inicializador(){
    strcpy(paises[0].pais, "brasil");
    strcpy(paises[1].pais, "portugal");

    strcpy(paises[2].pais, "estados-unidos");
    strcpy(paises[3].pais, "inglaterra");
    strcpy(paises[4].pais, "australia");
    strcpy(paises[5].pais, "antardida");
    strcpy(paises[6].pais, "canada");

    strcpy(paises[7].pais, "argentina");
    strcpy(paises[8].pais, "chile");
    strcpy(paises[9].pais, "mexico");
    strcpy(paises[10].pais, "espanha");

    strcpy(paises[11].pais, "italia");
    strcpy(paises[12].pais, "libia");

    strcpy(paises[13].pais, "siria");
    strcpy(paises[14].pais, "marrocos");
    
    strcpy(paises[15].pais, "belgica");
    strcpy(paises[16].pais, "japao");
    strcpy(paises[17].pais, "grecia");
    strcpy(paises[18].pais, "irlanda");
    strcpy(paises[19].pais, "coreia");
    strcpy(paises[20].pais, "alemanha");
    strcpy(paises[21].pais, "austria");
    strcpy(paises[22].pais, "suecia");
    strcpy(paises[23].pais, "turquia");

    strcpy(christmas[0].natal, "Feliz Natal!");
    strcpy(christmas[1].natal, "Feliz Natal!");
    strcpy(christmas[2].natal, "Merry Christmas!");
    strcpy(christmas[3].natal, "Merry Christmas!");
    strcpy(christmas[4].natal, "Merry Christmas!");
    strcpy(christmas[5].natal, "Merry Christmas!");
    strcpy(christmas[6].natal, "Merry Christmas!");
    strcpy(christmas[7].natal, "Feliz Navidad!");
    strcpy(christmas[8].natal, "Feliz Navidad!");
    strcpy(christmas[9].natal, "Feliz Navidad!");
    strcpy(christmas[10].natal, "Feliz Navidad!");
    strcpy(christmas[11].natal, "Buon Natale!");
    strcpy(christmas[12].natal, "Buon Natale!");
    strcpy(christmas[13].natal, "Milad Mubarak!");
    strcpy(christmas[14].natal, "Milad Mubarak!");
    strcpy(christmas[15].natal, "Zalig Kerstfeest!");
    strcpy(christmas[16].natal, "Merii Kurisumasu!");
    strcpy(christmas[17].natal, "Kala Christougena!");
    strcpy(christmas[18].natal, "Nollaig Shona Dhuit!");
    strcpy(christmas[19].natal, "Chuk Sung Tan!");
    strcpy(christmas[20].natal, "Frohliche Weihnachten!");
    strcpy(christmas[21].natal, "Frohe Weihnacht!");
    strcpy(christmas[22].natal, "God Jul!");
    strcpy(christmas[23].natal, "Mutlu Noeller");
}