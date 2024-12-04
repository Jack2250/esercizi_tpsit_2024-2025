//Scrivi il codice sorgente di un programma che realizza lo schema disegnato alla lavagna.

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(int argc, char *argv[])
{
    int p1, p2, p3, p4, p5;

    p1 = fork(); // Primo fork
    if (p1 > 0) // Processo padre
    {
        printf("Sono il padre: PID = %d\n", getpid());

        p2 = fork(); // Secondo fork 
        if (p2 == 0)
        {
            printf("Primo figlio: PID = %d\n", getpid());
            printf("1 figlio: Mio padre ha PID = %d\n", getppid());

            p3 = fork(); // Terzo fork 
            if (p3 == 0)
            {
                printf("Primo nipote: PID = %d\n", getpid());
                printf("1 nipote: Mio padre ha PID = %d\n", getppid());
                exit(0); 
            }
            wait(&p3); 
            exit(0);  
        }
        wait(&p2);
    }
    else if (p1 == 0) // Secondo figlio
    {
        printf("Secondo figlio: PID = %d\n", getpid());
        printf("2 figlio: Mio padre ha PID = %d\n", getppid());

        p4 = fork(); // Quarto fork 
        if (p4 == 0)
        {
            printf("Secondo nipote: PID = %d\n", getpid());
            printf("2 nipote: Mio padre ha PID = %d\n", getppid());
            exit(0); 
        }

        p5 = fork(); // Quinto fork 
        if (p5 == 0) 
        {
            printf("Terzo nipote: PID = %d\n", getpid());
            printf("3 nipote: Mio padre ha PID = %d\n", getppid());
            exit(0); 
        }

        wait(&p4); // Secondo figlio attende il secondo nipote
        wait(&p5); // Secondo figlio attende il terzo nipote
        exit(0);
    }
    else
    {
        printf("Errore generazione processo");
    }

    wait(&p1); // Padre attende il secondo figlio
    return 0;
}
