#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void){
    int n; //anzahl
    int x; //zahlen
    int y = 0; //summe
    int gzahl = 0; //grosse zahl
    int kzahl = 10000000; //kleine zahl
    int maxpos; //position von grose zahl
    int minpos; // position von kleine zahl
    int m = 0;

    do
    {
        printf("Wie viele Zahlen mochten Sie eingeben(zwischen 3 und 10): \n");
        scanf("%d", &n);

        if (n < 3 || n>10)
        {
            
            printf(" Sie mussen mindestens 3 Zahlen und maximal 10 eingeben\n");
            m += 1;
            printf("%d. Fehler\n",m);
            
        }

        if (m == 3){
            printf("Viele Fehler!!!!!!");
            return 1;
        }
        
    } while (n < 3 || n > 10);



    for (int i = 1; i <= n; i++) {
        do {
            printf("%d. Zahl: ", i);
            scanf("%d", &x);
            if (x < 0 || x > 100) {
                printf("Ungultige Eingabe. Bitte geben Sie eine Zahl zwischen 0 und 100 ein.\n");
            }
        } while (x < 0 || x > 100);

        y += x; 

        
        if (i == 1 || x > gzahl) {
            gzahl = x;
            maxpos = i;
        }
        if (i == 1 || x < kzahl) {
            kzahl = x;
            minpos = i;
        }
    }

    
    printf("Die Summe Ihrer Eingaben betraegt: %d\n", y);
    printf("Die groste Zahl ist die %d. Zahl mit dem Wert: %d\n", maxpos, gzahl);
    printf("Die kleinste Zahl ist die %d. Zahl mit dem Wert: %d\n", minpos, kzahl);

    return 0;
    
}
