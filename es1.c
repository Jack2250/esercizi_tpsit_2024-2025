#include <stdio.h>

int main(int argc, char *argv[])
{
    int num1,num2;
    float rapporto;
    
    do{
        printf("Inserisci il primo numero\n");
        scanf("%d",&num1);
        printf("Inserisci il secondo numero\n");
        scanf("%d",&num2);
    
        if(num1>num2){
            rapporto = (double)num2/(double)num1;
        }else{
            rapporto = (double)num1/(double)num2;
        }
    
        printf("Il rapporto tra le coppie di numeri è:%f \n", rapporto);

        }while(num1 != 0 && num2!=0);
    
    return 0;
}
