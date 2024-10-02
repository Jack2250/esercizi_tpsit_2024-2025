/*Dato N un numero intero positivo, generare e visualizzare in ordine crescente i primi N numeri
interi positivi.
*/

//Autore: Redi Giacomo Data:3/10/2024

#include <stdio.h>

int main(int argc,char *argv[])
{
    int N,num;
    
    do{
        printf("Inserisci un numero intero positivo\n");
        scanf("%d",&N);
    }while(N<=0);
    
    printf("I primi %d numeri positivi sono:\n",N);
    
    for(int i=1;i<=N;i++){
        num = i;
        printf("%d \n",num);
    }

    return 0;
}
