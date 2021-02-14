#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct{
    double u, x, y, z;
    double norma;
} pontos;

// inverte as 2 structs recebidas como parâmetro
void ordemCrescente(pontos *ponto1, pontos *ponto2);
// Essa função retorna 1 se o primeiro aluno é mais novo ou tem a mesma idade do segundo aluno
int ComparaDataNasc(pontos *ponto1, pontos *ponto2);
// calcula a norma do ponto
double norma(pontos ponto);

int main(){
    int casos, i, j;

    scanf("%d", &casos);

    pontos ponto[casos];

    for(i = 0; i < casos; i++){
        scanf("%lf %lf %lf %lf", &ponto[i].u, &ponto[i].x, &ponto[i].y, &ponto[i].z);
    
        ponto[i].norma = norma(ponto[i]);
    }

    for(i = 0; i < casos; i++){
        for(j = i; j < casos; j++){
            if(ComparaDataNasc(&ponto[i], &ponto[j])){
                ordemCrescente(&ponto[i], &ponto[j]);
            }
        }
    }

    for(i = 0; i < casos; i++){
        printf("Vetor: (%.2lf, %.2lf, %.2lf, %.2lf) Norma: %.2lf\n", ponto[i].u, ponto[i].x, ponto[i].y, ponto[i].z, ponto[i].norma);
    }


    // system("pause");
    return 0;
}

double norma(pontos ponto){
    return sqrt(pow(ponto.u, 2) + pow(ponto.x, 2) + pow(ponto.y, 2) + pow(ponto.z, 2));
}

void ordemCrescente(pontos *ponto1, pontos *ponto2){
    pontos aux;
    
    aux = *ponto2;
    *ponto2 = *ponto1;
    *ponto1 = aux;
}

int ComparaDataNasc(pontos *ponto1, pontos *ponto2){
    if(ponto1->norma > ponto2->norma){
        return 1;
    } else {
        return 0;
    }
}