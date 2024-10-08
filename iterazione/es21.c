/*Dato un numero intero positivo N verificare se N è un numero primo.
*/

//Autore: Redi Giacomo Data: 8/10/2024

#include <stdio.h>

int main(int argc, char *argv[])
{
    int n,i=0,resto=0;
    
    do{
        printf("Inserisci un numero intero positivo\n");
        scanf("%d",&n);
    }while(n<=0);

    i = n - 1;
    do{
        resto = n % i;
        if(resto == 0){
            printf("Il numero non è primo\n");
            return 0;
        }
        i--;
    }while(i>1);
    
    printf("Il numero è primo");

    return 0;
}
