/*Dato N un numero intero positivo, generare e visualizzare il numero 
successivo.
*/

//Autore: Redi Giacomo Data:3/10/2024

#include <stdio.h>

int main(int argc, char *argv[])
{
    int num,successivo;
    do{
        printf("Inserisci un numero intero positivo\n");
        scanf("%d",&num);
    }while(num<=0);
    
    successivo = num +1;
    printf("Il numero successivo è: %d",successivo);
    
    return 0;
}
