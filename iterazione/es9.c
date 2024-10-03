/*Dati due numeri interi e positivi N1 e N2 con N2>N1, generare e
visualizzare in ordine decrescente i numeri compresi tra N1 e N2. 
*/

//Autore: Redi Giacomo Data:

#include <stdio.h>

int main(int argc,char *argv[])
{
    int N1,N2,num;
    
    do{
        printf("Inserisci due numeri interi positivi\n");
        scanf("%d",&N1);
        scanf("%d",&N2);
    }while(N2<=N1 || N2<=0 || N1<=0);
    
    printf("I numeri interi compresi nell'intervallo sono:\n");
    
    num = N2 - 1;
    
    do{
        printf("%d\n",num);
        num = num -1;
    }while(num>N1);
    
    return 0;
}
