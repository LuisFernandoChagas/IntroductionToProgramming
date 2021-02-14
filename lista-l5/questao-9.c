#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define N 1000

struct ponto{
    double u, x, y, z;
};

struct ponto pontos[N];

double distancia(struct ponto *p1, struct ponto *p2){
    double resultado = sqrt(pow(p1->u - p2->u, 2) + pow(p1->x - p2->x, 2) + pow(p1->y - p2->y, 2) + pow(p1->z - p2->z, 2));
    return resultado;
}

int main(){
    int n, i, j;
    
    scanf("%d", &n);

    for(i = 0; i < n; i++){
        scanf("%lf %lf %lf %lf", &pontos[i].u, &pontos[i].x ,&pontos[i].y, &pontos[i].z);
    }

    for(i = 0; i < n - 1; i++){
        printf("\n%.2lf", distancia(&pontos[i], &pontos[i + 1]));
    }

    

    printf("\n\n");

    // system("pause");
    return 0;
}