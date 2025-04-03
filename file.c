#include <stdio.h>

int main()
{
    char car;

    printf("Inserisci un carattere da tastiera\n");
    car = getc(stdin);
    printf("Hai inserito: ");

    putc(car, stdout);
    printf("\n%c in ASCII %d", car, car);

    FILE *fp;
    fp = fopen("output.txt", "w");
    if (fp != NULL)
    {
        printf("\nApertura file avvenuta con successo");
        putc(car, fp);
        fclose(fp);
    }
    else
        printf("Impossibile aprire il file");
        
    return 0;
}