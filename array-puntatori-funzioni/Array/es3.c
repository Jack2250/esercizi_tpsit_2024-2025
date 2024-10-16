/*Chiedere in input 10 interi e inserirli in un array.
Stampare a video prima tutti i numeri pari e 
in seguito tutti i numeri dispari

Esempio: 
input 5 6 9 11 12 13 14 10 8 21
output
6 12 14 10 8
5 9 11 13 21
*/

//Autore:Redi Giacomo Data: 10/10/2024

#include <stdio.h>

int main(int argc, char *argv [])
{
    int lunghezza = 10;
    int array [lunghezza];
    
    for(int i = 0; i<lunghezza;i++){
        printf("Inserisci un numero\n");
        scanf("%d",&array[i]);
    }
    

    for(int i = 0; i<lunghezza;i++){
        if(array[i] % 2 == 0){
            printf("%d ",array[i]);
        }
    }
    
    printf("\n");
    
    for(int i = 0; i<lunghezza;i++){
        if(array[i] % 2 == 1){
            printf("%d ",array[i]);
        }
    }
    return 0;
}
