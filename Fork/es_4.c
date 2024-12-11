/*Scriva un programma in linguaggio C che dato un array prestabilito, prenda in input da
riga di comando un numero e lo ricerchi all'interno dell'array.
La ricerca deve essere demandata ad un processo figlio e deve essere
implementata attraverso un'apposita funzione di nome "ricerca".
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <string.h>

int ricerca (int array[], int numero, int lunghezza){
    for(int i = 0;i < lunghezza ;i++){
        if(array[i] == numero){
            return i;
        }
    }
    return -1;
}

int main(int argc, char *argv[])
{
    int array [4] = {1,20,1,2};
    int numero = atoi(argv[1]);
    int p1;

    if (argc != 2) {
        printf("Numero di argomenti errato\n");
        exit(0);
    }

    p1 = fork();

    if (p1 == 0) {
        // Processo figlio
        int posizione = ricerca(array,numero,4);
        if(posizione > -1){
            printf("Il numero %d è presente nella posizione %d\n ",numero,posizione);
        }else{
            printf("Il numero %d non è presente nell'array",numero);
        }
        
        exit(0);
    } else if (p1 > 0) {
        // Processo padre
        wait(&p1);
    } else {
        printf("Errore generazione processo figlio");
        exit(0);
    }
    
    return 0;
}
