#include <stdio.h>
#include <math.h>

int main()
{
    float num1,num2,rapporto,calcolo;
    
    printf("Inserisci il primo numero reale\n");
    scanf("%f",&num1);
    printf("Inserisci il secondo numero reale\n");
    scanf("%f",&num2);
    
    if(num1>num2){
        if(num2!=0){
            rapporto = num1/num2;
            if(rapporto>=0){
                calcolo = sqrt (rapporto);
                printf("Il risultato è: %.2f",calcolo);
            }else{
                printf("Calcolo non possibile perchè il radicando è negativo");
            }
            
        }else{
            printf("Calcolo non possibile perchè il divisore è 0");
        }
    }else{
        if(num1!=0){
            rapporto = num2/num1;
            if(rapporto>=0){
                calcolo = sqrt (rapporto);
                printf("Il risultato è: %.2f",calcolo);
            }else{
                printf("Calcolo non possibile perchè il radicando è negativo");
            }
            
        }else{
            printf("Calcolo non possibile perchè il divisore è 0");
        }
    }
    
    return 0;
}
