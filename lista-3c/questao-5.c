#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int a1, razao, nElements;

    int i, value = 0;

    scanf("%d %d %d", &a1, &razao, &nElements);

    for(i = 0; i < nElements; i++){
        value = value + (a1 + (razao * i));
    }

    printf("\n%d\n\n", value);
    

    printf("\n\n");

    return 0;
}