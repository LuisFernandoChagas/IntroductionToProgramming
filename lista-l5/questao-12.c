#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int pessoas, energia;
}casas;

void divisao(casas *casa, casas *consumo_Individual, int posicao);
// esta função ordena o vetor do menor para o maior
void menorParaMaior(casas *consumo, int tam);
// essa função retorna quantos números não foram repetidos dentro de um vetor
int findNumber(casas *casa, int n);
double consumoTotal(casas *pessoas, int tam1, casas *energia, int tam2);

int main(){
    int i, k, n = 1, tamVet = 1;

    while(n){
        int casos;

        scanf("%d", &casos);
        
        if(!casos) break;

        casas casa[casos], consumo_Por_Pessoa[casos];

        for(i = 0; i < casos; i++){
            scanf("%d %d", &casa[i].pessoas, &casa[i].energia);

            divisao(casa, consumo_Por_Pessoa, i);
        }

        menorParaMaior(consumo_Por_Pessoa, casos);

        tamVet = findNumber(consumo_Por_Pessoa, casos);

        casas resultado[tamVet];
        resultado[0].energia = consumo_Por_Pessoa[0].energia;
        resultado[0].pessoas = consumo_Por_Pessoa[0].pessoas;

        for(i = 0, k = 0; i < casos; i++){
            if(consumo_Por_Pessoa[i + 1].energia == resultado[k].energia){
                resultado[k].pessoas += consumo_Por_Pessoa[i + 1].pessoas;
            } else {
                k++;
                resultado[k].energia = consumo_Por_Pessoa[i + 1].energia;
                resultado[k].pessoas = consumo_Por_Pessoa[i + 1].pessoas;
            }
        }

        printf("Cidade# %d:\n", n);

        for(i = 0; i < tamVet; i++){
            printf("%d-%d ", resultado[i].pessoas, resultado[i].energia);
        }

        printf("\n");

        printf("Consumo medio: %.2lf m3.\n", consumoTotal(resultado, tamVet, casa, casos));

        n++;
    }

    // system("pause");
    return 0;
}

int findNumber(casas *casa, int n){
    int i, j, aux = 0, aux2 = 0, resultado = 0;

    // primeiro número para ser comparado com todos os outros
    for(i = 0; i < n; i++){
        // quando o aux for igual a 0, significa que nenhum número se repitiu
        aux = 0;

        // todos os números dos vetores que serão comparados
        for(j = i; j < n; j++){
            if(i != j && casa[i].energia == casa[j].energia){
                aux++;
            }
        }
        if(aux == 0){
            aux2++;
        }
    }

    return aux2;
}

void menorParaMaior(casas *consumo, int tam){
    int i, j, aux;

    for(i = 0; i < tam; i++){
        for(j = i; j < tam; j++){
            if(consumo[i].energia > consumo[j].energia){
                aux = consumo[i].energia,
                consumo[i].energia = consumo[j].energia,
                consumo[j].energia = aux;

                aux = consumo[i].pessoas,
                consumo[i].pessoas = consumo[j].pessoas,
                consumo[j].pessoas = aux;
            }
        }
    }
}

void divisao(casas *casa, casas *consumo_Individual, int posicao){
    consumo_Individual[posicao].energia = casa[posicao].energia / casa[posicao].pessoas;
    consumo_Individual[posicao].pessoas = casa[posicao].pessoas;    
}

double consumoTotal(casas *pessoas, int tam1, casas *energia, int tam2){
    double totalPessoas = 0, totalEnergia = 0;
    int i;

    for(i = 0; i < tam1; i++){
        totalPessoas += pessoas[i].pessoas;
    }

    for(i = 0; i < tam2; i++){
        totalEnergia += energia[i].energia;
    }

    return totalEnergia / totalPessoas;
}