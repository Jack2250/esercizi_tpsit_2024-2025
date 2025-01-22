#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <time.h>

void generaRandom(int array[], int lunghezza) {
    for (int i = 0; i < lunghezza; i++) {
        array[i] = rand() % 6;
    }
}

int main() {

    int array[3];
    int p2, p3, p4, p5, p6;

    generaRandom(array, 3);

    printf("P1: mio PID= %d, genero il vettore [%d, %d, %d]\n", getpid(), array[0], array[1], array[2]);

    // Genera il processo P2
    p2 = fork();
    if (p2 == 0) {
        printf("P2: mio PID=%d, mio padre P1 ha PID=%d\n", getpid(), getppid());

        p4 = fork();
        if (p4 == 0) {
            printf("P4: mio PID=%d, mio padre P2 ha PID=%d\n", getpid(), getppid());
            int prodotto = array[0] * array[1] * array[2];
            printf("P4: il prodotto delle componenti del vettore = %d\n", prodotto);
            exit(0);
        }

        wait(&p4);

        p5 = fork();
        if (p5 == 0) {
            printf("P5: mio PID=%d, mio padre P2 ha PID=%d\n", getpid(), getppid());
            double media = (array[0] + array[1] + array[2]) / 3.0;
            printf("P5: la media delle componenti del vettore V[] = %.2f\n", media);
            exit(0);
        }

        // Aspetta la terminazione di P5
        wait(&p5);
        exit(0);
    }

    p3 = fork();
    if (p3 == 0) {
        printf("P3: mio PID=%d, mio padre P1 ha PID=%d\n", getpid(), getppid());
        printf("P3: le componenti del vettore [%d, %d, %d]\n", array[0], array[1], array[2]);

        p6 = fork();
        if (p6 == 0) {
            printf("P6: mio PID=%d, mio padre P3 ha PID=%d\n", getpid(), getppid());
            int somma = array[0] + array[1] + array[2];
            printf("P6: la somma delle componenti del vettore V[] = %d\n", somma);
            exit(somma);
        }

        // Aspetta la terminazione di P6 e ottiene il risultato
        int status;
        wait(&status);
        int risultato = WEXITSTATUS(status);
        printf("P3: il risultato restituito da P6 = %d\n", risultato);
        exit(0);
    }

    // Aspetta la terminazione di P2 e P3
    wait(&p2);
    wait(&p3);

    return 0;
}
