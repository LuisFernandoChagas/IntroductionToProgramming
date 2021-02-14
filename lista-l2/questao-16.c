#include <stdio.h>
#include <stdlib.h>

int main(){
    int alunosTotal, minimoAlunos;

    scanf("%d %d", &alunosTotal, &minimoAlunos);

    int i, j = 0, tempo[alunosTotal], alunos[alunosTotal], aux = 0;

    for(i = 0; i < alunosTotal; i++){
        scanf("%d", &tempo[i]);

        if(tempo[i] <= 0){
            aux++;
            alunos[j] = i + 1;
            j++;
        }
    }

    if(aux >= minimoAlunos){
        printf("NAO");

        for(i = aux - 1; i >= 0; i--){
            printf("\n%d", alunos[i]);
        }
    } else {
        printf("SIM\n");
    }


    printf("\n\n");

    // system("pause");
    return 0;
}