#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    int p1;

    if (argc != 2) {
        printf("Numero di elementi errato\n");
        exit(0);
    }

    p1 = fork();

    if (p1 == 0) {
        // Processo figlio
        printf("Il carattere è %c\n", toupper(argv[1][0]));
        exit(0);
    } else if (p1 > 0) {
        // Processo padre
        wait(&p1);
    } else {
        printf("Errore generazione processo figlio");
        exit(0);
    }

    printf("Il figlio ha terminato\n");

    return 0;
}
