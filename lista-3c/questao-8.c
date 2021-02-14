#include <stdio.h>
#include <stdlib.h>

int main(){
    int popA, popB;
    int result = 0;

    scanf("%d", &popA);
    scanf("%d", &popB);

    if(popA <= 0 || popB <= 0 || popA >= popB){
        return 0;
    }

    while(popA < popB){
        popA = popA * 1.03;
        popB = popB * 1.015;
        
        result++;
    }

    printf("\nANOS = %d\n\n", result);


    // system("pause");
    return 0;
}