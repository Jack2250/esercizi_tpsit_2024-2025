#include <stdio.h>

int main()
{
    int num;
    do{
        printf("Inserisci un numero intero positivo");
        scanf("%d",&num);
    }while(num<0);
    
    num = num +1;
    printf("Il numero successivo è: %d",num);
    
    return 0;
}
