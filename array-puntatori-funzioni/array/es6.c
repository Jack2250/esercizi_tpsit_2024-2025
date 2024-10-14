/*Si scriva un programma in linguaggio C che implementi una funzione
denominata palindroma che prenda in input una stringa e restituisca
1 se la stringa è palindroma altrimenti -1

esempio:
$ ./a.out anna
$ anna è una stringa palindroma

esempio:
$ ./a.out ciao
$ ciao non è una stringa palindroma
*/

//Autore: Redi Giacomo

#include <stdio.h>
#include <string.h>

int palindroma (char parola []){
    int i,j = strlen (parola) -1;
    
    for(int i =0;i<=j;i++){
        if(parola[i] != parola[j]){
            return -1;
        }
        j--;
    }
    return 1;
}

int main(int argc, char *argv [])
{
    if(argc !=2){
        printf("Numero di elementi non valido");
        return 0;
    }
    
    if(palindroma(argv[1])==1){
        printf("La stringa è palindroma");
    }else{
        printf("La stringa non è palindroma");
    }
    
    return 0;
}
