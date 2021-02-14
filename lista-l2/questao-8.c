#include <stdio.h>
#include <stdlib.h>
#define N 50

void recursao(int n){
    int x;
    x = n % 2;

    n /= 2;

    if(n){
        recursao(n);
    }
    
    printf("%d", x);
}

int main(){
    int x, n, i;
    while(scanf("%d", &n) != EOF){
        recursao(n);

        printf("\n");
    }


    // system("pause");
    return 0;
}