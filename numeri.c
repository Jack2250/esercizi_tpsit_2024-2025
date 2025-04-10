#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *inputFile, *pariFile, *dispariFile;
    int numero;

    inputFile = fopen("numeri.txt", "r");
    if (inputFile == NULL)
    {
        printf("Errore nell'aprire il file numeri.txt\n");
        return 1;
    }

    pariFile = fopen("pari.txt", "w");
    if (pariFile == NULL)
    {
        printf("Errore nell'aprire il file pari.txt\n");
        fclose(inputFile);
        return 1;
    }

    dispariFile = fopen("dispari.txt", "w");
    if (dispariFile == NULL)
    {
        printf("Errore nell'aprire il file dispari.txt\n");
        fclose(inputFile);
        fclose(pariFile);
        return 1;
    }

    // Leggo i numeri dal file e li divido tra pari e dispari
    while (fscanf(inputFile, "%d", &numero) != EOF)
    {
        if (numero % 2 == 0)
        {
            fprintf(pariFile, "%d ", numero);
        }
        else
        {
            fprintf(dispariFile, "%d ", numero);
        }
    }

    fclose(inputFile);
    fclose(pariFile);
    fclose(dispariFile);

    printf("Operazione completata!\n");
    return 0;
}
