/*Progettare un algoritmo che risolva il seguente problema. Si richieda 
all’utente di inserire una serie di terne di dati numerici (A, B, C). 
Il programma deve terminare quando uno dei valori inseriti è minore di
zero. Si scartino le terne nelle quali i valori non sono in ordine
strettamente crescente, ovvero quelle terne per cui non valga A < B < C.
Su tutte le terne non scartate si calcoli il massimo e il minimo dei
valori inseriti. Si stampino a video tali valori massimi e minimi prima
di terminare il programma.
*/

//Autore: Redi Giacomo 
//Data: 1/10/2024

#include <stdio.h>

int main(int argc, char *argv[])
{
    int A,B,C,max,min;
    
    do{
        printf("Inserisci A\n");
        scanf("%d",&A);
        printf("Inserisci B\n");
        scanf("%d",&B);
        printf("Inserisci C\n");
        scanf("%d",&C);
        
        if(A<B && B<C){
            min = A;
            max = C;
        }
        
    }while(A>=0 && B>=0 && C>=0);
    
    printf("Il minimo è: %d \n",min);
    printf("Il massimo è: %d",max);
    
    return 0;
}
