#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[])
{
    float num1,num2,rapporto,calcolo;
    
    do{
        printf("Inserisci il primo numero reale\n");
        scanf("%f",&num1);
        printf("Inserisci il secondo numero reale\n");
        scanf("%f",&num2);
        
        if(num1>num2){
            if(num2!=0){
                rapporto = num1/num2;
                calcolo = sqrt (rapporto);
                printf("Il risultato è: %.2f\n",calcolo);
        }else{
            printf("Calcolo non possibile perchè il divisore è 0\n");
        }
    }else{
        if(num1!=0){
            rapporto = num2/num1;
            calcolo = sqrt (rapporto);
            printf("Il risultato è: %.2f\n",calcolo);
        }else{
            printf("Calcolo non possibile perchè il divisore è 0\n");
        }
    }
    }while(rapporto>=0);
    
    printf("Calcolo non possibile perchè il radicando è negativo");
    
    return 0;
}
