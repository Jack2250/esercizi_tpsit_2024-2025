#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main(int argc, char *argv[])
{
    int p = fork();

    if (p > 0)
    { // Padre
        printf("Io sono il padre: PID= %d\n", getpid());
        printf("Mio figlio ha PID= %d \n",p);
    }
    else if (p == 0)
    { // Figlio
        printf("Io sono il figlio: PID = %d \n", getpid());
        printf("Mio padre ha PID = %d \n",getppid());
    }
    else
    { // Errore
        printf("Errore nella creazione del figlio");
    }

    return 0;
}