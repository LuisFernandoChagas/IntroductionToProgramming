#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    unsigned int n;
    int i;
    double hipo;

    scanf("%u", &n);

    int cateto1, cateto2;


    // realizar cálculo dos catetos
    for(cateto1 = 1; cateto1 <= n; cateto1++){
        for(cateto2 = cateto1; cateto2 <= n; cateto2++){
            // hipo = sqrt(pow(cateto1, 2) + pow(cateto2, 2));

            // verificar se a soma dos quadrados dos catetos é igual a hipotenusa
            if(sqrt(pow(cateto1, 2) + pow(cateto2, 2)) == n){
                printf("hipotenusa = %u, catetos %d e %d\n", n, cateto1, cateto2);
            }
        }
    }





    printf("\n\n");

    system("pause");
    return 0;
}