#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define lungh 81;
int main()
{
    FILE *puntaFile;
    char nome[FILENAME_MAX], buffer[lungh];
    int nr = 0, nc = 0;
    puntaFile = fopen("testo.txt", "r");
    if (puntaFile == NULL)
    {
        printf("Errore nell'apertura del file");
        exit(1);
    }
    else
    {
        while (fgets(buffer, lungh, puntaFile) != NULL)
        {
            nr++;

            nc = nc + strlen(buffer) - 1;
        }
    }
    fclose(puntaFile);
}