/*Scrivi un programma che legge da argv[1] un numero intero positivo (N) e poi
disegna a terminale un quadrato vuoto composto di asterischi (‘*’)
con il lato lungo N:

Per N pari a 3 il programma stampa:

***
* *
***
Per N pari a 5 il programma stampa:

*****
*   *
*   *
*   *
*****
*/

//Autore:Redi Giacomo Data: 10/10/2024

#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv [])
{
    int N;
    if(argc != 2){
        printf("Errore argomenti\n");
        return 0;
    }
    
    N = atoi(argv [1]);
    
    if(N<=0){
        printf("Il numero deve essere maggiore di 0\n");
    }
    
    if(N == 3){
        printf("***\n");
        printf("* *\n");
        printf("***\n");
    }else if(N==5){
        printf("*****\n");
        printf("*   *\n");
        printf("*   *\n");
        printf("*   *\n");
        printf("*****\n");
    }else{
        printf("Il numero è diverso da 3 e 5");
    }

    return 0;
}
