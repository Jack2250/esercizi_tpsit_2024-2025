/*Scrivi il codice sorgente di un prg in cui
   il processo padre P genera un processo figlio F,
   ne recupera il valore di ritorno (25) e
   verifica se la terminazione Ã¨ stata volontaria o meno.

   La prima cosa che ciascun processo deve fare, appena genera un processo figlio,
   Ã¨ dichiararsi nel modo seguente:
   "P: mio PID=..., mio figlio F ha PID=...
   La prima cosa che ciascun processo figlio deve fare appena Ã¨ stato generato,
   Ã¨ dichiararsi nel modo seguente:
   "F: mio PID=..., mio padre P ha PID=..."

   Ogni volta che un processo visualizza qualcosa sullo schermo deve dichiararsi nel modo seguente:
   "P: quello che P deve visualizzare"
   "F: quello che F deve visualizzare*/

//Autore: Giacomo Redi
//Data: 30/01/2025

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main()
{
    int f, status;
    
    f = fork();
    
    if(f == 0)
    {
    printf( "F: mio PID= %d, mio padre P ha PID= %d\n",getpid(),getppid());
        exit(25);
    }
    else if(f < 0)
    {
        printf("Errore generazione processo figlio\n");
        exit(1);
    }
    
    printf("P: mio PID= %d, mio figlio F ha PID= %d\n",getpid(),f);
    waitpid(f, &status, 0);
    
    if (WIFEXITED(status)) 
    {
        int risultato = WEXITSTATUS(status);
        printf("F: %d",risultato);
    }
    return 0;
}
