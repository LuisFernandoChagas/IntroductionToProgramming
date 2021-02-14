#include <stdio.h>
#include <stdlib.h>
 
void borda(int larguraBorda, int largura, int valorBorda){
    int i, j;
    for(i = 0; i < larguraBorda; i++){
        for(j = 0; j < largura; j++){
            printf("%d ", valorBorda);
        }
        printf("\n");
    }
}
 
int main(){
    // valores de entrada
    // largura e altura da matriz
    // largura e valor da borda
    
    int largura, altura, larguraBorda, valorBorda;
    scanf("%d %d %d %d", &altura, &largura, &larguraBorda, &valorBorda);
 
    printf("P2\n%d %d\n255\n", largura, altura);
 
    // matriz
    int i, j;
 
    // se a borda for maior q o tamanho da matriz
    if(2 * larguraBorda > altura){
        // borda inicial
        borda(larguraBorda, largura, valorBorda);

        borda(altura - larguraBorda, largura, valorBorda);
    } else {
        // borda inicial
        borda(larguraBorda, largura, valorBorda);

        // preenchimento das bordas laterais + 0s
        for(i = 0; i < altura - (2 * larguraBorda); i++){
            for(j = 0; j < largura; j++){
                if(j < larguraBorda || j >= largura - larguraBorda){
                    printf("%d ", valorBorda);
                } else {
                    printf("0 ");
                }
            }
            printf("\n");
        }

        // última borda
        borda(larguraBorda, largura, valorBorda);
    }
 
 
 
 
    printf("\n\n");
 
    // system("pause");
    return 0;
}