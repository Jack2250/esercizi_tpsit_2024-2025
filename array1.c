/*Popolare un array di interi di dimensione 4, stamparne a video il
contenuto.
*/

//Autore:Redi Giacomo Data: 10/10/2024

#include <stdio.h>

int main(int argc, char *argv [])
{
    int lunghezza = 4;
    int array [4];
    
    for(int i = 0; i<lunghezza;i++){
        printf("Inserisci un numero\n");
        scanf("%d",&array[i]);
    }
    
    printf("L'array contiene questi numeri :\n");
    
    for(int i = 0; i<lunghezza;i++){
        printf("%d\n",array[i]);
    }
    return 0;
}
