/*Dati due numeri interi positivi N1 e N2, verificare se N1 è il quadrato 
di N2.
*/

//Autore: Redi Giacomo Data: 8/10/2024

#include <stdio.h>

int main(int argc, char *argv[])
{
    int N1,N2,quadrato;
    
    do{
        printf("Inserisci due numeri interi positivi\n");
        scanf("%d",&N1);
        scanf("%d",&N2);
    }while(N1<=0 || N2<=0);

    quadrato = N2*N2;
    if (quadrato == N1){
        printf("%d è il quadrato di %d",N1,N2);
    }else{
        printf("%d non è il quadrato di %d",N1,N2);
    }
    
    return 0;
}
