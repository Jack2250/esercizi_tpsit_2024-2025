/*Scrivere un programma in linguaggio C che dato un array di interi mostri
in output se l'array è pari.
Esempio:
[1,1,2,1,2,1,2,2] => è pari
[1,1,2] => dispari
[3,3,4,5] => pari
[1,2,1,2] => pari
*/

//Autore: Redi Giacomo

#include <stdio.h>

int main(int argc, char *argv [])
{
    int lunghezza,num;
    printf("Inserisci la lunghezza del vettore\n");
    scanf("%d",&lunghezza);
    
    int vettore[lunghezza];
    
    for(int i =0;i<lunghezza;i++){
        printf("Inserisci numero\n");
        scanf("%d",&num);
    }
    
    if(lunghezza % 2 == 0){
        printf("L'array è pari");
    }else{
        printf("L'array è dispari");
    }
    
    return 0;
}
