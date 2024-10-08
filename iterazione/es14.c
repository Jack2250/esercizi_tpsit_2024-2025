/*Dati due numeri interi positivi N1 ed N2 calcolare, mediante la somma
ripetuta, il prodotto dei due numeri e visualizzarli.
*/

//Autore: Redi Giacomo Data: 8/10/2024

#include <stdio.h>

int main(int argc, char *argv[])
{
    int N1,N2,prodotto=0,i=0;
    
    do{
        printf("Inserisci due numeri interi positivi\n");
        scanf("%d",&N1);
        scanf("%d",&N2);
    }while(N1<=0 || N2<=0);

    do{
        prodotto = prodotto + N1;
        i++;
    }while(i<N2);
    
    printf("Il prodotto dei numeri è: %d",prodotto);
    
    return 0;
}
