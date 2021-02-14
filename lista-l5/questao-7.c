#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct universidade{
    char *curso;
    int codigo;
    double credito;
};

struct aluno{
    char *nome, *curso;
    int codigo, credito;
    double creditoUni;
};

struct universidade uni[30];
struct aluno aluno[100];

int main(){
    int n, m, i, j, tamVet = 0;
    char buffer[1000];

    scanf("%d", &n);

    // número de cursos na universidade
    for(i = 0; i < n; i++){
        scanf("%d", &uni[i].codigo);
        scanf("%lf", &uni[i].credito);
        getchar();
        scanf("%[^\n]", &buffer);

        tamVet = strlen(buffer);

        uni[i].curso = (char*) malloc(tamVet + 1);

        if(!uni[i].curso){
            printf("Nao ha memoria suficiente\n");
            exit(1);
        }

        strcpy(uni[i].curso, buffer);
    }

    scanf("%d", &m);

    // número de alunos na universidade
    for(i = 0; i < m; i++){
        getchar();
        scanf("%[^\n]", &buffer);

        tamVet = strlen(buffer);

        aluno[i].nome = (char*) malloc(tamVet + 1);

        if(!aluno[i].nome){
            printf("Nao ha memoria suficiente\n");
            exit(1);
        }

        strcpy(aluno[i].nome, buffer);

        scanf("%d", &aluno[i].codigo);
        scanf("%d", &aluno[i].credito);

        for(j = 0; j < n; j++){
            if(aluno[i].codigo == uni[j].codigo){
                tamVet = strlen(uni[j].curso);

                aluno[i].curso = (char*) malloc(tamVet + 1);

                if(!aluno[i].curso){
                    printf("nao ha memoria suficiente\n");
                    exit(1);
                }

                strcpy(aluno[i].curso, uni[j].curso);
                aluno[i].creditoUni = uni[j].credito;
                break;
            }
        }
    }

    // Aluno(a): Joao Luiz Curso: Direito Num. Creditos: 5 Valor Credito: 234.50 Mensalidade: 1172.50

    for(i = 0; i < m; i++){
        printf("\nAluno(a): %s ", aluno[i].nome);
        printf("Curso: %s ", aluno[i].curso);
        printf("Num. Creditos: %d ", aluno[i].credito);
        printf("Valor Credito: %.2lf ", aluno[i].creditoUni);
        printf("Mensalidade: %.2lf", aluno[i].credito * aluno[i].creditoUni);
    }

    printf("\n");

    for(i = 0; i < n; i++){
        free(uni[i].curso);
    }

    for(i = 0; i < m; i++){
        free(aluno[i].curso);
        free(aluno[i].nome);
    }


    // system("pause");
    return 0;
}