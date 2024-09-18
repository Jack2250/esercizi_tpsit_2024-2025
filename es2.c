#include <stdio.h>

int main(int argc, char *argv[])
{
    int num1,num2,prodotto,somma;
    do{
        printf("Inserisci primo numero\n");
        scanf("%d",&num1);
        printf("Inserisci secondo numero\n");
        scanf("%d",&num2);
        
        prodotto = num1 * num2;
        printf("Il prodotto è: %d \n", prodotto);
        
        somma = somma + prodotto;
        
    }while(num1 !=0 && num2 !=0);
    
    printf("la somma è: %d \n", somma);
    
    return 0;
}
