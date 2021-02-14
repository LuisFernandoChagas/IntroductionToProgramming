#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int recursion(int fatorial){
    int x;
    if(fatorial == 1 || fatorial == 0){
        x = 1;
    } else {
        x = fatorial * (fatorial - 1) * recursion(fatorial-2);
    }
    return x;
}

int main(){
    int fatorial;
    scanf("%d", &fatorial);

    int endValue;
    endValue = recursion(fatorial);
    printf("\n%d! = %d\n\n", fatorial, endValue);


    // system("pause");
    return 0;
}