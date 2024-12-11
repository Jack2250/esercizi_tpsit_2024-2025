/*Data una stringa letta da riga di comando si scriva un programma in linguaggio C
che istanzi un processo figlio il quale converta la stringa da minuscolo a maiuscolo

esempio di esecuzione:
$./a.out ciao
la stringa in maiuscolo è CIAO
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <string.h>

void converti (char c []){
    for(int i = 0;i < strlen(c);i++){
        c[i] = toupper(c[i]);
    }
}

int main(int argc, char *argv[])
{
    int p1;

    if (argc != 2) {
        printf("Numero di argomenti errato\n");
        exit(0);
    }

    p1 = fork();

    if (p1 == 0) {
        // Processo figlio
        converti(argv[1]);
        printf("La stringa in maiuscolo è: %s",argv[1]);
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
