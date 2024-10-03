/*Dati due numeri interi positivi N1 e N2 con N2>N1, generare e
visualizzare in ordine crescente i numeri interi compresi
nell'intervallo chiuso [N1,N2]. 
*/

//Autore: Redi Giacomo Data: 3/10/2024

#include <stdio.h>

int main(int argc,char *argv[])
{
    int N1,N2;
    
    do{
        printf("Inserisci due numeri interi positivi\n");
        scanf("%d",&N1);
        scanf("%d",&N2);
    }while(N2<=N1 || N2<=0 || N1<=0);
    
    printf("I numeri interi compresi nell'intervallo sono:\n");
    for(int i = N1 +1;i<N2;i++){
        printf("%d\n",i);
    }
    
    return 0;
}
