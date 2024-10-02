#include <stdio.h>

int main()
{
    int N,num;
    
    printf("Inserisci N intero positivo\n");
    scanf("%d",&N);
    printf("I primi %d numeri positivi sono:\n",N);
    for(int i=1;i<=N;i++){
        num = i;
        printf("%d \n",num);
    }

    return 0;
}
