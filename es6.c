#include <stdio.h>

int main(int argc, char *argv[])
{
    int a,b,num,somma=0,valoriLetti=0;
    double media=0;
    
    do{
        printf("Inserisci a\n");
        scanf("%d",&a);
        printf("Inserisci b\n");
        scanf("%d",&b);
    }while(a>b);
    
    do{
        printf("Inserisci un numero\n");
        scanf("%d",&num);
        if(num>=a && num<=b){
            somma = somma + num;
            valoriLetti++;
        }else{
            printf("Il numero non rientra nell'intervallo di [a,b]\n");
        }
    }while(num>=a && num<=b);
    
    media = (double)somma/(double)valoriLetti;
    printf("La media dei numeri inseriti è %.2f",media);
    
    return 0;
}
