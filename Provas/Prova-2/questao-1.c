#include <stdio.h>
#include <stdlib.h>

int verificar(int a, int b, int c){
    if(a != b && a != c){
        printf("A\n");
    } else {
        if(b != a && b != c){
        printf("B\n");
        } else {
            if(c != a && c != b){
            printf("C\n");
            } else {
                printf("*\n");
            }
        }
    }
}

int main(){
    int a, b, c;
    int resultado;

    while(scanf("%d %d %d", &a , &b, &c) != EOF){
        verificar(a, b, c);
    }

    // system("pause");
    return 0;
}