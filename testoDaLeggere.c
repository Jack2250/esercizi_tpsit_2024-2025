/*
Scrivi il
codice sorgente di un prg che
Copia, carattere per carattere, il contenuto di un file già esistente
In un secondo file da creare.
I nomi dei file devono essere forniti in input dall’utente da tastiera
Obiettivo: usa re vettori, puntatori, file
*/

#include <stdio.h>

int main(int argc, char *argv[])
{
    FILE *fileInput, *fileOutput;
    char inputFileName[100], outputFileName[100];
    int ch;

    printf("Inserisci il nome del file di input: ");
    scanf("%s", inputFileName);
    printf("Inserisci il nome del file di output: ");
    scanf("%s", outputFileName);

    fileInput = fopen(inputFileName, "r");
    if (fileInput == NULL)
    {
        printf("Impossibile aprire il file di input %s\n", inputFileName);
        return 1;
    }

    fileOutput = fopen(outputFileName, "w");
    if (fileOutput == NULL)
    {
        printf("Impossibile aprire il file di output %s\n", outputFileName);
        fclose(fileInput);
        return 1;
    }

    // Copia del contenuto del file carattere per carattere
    while ((ch = fgetc(fileInput)) != EOF)
    {
        fputc(ch, fileOutput);
    }

    fclose(fileInput);
    fclose(fileOutput);

    printf("Copia del file completata\n");

    return 0;
}
