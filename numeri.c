/*Leggi il file numeri.txt già esistente, composto da una sequenza di numeridi una cifra separati da uno spazio.
Scrivi due file, pari.txt e dispari.txt 
nei quali inserisci, rispettivamente, i numeri letti a seconda del loro valore pari o dispari.*/

#include <stdio.h>

int main() {
    FILE *fileInput, *filePari, *fileDispari;
    int ch;

    fileInput = fopen("numeri.txt", "r");
    filePari = fopen("pari.txt", "w");
    fileDispari = fopen("dispari.txt", "w");

    if (fileInput == NULL || filePari == NULL || fileDispari == NULL) {
        printf("Errore nell'apertura di un file");
        return 1;
    }

    while ((ch = fgetc(fileInput)) != EOF) {
        if (ch >= '0' && ch <= '9') { // se è una cifra
            int num = ch - '0'; //Converte una cifra scritta come carattere nel suo valore numerico.
            if (num % 2 == 0) {
                fputc(ch, filePari);
                fputc(' ', filePari); // spazio dopo il numero
            } else {
                fputc(ch, fileDispari);
                fputc(' ', fileDispari);
            }
        }
    }

    fclose(fileInput);
    fclose(filePari);
    fclose(fileDispari);

    printf("Numeri separati correttamente.\n");
    return 0;
}
