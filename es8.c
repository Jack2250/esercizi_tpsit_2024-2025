/*Progettare un algoritmo che risolve il seguente problema. Si desidera 
calcolare la somma delle radici quadrate di N valori numerici inseriti 
dall’utente, con N inserito in input. 
L’algoritmo deve stampare la somma calcolata. L’algoritmo deve terminare
con un messaggio di errore quando viene inserito un numero che non
permette di effettuare il calcolo (nel dominio dei numeri reali).*/


#include <stdio.h>
#include <math.h>

int main()
{
    int N,num;
    double somma=0,radice;
    do{
        printf("Quanti valori vuoi inserire?\n");
        scanf("%d",&N);
        
    }while(N<=0);
    
    for(int i=0;i<N;i++){
        printf("Inserisci un numero\n");
        scanf("%d",&num);
        
        if(num>=0){
            radice = sqrt (num);
            somma = somma + radice;
        }else{
            printf("Calcolo non possibile");
        }
    }
    
    printf("La somma è %.2f",somma);
    return 0;
}
