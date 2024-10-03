/*Dato N un numero intero positivo, generare e visualizzare in ordine
decrescente i primi N numeri interi positivi. 
*/

//Autore: Redi Giacomo Data:

#include <stdio.h>

int main(int argc,char *argv[])
{
    int N,num;
    
    do{
        printf("Inserisci un numero intero positivo\n");
        scanf("%d",&N);
    }while(N<=0);
    
    num = N;
    printf("In ordinedecrescente i primi N numeri interi positivi sono:\n");
    
    do{
        printf("%d\n",num);
        num = num -1;
    }while(num>0);
    
    return 0;
}
