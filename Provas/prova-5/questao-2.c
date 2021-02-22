#include <stdio.h>
#include <stdlib.h>
 
struct datas{
    int hora, dia, mes, ano;
    char tipo, codigo[12];
};
 
void ordemCrescente(struct datas *produto1, struct datas *produto2){
    struct datas aux;
    
    aux = *produto2;
    *produto2 = *produto1;
    *produto1 = aux;
}
 
// Essa função retorna 0 se o produto1 é mais novo ou tem a mesma data de produção do produto2
int ComparaDataNasc(struct datas *produto1, struct datas *produto2){
    int i, j;
 
    if(produto1->ano > produto2->ano){
        return 1;
    } else {
        if(produto1->ano == produto2->ano){
            if(produto1->mes > produto2->mes){
                return 1;
            } else {
                if(produto1->mes == produto2->mes){
                    if(produto1->dia > produto2->dia){
                        return 1;
                    } else {
                        if(produto1->dia == produto2->dia){
                            if(produto1->hora > produto2->hora){
                                return 1;
                            } else {
                                if(produto1->hora == produto2->hora){
                                    if(produto1->tipo > produto2->tipo){
                                        return 1;
                                    } else {
                                        return 0;
                                    }
                                }
                                return 0;
                            }
                        }
                        return 0;
                    }
                } else {
                    return 0;
                }
            }
        } else {
            return 0;
        }
    }
}
 
int main(){
    int i = 0, j, k, tamVet = 3;
 
    struct datas *produto;
 
    produto = (struct datas*) malloc(tamVet * sizeof(struct datas));
 
    if(!produto){
        printf("Nao ha memoria suficiente\n");
        exit(1);
    }
 
    while(scanf("%d %d %d %d %c %s", &produto[i].hora, &produto[i].dia, &produto[i].mes, &produto[i].ano, &produto[i].tipo, &produto[i].codigo) != EOF){
        getchar();
 
        i++;
 
        if(i == tamVet){
            tamVet += 3;
            struct datas *aux = realloc(produto, tamVet * sizeof(struct datas));
 
            if(aux){
                produto = aux;
            }
        }
    }
 
    for(j = 0; j < i; j++){
        for(k = j; k < i; k++){
            if(ComparaDataNasc(&produto[j], &produto[k])){
                ordemCrescente(&produto[j], &produto[k]);
            }
        }
    }
 
    printf("\n");
 
    for(j = 0; j < i; j++){
        printf("%s %d %d %d %d %c\n", produto[j].codigo, produto[j].hora, produto[j].dia, produto[j].mes, produto[j].ano, produto[j].tipo);
    }
 
    free(produto);
 
    printf("\n\n");
 
    system("pause");
    return 0;
}