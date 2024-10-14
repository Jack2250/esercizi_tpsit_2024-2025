/*Chiedere in input 5 interi e inserirli in un array.
Stampare a video l'array al contrario.
Esempio: 
input 5 6 9 11 12
output 12 11 9 6 5
*/

//Autore:Redi Giacomo Data: 10/10/2024

#include <stdio.h>

int main(int argc, char *argv [])
{
    int lunghezza = 5;
    int array [lunghezza];
    
    for(int i = 0; i<lunghezza;i++){
        printf("Inserisci un numero\n");
        scanf("%d",&array[i]);
    }
    
    printf("L'array al contrario contiene questi numeri :\n");
    
    for(int i =lunghezza-1; i>=0;i--){
        printf("%d\n",array[i]);
    }
    return 0;
}
