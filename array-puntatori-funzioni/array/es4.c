/*Si legga da riga di comando una stringa e la si mostri in output
invertita. Per fare l'inversione si implementi la funzione inverti.

Esempio:
$./a.out ciao
oaic
*/

//Autore: Redi Giacomo

#include <stdio.h>
#include <string.h>

void inverti (char stringa []){
    char temp;
    int i, j = strlen(stringa) - 1;
    for(int i =0;i<j;i++){
        temp = stringa[i];
        stringa[i] = stringa[j];
        stringa[j]= temp;
        
        j--;
    }
}

int main(int argc, char *argv [])
{
    if(argc !=2){
        printf("Numero di elementi non valido");
        return 0;
    }
    
    inverti(argv[1]);
    printf("La stringa invertita è: %s",argv[1]);
    
    return 0;
}
