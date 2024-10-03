/*Dato N un numero intero positivo maggiore di 1, generare e visualizzare
il numero precedente. 
*/

//Autore: Redi Giacomo Data: 3/10/2024

#include <stdio.h>

int main(int argc,char *argv[])
{
    int N,num;
    
    do{
        printf("Inserisci un numero intero positivo maggiore di 1\n");
        scanf("%d",&N);
    }while(N<=1);
    
    num = N -1;
    printf("Il numero precedente è: %d",num);
    
    return 0;
}
