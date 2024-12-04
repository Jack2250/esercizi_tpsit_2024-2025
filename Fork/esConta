/* Scrivi il codice sorgente di un programma che permette al processo padre di generare un processo figlio:
_ sia padre che figlio visualizzano il proprio PID e il PID del proprio parente
_ padre conta da 0 a 19
_ figlio conta da 0 a 9
Manda in esecuzione più volte e descrivi il comportamento del programma.
*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(int argc, char *argv[])
{
    int p;

    p = fork();
    if (p > 0) 
    {
        printf("Sono il padre: PID = %d\n", getpid());
        printf("Il pid di mio figlio è: PID = %d\n", p);
        
        for(int i =0;i<=19;i++){
            printf("Padre: %d\n",i);
        }
    }
    else if (p == 0) 
    {
        printf("Sono il figlio: PID = %d\n", getpid());
        printf("Il pid di mio padre è: PID = %d\n", getppid());
        
        for(int i =0;i<=9;i++){
            printf("Figlio: %d\n",i);
        }
        exit(0);
    }
    else
    {
        printf("Errore generazione processo");
    }

    wait(&p);   
    return 0;
}
