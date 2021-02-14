#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 30

struct data{
    char nome[201];
    int dia, mes, ano;
    int matricula;
};

struct data aluno[N];

void ordemCrescente(struct data *alu1, struct data *alu2){
    // ordenar pelo ano
    struct data aux;
    
    aux = *alu2;
    *alu2 = *alu1;
    *alu1 = aux;
}

// Essa função retorna 1 se o primeiro aluno é mais novo ou tem a mesma idade do segundo aluno
int ComparaDataNasc(struct data *alu1, struct data *alu2){
    int i, j;

    if(alu1->ano > alu2->ano){
        return 0;
    } else {
        if(alu1->ano == alu2->ano){
            if(alu1->mes > alu2->mes){
                return 0;
            } else {
                if(alu1->mes == alu2->mes){
                    if(alu1->dia >= alu2->dia){
                        return 0;
                    } else {
                        return 1;
                    }
                } else {
                    return 1;
                }
            }
        } else {
            return 1;
        }
    }
}

int main(){
    int n, i, j;

    scanf("%d", &n);

    for(i = 0; i < n; i++){
        scanf("%d %d %d %d", &aluno[i].matricula, &aluno[i].dia, &aluno[i].mes, &aluno[i].ano);
        getchar();
        scanf("%[^\n]", &aluno[i].nome);
    }

    for(i = 0; i < n; i++){
        for(j = i; j < n; j++){
            if(ComparaDataNasc(&aluno[i], &aluno[j])){
                ordemCrescente(&aluno[i], &aluno[j]);
            }
        }
    }

    // Matric.: 23489 Nome: Joao Feliz da Tristeza Data Nasc: 11/3/2009
    for(i = 0; i < n; i++){
        printf("\nMatric.: %d Nome: %s Data Nasc: %d/%d/%d", aluno[i].matricula, aluno[i].nome, aluno[i].dia, aluno[i].mes, aluno[i].ano);
    }



    printf("\n\n");

    system("pause");
    return 0;
}