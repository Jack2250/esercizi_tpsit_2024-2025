#include <stdio.h>

int main(int argc, char *argv[])
{
    int a,b,c,contPari=0,contDispari=0,contNull=0,differenza;
    
    do{
        printf("Inserisci a\n");
        scanf("%d",&a);
        printf("Inserisci b\n");
        scanf("%d",&b);
        printf("Inserisci c\n");
        scanf("%d",&c);
        
        differenza = a-b;
        if(differenza % 2 == 0){
            contPari++;
        }else if(differenza == 0){
            contNull++;
        }else{
            contDispari++;
        }
    }while(a+b<c);
    
    printf("Risultati pari %d\n",contPari);
    printf("Risultati dispari %d\n",contDispari);
    printf("Risultati nulli %d\n",contNull);

    return 0;
}
