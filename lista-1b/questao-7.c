#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int x, y, i;

    scanf("%d", &x);

    if(x < 1){
        i = 1;
    } else {
        if(x == 1){
            i = 2;
        } else {
            i = 3;
        }
    }

    switch (i){
    case 1:
        y = x;
        break;

    case 2:
        y = 0;
        break;

    default:
        y = pow(x, 2);
        break;
    }

    printf("\nY = %d\n\n", y);


    // system("pause");
    return 0;
}