/*Progettare un algoritmo che effettui la lettura da tastiera di una serie di valori numerici. Il
programma termina quando il dato immesso è pari a zero. Calcolare e stampare la media dei valori
inseriri. Inoltre, stampare la sequenza di valori in ordine inverso rispetto a quello di inserimento. Un
valore dovrà essere stampato soltanto se maggiore della media calcolata.
*/

//Autore: Redi Giacomo

#include <stdio.h>
#define MAX 100
int main(int argc, char *argv [])
{
    int i=0,array[MAX],n,somma=0;
    double media;
    do{
        printf("Inserisci un numero\n");
        scanf("%d",&n);
        
        somma = somma + n;
        
        array[i] = n;
        
        i++;
        
    }while(n!=0 && i<MAX);
    
    media = somma / i;
    
    printf("La media è:  %f",media);
    
    for(int i =0;i<MAX;i++){
        if(array[i] > media){
            printf("\n Il valore %d è maggiore della media: %f",array[i],media);
        }
    }
    
    return 0;
}
