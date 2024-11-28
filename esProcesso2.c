#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    int p1, p2, p3, p4, p5;

    p1 = fork();
    if (p1 > 0) // Padre
    {
        printf("Sono il padre: PID = %d\n", getpid());

        p2 = fork();
        if (p2 == 0)
        {
            printf("Primo figlio: PID = %d\n", getpid());
            printf("1 figlio: Mio padre ha PID = %d\n", getppid());

            p3 = fork();

            if (p3 == 0)
            {
                printf("Primo nipote: PID = %d\n", getpid());
                printf("1 nipote: Mio padre ha PID = %d\n", getppid());
            }
        }
    }
    else if (p1 == 0)
    {

        printf("Secondo figlio: PID = %d\n", getpid());
        printf("2 figlio: Mio padre ha PID = %d\n", getppid());

        p4 = fork();
        if (p4 == 0)
        {
            printf("Secondo nipote: PID = %d\n", getpid());
            printf("2 nipote: Mio padre ha PID = %d\n", getppid());
        }
    }
    else
    {
        printf("Errore generazione");
    }

    return 0;
}