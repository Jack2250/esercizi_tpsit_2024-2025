/*Dato N un numero intero positivo, generare e visualizzare in ordine
crescente i numeri compresi maggiori uguali di -N e minori uguali di N. 
*/

//Autore: Redi Giacomo Data: 3/10/2024

#include <stdio.h>

int main(int argc,char *argv[])
{
    int N;
    
    do{
        printf("Inserisci un numero intero positivo\n");
        scanf("%d",&N);
    }while(N<=0);
    
    printf("I numeri compresi maggiori uguali di -N e minori uguali di N sono:\n");
    
    for(int i = -N;i<=N;i++){
        printf("%d\n",i);
    }
    
    return 0;
}
