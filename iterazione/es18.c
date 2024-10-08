/*Data una misura di tempo espressa in secondi S1, convertirla in ore H,
minuti M e secondi S.

Esempio: se il numero dei secondi è 1630, si dovrà ottenere, in uscita
dal programma, 0h 27m 10s.
*/

//Autore: Redi Giacomo Data: 8/10/2024

#include <stdio.h>

int main(int argc, char *argv[])
{
    int S1,ore,minuti,secondi;
    
    do{
        printf("Inserisci i secondi\n");
        scanf("%d",&S1);
    }while(S1<=0);

    minuti = S1 / 60;
    secondi = S1 % 60;
    ore = S1/3600;
    minuti = minuti%60;
    
    printf("%d h %d m %d s",ore,minuti,secondi);

    return 0;
}
