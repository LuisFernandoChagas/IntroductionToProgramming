#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int x;

    scanf("%d", &x);
    
    if(x % 3 == 0 && x % 5 == 0){
        printf("\nO NUMERO E DIVISIVEL\n\n");
    } else {
        printf("\nO NUMERO NAO E DIVISIVEL\n\n");
    }


    system("pause");
    return 0;
}