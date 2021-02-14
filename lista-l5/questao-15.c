#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int
    aux,
    user1,
    user2,
    likes,
    retweets,
    mencoes;
}interacoes;

void ordemCrescente(interacoes *user1, interacoes *user2);
// Essa função retorna 1 se o primeiro user1 é mais novo ou tem a mesma idade do segundo user
int ComparaUser(interacoes *user1, interacoes *user2);
void somaDeInteracoes(interacoes *resultado, int tam1, interacoes *total, int tam2);
// essa função retorna quantos números não foram repetidos dentro de um vetor
int findNumber(interacoes *vetor, int n);

int main(){
    int dimensao, pares, i, j, tamVet;

    scanf("%d %d", &dimensao, &pares);

    interacoes **matriz, totalInteracoes[pares];

    matriz = (interacoes**) calloc(dimensao, sizeof(interacoes*));
    
    if(!matriz){
        printf("Nao ha memoria suficiente\n");
        // system("pause");
        return 0;
    }

    for(i = 0; i < dimensao; i++){
        matriz[i] = (interacoes*) calloc(dimensao, sizeof(interacoes));

        if(!matriz[i]){
            printf("Nao ha memoria suficiente\n");
            // system("pause");
            return 0;
        }
    }

    for(i = 0; i < dimensao; i++){
        for(j = 0; j < dimensao; j++){
            matriz[i][j].aux = 0;
        }
    }

    for(i = 0; i < pares; i++){
        scanf("%d %d %d %d %d", &totalInteracoes[i].user1, &totalInteracoes[i].user2, &totalInteracoes[i].likes, &totalInteracoes[i].retweets, &totalInteracoes[i].mencoes);

        totalInteracoes[i].aux = 1;
    }

    tamVet = findNumber(totalInteracoes, pares);

    interacoes resultado[tamVet];

    for(i = 0; i < pares; i++){
        for(j = i; j < pares; j++){
            if(ComparaUser(&totalInteracoes[i], &totalInteracoes[j])){
                ordemCrescente(&totalInteracoes[i], &totalInteracoes[j]);
            }
        }
    }

    somaDeInteracoes(resultado, tamVet, totalInteracoes, pares);

    for(i = 0; i < tamVet; i++){
        matriz[resultado[i].user1][resultado[i].user2].likes = resultado[i].likes;
        matriz[resultado[i].user1][resultado[i].user2].retweets = resultado[i].retweets;
        matriz[resultado[i].user1][resultado[i].user2].mencoes = resultado[i].mencoes;
        matriz[resultado[i].user1][resultado[i].user2].user1 = resultado[i].user1;
        matriz[resultado[i].user1][resultado[i].user2].user2 = resultado[i].user2;
        matriz[resultado[i].user1][resultado[i].user2].aux = 1;
    }

    // Usuario 0 - num. likes: 200, num. retweets: 350 e num. mencoes: 50

    for(i = 0; i < dimensao; i++){
        for(j = 0; j < dimensao; j++){
            if(matriz[i][j].aux == 1){
                printf("Usuario %d - num. likes: %d, num. retweets: %d e num. mencoes: %d\n", matriz[i][j].user1, matriz[i][j].likes, matriz[i][j].retweets, matriz[i][j].mencoes);
            }        
        }
    }

    for(i = 0; i < dimensao; i++){
        free(matriz[i]);
    }

    free(matriz);

    // system("pause");
    return 0;
}

void ordemCrescente(interacoes *user1, interacoes *user2){
    interacoes aux;
    
    aux = *user2;
    *user2 = *user1;
    *user1 = aux;
}

int ComparaUser(interacoes *user1, interacoes *user2){
    if(user1->user1 <= user2->user1){
        return 0;
    } else {
        return 1;
    }
}

void somaDeInteracoes(interacoes *resultado, int tam1, interacoes *total, int tam2){
    int i, k;

    resultado[0].user1 = total[0].user1;
    resultado[0].user2 = total[0].user2;
    resultado[0].likes = total[0].likes;
    resultado[0].retweets = total[0].retweets;
    resultado[0].mencoes = total[0].mencoes;
    resultado[0].aux = 1;

    for(i = 1, k = 0; i < tam2; i++){
        if(resultado[k].user1 == total[i].user1){
            resultado[k].likes += total[i].likes;
            resultado[k].retweets += total[i].retweets;
            resultado[k].mencoes += total[i].mencoes;
        } else {
            k++;
            resultado[k].user1 = total[i].user1;
            resultado[k].user2 = total[i].user2;
            resultado[k].likes = total[i].likes;
            resultado[k].retweets = total[i].retweets;
            resultado[k].mencoes = total[i].mencoes;
            resultado[k].aux = total[i].aux;
        }
    }
}

int findNumber(interacoes *vetor, int n){
    int i, j, aux = 0, aux2 = 0;

    // primeiro número para ser comparado com todos os outros
    for(i = 0; i < n; i++){
        // quando o aux for igual a 0, significa que nenhum número se repitiu
        aux = 0;

        // todos os números dos vetores que serão comparados
        for(j = i; j < n; j++){
            if(!(i == j) && vetor[i].user1 == vetor[j].user1){
                aux++;
            }
        }
        if(aux == 0){
            aux2++;
        }
    }

    return aux2;
}