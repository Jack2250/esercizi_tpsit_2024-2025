#include <stdio.h>

int main()
{

    int i;
    char vNomi[20];
    FILE *nomi;
    nomi = fopen("nomi.txt", "a");

    if (nomi == NULL)
    {
        printf("Errore apertura file");
        exit(1);
    }
    else
    {
        printf("File aperto corretamente");
        for (int i = 0; i < 3; i++)
        {
            printf("Inserisci il %d nome", i + 1);
            scanf("%s", vNomi);
            fputs(vNomi, nomi);
            fputc('\n', nomi);
        }
    }
    fclose(nomi);
    return 0;
}