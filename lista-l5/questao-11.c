#include <stdio.h>
#include <stdlib.h>

typedef struct{
    double coeficiente;
    int expoente;
}polinomio;

void maiorParaMenor(int *vetor, int tam);
int repeticao(polinomio *polinomio1, int subcaso1, polinomio *polinomio2, int subcaso2, int *vetor);
void leitura_de_polinomios(polinomio *polinomio, int tam);
void soma(polinomio *polinomio1, int subcaso1, polinomio *polinomio2, int subcaso2, polinomio *resultado, int tam_result);
void subtracao(polinomio *polinomio1, int subcaso1, polinomio *polinomio2, int subcaso2, polinomio *resultado, int tam_result);
void mostrar_polinomio(polinomio *resultado, int tam);

int main(){
    int k, i, casos, subcasos1, subcasos2, maximo_Expoente;
    char operacao;

    scanf("%d", &casos);

    for(k = 0; k < casos; k++){
        //////////////////////////////////////////////////////////
        getchar();
        scanf("%c", &operacao);
        scanf("%d", &subcasos1);
        //////////////////////////////////////////////////////////

        //////////////////////////////////////////////////////////
        int vetor[60];

        polinomio polinomio1[subcasos1];
        
        leitura_de_polinomios(polinomio1, subcasos1);
        
        scanf("%d", &subcasos2);

        polinomio polinomio2[subcasos2];

        leitura_de_polinomios(polinomio2, subcasos2);

        maximo_Expoente = repeticao(polinomio1, subcasos1, polinomio2, subcasos2, vetor);

        polinomio resultado[maximo_Expoente];
        //////////////////////////////////////////////////////////

        //////////////////////////////////////////////////////////
        for(i = 0; i < maximo_Expoente; i++){
            resultado[i].expoente = vetor[i];
            resultado[i].coeficiente = 0;
        }
        //////////////////////////////////////////////////////////

        //////////////////////////////////////////////////////////
        if(operacao == '+'){
            soma(polinomio1, subcasos1, polinomio2, subcasos2, resultado, maximo_Expoente);
        } else {
            subtracao(polinomio1, subcasos1, polinomio2, subcasos2, resultado, maximo_Expoente);
        }
        //////////////////////////////////////////////////////////
    
        //////////////////////////////////////////////////////////
        mostrar_polinomio(resultado, maximo_Expoente);
        //////////////////////////////////////////////////////////
    }


    // system("pause");
    return 0;
}

// esta função ordena o vetor do menor para o maior
void maiorParaMenor(int *vetor, int tam){
    int i, j, aux;

    for(i = 0; i < tam; i++){
        for(j = i; j < tam; j++){
            if(vetor[i] < vetor[j]){
                aux = vetor[i],
                vetor[i] = vetor[j],
                vetor[j] = aux;
            }
        }
    }
}

int repeticao(polinomio *polinomio1, int subcaso1, polinomio *polinomio2, int subcaso2, int *vetor){
    int i, j, k, aux = 1, resultado = subcaso1;

    for(k = 0; k < subcaso1; k++){
        vetor[k] = polinomio1[k].expoente;
    }

    for(i = 0; i < subcaso2; i++){
        for(j = 0; j < subcaso1; j++){
            if(polinomio2[i].expoente == polinomio1[j].expoente){
                aux = 0;
                break;
            }
        }
        if(aux){
            resultado++;
            vetor[k] = polinomio2[i].expoente;
            k++;
        }
        aux = 1;
    }

    maiorParaMenor(vetor, k);

    return resultado;
}

void leitura_de_polinomios(polinomio *polinomio, int tam){
    int i;

    for(i = 0; i < tam; i++){
        scanf("%lf %d", &polinomio[i].coeficiente, &polinomio[i].expoente);
    }
}

void soma(polinomio *polinomio1, int subcaso1, polinomio *polinomio2, int subcaso2, polinomio *resultado, int tam_result){
    int i, j;

    for(i = 0; i < tam_result; i++){
        for(j = 0; j < subcaso1; j++){
            if(resultado[i].expoente == polinomio1[j].expoente){
                resultado[i].coeficiente += polinomio1[j].coeficiente;
            }
        }
    }

    for(i = 0; i < tam_result; i++){
        for(j = 0; j < subcaso2; j++){
            if(resultado[i].expoente == polinomio2[j].expoente){
                resultado[i].coeficiente += polinomio2[j].coeficiente;
            }
        }
    }

    return;
}

void subtracao(polinomio *polinomio1, int subcaso1, polinomio *polinomio2, int subcaso2, polinomio *resultado, int tam_result){
    int i, j;

    for(i = 0; i < tam_result; i++){
        for(j = 0; j < subcaso1; j++){
            if(resultado[i].expoente == polinomio1[j].expoente){
                resultado[i].coeficiente += polinomio1[j].coeficiente;
            }
        }
    }

    for(i = 0; i < tam_result; i++){
        for(j = 0; j < subcaso2; j++){
            if(resultado[i].expoente == polinomio2[j].expoente){
                resultado[i].coeficiente -= polinomio2[j].coeficiente;
            }
        }
    }

    return;
}

void mostrar_polinomio(polinomio *resultado, int tam){
    int i, aux = 1;

    // −0.50X ∧7+3.00X ∧5+6.20X ∧4−4.00X ∧2+1.00X ∧1−1.00
    for(i = 0; i < tam; i++){
        if(resultado[i].coeficiente > 0){
            if(resultado[i].expoente != 0){
                if(aux){
                    printf("%.2lfX ∧%d", resultado[i].coeficiente, resultado[i].expoente);
                } else {
                    printf("+%.2lfX ∧%d", resultado[i].coeficiente, resultado[i].expoente);
                }
            } else {
                if(aux){
                    printf("%.2lf", resultado[i].coeficiente);
                } else {
                    printf("+%.2lf", resultado[i].coeficiente);
                }
            }
            aux = 0;
        } else {
            if(resultado[i].coeficiente < 0){
                resultado[i].coeficiente *= -1;
                
                if(resultado[i].expoente != 0){
                    printf("−%.2lfX ∧%d", resultado[i].coeficiente, resultado[i].expoente);
                } else {
                    printf("−%.2lf", resultado[i].coeficiente);
                }
            }
            aux = 0;
        }
    }

    printf("\n");

    return;
}