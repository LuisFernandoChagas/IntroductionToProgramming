#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int n, i;

    scanf("%d", &n);

    if(n < 5 || n > 2000){
        return 0;
    }

    for(i = 2; i <= n; i = i + 2){
        int value = 0;
        
        value = pow(i, 2);

        printf("\n%d^2 = %d", i, value);
    }
    

    printf("\n\n");

    system("pause");
    return 0;
}