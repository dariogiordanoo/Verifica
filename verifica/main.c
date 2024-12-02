#include<stdio.h>
#include"pow.h"
#include"math.h"

int main(void)

{

    int num1, num2, risultato;
    char operazione;
    printf("Quale operazione vuoi eseguire ?\n");
    printf("s:somma\n");
    printf("m:moltiplicazione\n");
    printf("d:differenza\n");
    printf("div:divisione\n");
    printf("p:potenza\n");
    scanf("%d", &operazione);
    printf("Inderiscu il primo operando: ");
    scanf("%d", num1);
    printf("Inserisci il secondo operando: ");
    scanf("%d", num2);

    switch (operazione)
    {
        case 's':

        risultato = somma(num1,num2);
        printf("%d + %d = %d\n", num1, num2, risultato);
    
        break;
        
        case 'd':

        risultato = differenza(num1,num2);
        printf("%d - %d = %d\n", num1, num2, risultato);
    

        break;

        case 'm':

        risultato = moltiplicazione(num1,num2);
        printf("%d * %d = %d\n", num1, num2, risultato);

        break;

        case 'div':

        risultato = divisione(num1,num2);
        printf("%d / %d = %d\n", num1, num2, risultato);


        break;

        case 'p':

        risultato = potenza(num1,num2);
            printf("%d ^ %d = %d\n", num1, num2, risultato);

        break;

        default:printf("operazione non riconosciuta\n");




    }

   
    return 0;
}