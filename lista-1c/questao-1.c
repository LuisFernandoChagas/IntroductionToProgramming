#include <stdio.h>
#include <stdlib.h>

double percentCalc(double totalNumber, double percent, double price){
    double rentFromEach = 0, numberOfPerson = 0;

    numberOfPerson = totalNumber * percent / 100;
    rentFromEach = numberOfPerson * price;

    return rentFromEach;
}

int main(){
    int cases;

    scanf("%d", &cases);

    int i = 0, k = 0, j = 0;;
    double totalPublic[cases], percentsPop[cases], percentsGeneral[cases], percentsStand[cases], percentsChair[cases], totalRent[cases];
    double pop = 1, general = 5, stand = 10, chair = 20;

    for(i = 0; i < cases; i++){
        scanf("%lf %lf %lf %lf %lf", &totalPublic[i], &percentsPop[i], &percentsGeneral[i], &percentsStand[i], &percentsChair[i]);

        totalRent[i] = totalRent[i] + percentCalc(totalPublic[i], percentsPop[i], pop);
        
        totalRent[i] = totalRent[i] + percentCalc(totalPublic[i], percentsGeneral[i], general);

        totalRent[i] = totalRent[i] + percentCalc(totalPublic[i], percentsStand[i], stand);
        
        totalRent[i] = totalRent[i] + percentCalc(totalPublic[i], percentsChair[i], chair);
    }

    for(k = 0; k < cases; k++){
        printf("\nA RENDA DO JOGO N. %d E = %.2lf", j = j + 1, totalRent[k]);
    }
    
    printf("\n\n");


    return 0;
}