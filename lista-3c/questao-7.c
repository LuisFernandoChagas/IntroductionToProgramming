#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define N 50
 
int main(){
    // NF = 0.7 · MA prova + 0.15 * MA lista + 0.15 * NT
    int matricula[N], i, j, k;
    double notaProva[N][8], notaLista[N][5], notaFinalTest[N], mediaProva[N], mediaLista[N], notaFinal[N], cargaHoraria[N];
 
    for(i = 0; i < N ; i++){
        scanf("%d %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf", &matricula[i], &notaProva[i][0], &notaProva[i][1], &notaProva[i][2], &notaProva[i][3], &notaProva[i][4], &notaProva[i][5], &notaProva[i][6], &notaProva[i][7], &notaLista[i][0], &notaLista[i][1], &notaLista[i][2], &notaLista[i][3], &notaLista[i][4], &notaFinalTest[i], &cargaHoraria[i]);
 
        if(matricula[i] != -1){
            mediaProva[i] = (notaProva[i][0] + notaProva[i][1] + notaProva[i][2] + notaProva[i][3] + notaProva[i][4] + notaProva[i][5] + notaProva[i][6] + notaProva[i][7]) / 8;
 
            mediaLista[i] = (notaLista[i][0] + notaLista[i][1] + notaLista[i][2] + notaLista[i][3] + notaLista[i][4]) / 5;
 
            notaFinal[i] = (0.7 * mediaProva[i]) + (0.15 * mediaLista[i]) + (0.15 * notaFinalTest[i]);
 
            k = i;
        } else {
            break;
        }
    }
 
    for(i = 0; i <= k; i++){
        if(matricula < 0){
            break;
        }
        if(cargaHoraria[i] >= 96 && notaFinal[i] >= 6){
            printf("\nMatricula: %d, Nota Final: %.2lf, Situacao Final: APROVADO", matricula[i], notaFinal[i]);
        } else {
            if(cargaHoraria[i] < 96 && notaFinal[i] >= 6){
                printf("\nMatricula: %d, Nota Final: %.2lf, Situacao Final: REPROVADO POR FREQUENCIA", matricula[i], notaFinal[i]);
            } else {
                if(cargaHoraria[i] >= 96 && notaFinal[i] < 6){
                    printf("\nMatricula: %d, Nota Final: %.2lf, Situacao Final: REPROVADO POR NOTA", matricula[i], notaFinal[i]);
                } else {
                    printf("\nMatricula: %d, Nota Final: %.2lf, Situacao Final: REPROVADO POR NOTA E POR FREQUENCIA", matricula[i], notaFinal[i]);
                }
            }
        }
    }
 
 
    printf("\n\n");
 
    return 0;
}