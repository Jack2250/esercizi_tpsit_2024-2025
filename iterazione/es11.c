/*Dato N un numero intero positivo, calcolare e visualizzare la somma dei
primi N numeri dispari. 
*/

//Autore: Redi Giacomo Data:

#include <stdio.h>

int main(int argc,char *argv[])
{
    int N,somma = 0;
    
    do{
        printf("Inserisci un numero intero positivo\n");
        scanf("%d",&N);
    }while(N<=0);
    
    printf("la somma dei primi N numeri interi dispari sono:\n");
    
    for(int i=1;i<=N;i++){
        somma = somma + i;
        i = i+1;
    }
    
    printf("%d\n",somma);
    
    return 0;
}
