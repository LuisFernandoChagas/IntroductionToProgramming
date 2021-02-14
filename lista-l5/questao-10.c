#include <stdio.h>
#include <stdlib.h>
 
struct fracoes{
    int numerador, denominador;
};
 
int main(){
    int i, j, k, l, casos, tamVet = 2, aux = 0;
    char c;
 
    struct fracoes *vetor;
 
    vetor = (struct fracoes*) malloc(tamVet * sizeof(struct fracoes));
 
    if(!vetor){
        printf("Nao ha memoria para executar o programa\n");
        exit(1);
    }
 
    scanf("%d", &casos);
 
    for(i = 0; i < casos; i++){
        j = 0;
        aux = 0;
 
        do{
            scanf("%d/%d%c", &vetor[j].numerador, &vetor[j].denominador, &c);
        
            j++;
 
            if(j == tamVet){
                tamVet += 5;
                struct fracoes *auxiliar = realloc(vetor, tamVet * sizeof(struct fracoes));
 
                if(!auxiliar){
                    vetor = auxiliar;
                }
            }
 
        } while(c != '\n');
    
        printf("Caso de teste %d\n", i + 1);
 
        for(k = 0; k < j; k++){
            for(l = k + 1; l < j; l++){
                if(vetor[k].numerador * vetor[l].denominador == vetor[k].denominador * vetor[l].numerador){
                    aux = 1;
                    printf("%d/%d equivalente a %d/%d\n", vetor[k].numerador, vetor[k].denominador, vetor[l].numerador, vetor[l].denominador);    
                }
            }
        }
 
        if(!aux){
            printf("Nao ha fracoes equivalentes na sequencia\n");
        }
    }
 
    free(vetor);
 
    printf("\n");
 
    // system("pause");
    return 0;
}