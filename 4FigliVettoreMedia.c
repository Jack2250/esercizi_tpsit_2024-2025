#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <time.h>

int main() {
    int f1, f2, f3,f4;
    int n1 = 0, n2 = 0;
    int status1, status2;
    int somma=0;
    srand(time(NULL));

    printf("Padre PID: %d\n", getpid());

    n1 = (rand() % 20) + 1;
    do {
        n2 = (rand() % 20) + 1;
    } while (n1 == n2);

    printf("N1: %d\n", n1);
    printf("N2: %d\n", n2);

    f2 = fork();
    if (f2 == 0) {
        printf("F2 PID: %d, PPID: %d\n", getpid(), getppid());
        sleep(n1);
        exit(4);
    } else if (f2 < 0) {
        perror("Errore nella creazione di F2");
        exit(1);
    }

    f3 = fork();
    if (f3 == 0) {
        printf("F3 PID: %d, PPID: %d\n", getpid(), getppid());
        sleep(n2);
        exit(10);
    } else if (f3 < 0) {
        perror("Errore nella creazione di F3");
        exit(1);
    }

    // Il padre attende la terminazione dei figli e prende i valori restituiti
    waitpid(f2, &status1, 0);
    waitpid(f3, &status2, 0);

    int dim = WEXITSTATUS(status1); // Ottiene il valore restituito da F2

    printf("F2 terminato, valore restituito: %d\n", dim);
    printf("F3 terminato, valore restituito: %d\n", WEXITSTATUS(status2));

    f1 = fork();
    if (f1 == 0) {
        printf("F1 PID: %d, PPID: %d - Genero un vettore di dimensione %d\n", getpid(), getppid(), dim);
        int vettore[dim];

        // Riempie il vettore con numeri casuali tra 1 e 10
        for (int i = 0; i < dim; i++) {
            vettore[i] = (rand() % 10) + 1;
        }

        for (int i = 0; i < dim; i++) {
            somma = somma+ vettore[i];
        }
        exit(0);
    } else if (f1 < 0) {
        perror("Errore nella creazione di F1");
        exit(1);
    }
    
    // Il padre attende la terminazione di F1
    waitpid(f1, NULL, 0);
    
    return 0;
}
