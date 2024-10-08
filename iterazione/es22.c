/*Dato un numero N calcolare e visualizzare tutte le coppie di numeri minori di N che
danno per somma il numero stesso. Non considerare la proprietà commutativa. 
*/

//Autore: Redi Giacomo Data: 8/10/2024

#include <stdio.h>

int main(int argc, char *argv[])
{
    int N,somma,i,j;
    
    do{
        printf("Inserisci un numero intero positivo\n");
        scanf("%d",&N);
    }while(N<=0);

    i = 1;
    j = N -1;
    
    do{
        somma = i + j;
        printf("%d coppia : %d  %d\n",i,i,j);
        i++;
        j--;
    }while(i<=N);
    
    return 0;
}
