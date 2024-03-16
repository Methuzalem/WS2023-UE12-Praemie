#include <stdio.h>
#include <stdlib.h>

#define anz 10

double praemien(double betraege[], int anzahl, double grenze, double praemie){

    int counterP = 0;

    for(int i = 0; i < anzahl; i++){

        if(betraege[i] >= grenze){
            betraege[i] = betraege[i] + praemie;
            counterP++;
        }


    }


return praemie*counterP;

}

int eingabe(double betraege[], int max){

    int counterZahl = 1;
    double betrag = 0.00;

        for(int i = 0; i < max; i++){

                printf("Zahl %d: ", counterZahl);
                scanf(" %lf", &betrag);
                    if(betrag < 0.00){
                        break;
                    }
                betraege[i] = betrag;
                counterZahl++;
        }
            return counterZahl-1;
}

double sum(double betraege[], int anzahl){

    double summe = 0.00;

        for(int i = 0; i < anzahl; i++){
            summe = summe + betraege[i];
        }
        return summe;
}



int main()
{
    double arr[anz] = {0};
    double grenze, praemie, gesamt;
    int n;

    n = eingabe(arr, anz);
/*
    for(int i = 0; i < anz; i++){
        printf("%lf\n", arr[i]);
    }
*/
    printf("Untergrenze: ");
    scanf("%lf", &grenze);
    printf("Praemie: ");
    scanf("%lf", &praemie);

    printf("Summe vor Praemien: %.2f\n", sum(arr, n));
    gesamt = praemien(arr, n, grenze, praemie);
    printf("Praemien gesamt: %.2f\n", gesamt);
    printf("Summe nach Praemien: %.2f\n", sum(arr, n));

    return 0;
}
