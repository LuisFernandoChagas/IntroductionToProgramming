#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int quantidadeLetras(char *texto, char *letras){
    int j, k, valorLetras = 0;

    // testar letra por letra a fim de determinar quem é consoante ou vogal, ignorando caracteres especiais
    for(j = 0; j < strlen(texto); j++){
        for(k = 0; k < strlen(letras); k++){
            if(texto[j] == letras[k]){
                valorLetras++;
            }
        }
    }
 
    return valorLetras;
}
 
int main(){
    // casos de teste
    int n;
    scanf("%d", &n);
    getchar();
 
    char vogais[11] = "aeiouAEIOU";
    char consoantes[43] = "bcdfghjklmnpqrstvwxyzBCDFGHJKLMNPQRSTVWXYZ";
 
    while(n--){
        int valorConsoante = 0, valorVogal = 0;
        char texto[10000] = "";
        // pegar as frases
        scanf("%[^\n]", &texto);
        getchar();

        valorVogal = quantidadeLetras(texto, vogais);
    
        valorConsoante = quantidadeLetras(texto, consoantes);
 
        printf("Letras = %d\n", valorVogal + valorConsoante);
        printf("Vogais = %d\n", valorVogal);
        printf("Consoantes = %d\n", valorConsoante);
    }
 
 
    printf("\n\n");
 
    // system("pause");
    return 0;
}