/*
Si scriva un programma che calcoli l’elevazione a potenza del valore intero
passato come primo argomento per il secondo argomento intero.

Esempio:

$./es 2 3 
2 ^ 3 = 8
*/

// Autore: Redi Giacomo Data: 10/10/2024

#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
    int n1, n2, potenza = 1;

    if (argc != 3) {
        printf("Errore: numero di argomenti errato\n");
        return 0;
    }

    n1 = atoi(argv[1]);
    n2 = atoi(argv[2]);

    if (n1 < 0 || n2 < 0) {
        printf("Errore: i numeri devono essere maggiori o uguali a 0\n");
        return 0;
    }

    for (int i = 0; i < n2; i++) {
        potenza = n1 * potenza;
    }

    printf("%d ^ %d = %d\n", n1, n2, potenza);

    return 0;
}
