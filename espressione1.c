/*Scrivi il codice sorgente di un prg in cui
   il processo padre P genera due processi figli: F1 e F2.
   F1 somma 1+2;
   F2 somma 3+4.
   Entrambi restituiscono al processo padre P il risultato ottenuto dall'operazione compiuta.
   Padre P somma tra loro i risultati che i due figli gli hanno restituito e
   visalizza il valore di tale somma.

   La prima cosa che ciascun processo deve fare, appena genera un processo figlio,
   Ã¨ dichiararsi nel modo seguente:
   "P: mio PID=..., mio figlio F1 ha PID=...
   La prima cosa che ciascun processo figlio deve fare appena Ã¨ stato generato,
   Ã¨ dichiararsi nel modo seguente:
   "F1: mio PID=..., mio padre P ha PID=..."

   Ogni volta che un processo visualizza qualcosa sullo schermo deve dichiararsi nel modo seguente:
   "P: quello che P deve visualizzare"
*/

//Autore: Giacomo Redi
//Data: 6/02/2025

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main() {
    int p1, p2;
    int status1, status2;
    
    printf("P: mio PID=%d\n", getpid());
    
    p1 = fork();
    if (p1<0) {
        perror("Errore generazione processo F1");
        exit(1);
    }
    
    if (p1 == 0) {
        printf("F1: mio PID=%d, mio padre P ha PID=%d\n", getpid(), getppid());
        exit(1 + 2);  // Restituisce il risultato della somma
    }
    
    printf("P: mio PID=%d, mio figlio F1 ha PID=%d\n", getpid(), p1);
    
    p2 = fork();
    if (p2<0) {
        perror("Errore generazione processo F2");
        exit(1);
    }
    
    if (p2 == 0) {
        printf("F2: mio PID=%d, mio padre P ha PID=%d\n", getpid(), getppid());
        exit(3 + 4);
    }
    
    printf("P: mio PID=%d, mio figlio F2 ha PID=%d\n", getpid(), pid_f2);
    
    // Attende la terminazione dei figli e raccoglie i risultati
    waitpid(p1, &status1, 0);
    waitpid(p2, &status2, 0);
    
    if (WIFEXITED(status1) && WIFEXITED(status2)) {
        int risultatoF1 = WEXITSTATUS(status1);
        int risultatoF2 = WEXITSTATUS(status2);
        int sommaTotale = risultatoF1 + risultatoF2;
        printf("P: somma totale dei risultati ricevuti = %d\n", sommaTotale);
    }
    
    return 0;
}
