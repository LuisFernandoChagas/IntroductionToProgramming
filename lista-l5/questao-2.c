#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char comida[100];
    double preco;
} comida_valor;

int main(){
    int casos, i, j;

    scanf("%d", &casos);

    while(casos--){
        int itens_no_Supermercado, itens_para_comprar;
        double valorTotal = 0;

        scanf("%d", &itens_no_Supermercado);

        comida_valor produtos_da_loja[itens_no_Supermercado];

        for(i = 0; i < itens_no_Supermercado; i++){
            scanf("%s %lf", &produtos_da_loja[i].comida, &produtos_da_loja[i].preco);
        }

        scanf("%d", &itens_para_comprar);

        comida_valor lista_de_compras[itens_para_comprar];

        for(i = 0; i < itens_para_comprar; i++){
            scanf("%s %lf", &lista_de_compras[i].comida, &lista_de_compras[i].preco);
        }

        for(i = 0; i < itens_para_comprar; i++){
            for(j = 0; j < itens_no_Supermercado; j++){
                if(!strcmp(lista_de_compras[i].comida, produtos_da_loja[j].comida)){
                    valorTotal = valorTotal + (lista_de_compras[i].preco * produtos_da_loja[j].preco);
                }
            }
        }

        printf("R$ %.2lf\n", valorTotal);
    }


    // system("pause");
    return 0;
}