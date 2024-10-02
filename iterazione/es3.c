/*Dato N un numero intero positivo, generare e visualizzare in ordine crescente i numeri dispari
minori o uguali a N.
*/

//Autore: Redi Giacomo Data: 3/10/2024

#include <stdio.h>

int main(int argc, char *argv[])
{
    int N,num = 1;
    
    do{
        printf("Inserisci un numero intero positivo\n");
        scanf("%d",&N);
    }while(N<=0);
    
    printf("I numeri dispari minori o uguali a N sono:\n");
    
    do{
        printf("%d\n",num);
        num = num + 2;
    }while(num<=N);
    
    return 0;
}
