/* Una birreria a fine serata deve conteggiare l’incasso. La cassiera accende il software gestionale il quale le chiede di inserire una alla volta le consumazioni servite.
Le consumazioni si dividono in bevande e ristorazione. La cassiera per ogni consumazione deve inserire la tipologia di consumazione e il suo importo.

Quando la cassiera inserisce la stringa “esci” il software deve mostrare a video le seguenti informazioni:
1.	La media dell’incasso delle bevande 
2.	La media dell’incasso della ristorazione
3.	Deve indicare se sono state vendute più bevande o più ristorazioni
*/

//Autore: Redi Giacomo
//Data: 1/10/2024

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int scelta, contBevande = 0, contRistorazione = 0;
    double importo, sommaBevande = 0, sommaRistorazione = 0, mediaBevande = 0, mediaRistorazione = 0;
    char esci[10];
    
    do {
        printf("Inserisci le consumazioni servite (1 per bevande, 2 per ristorazione):\n");
        scanf("%d", &scelta);
        
        printf("Inserisci l'importo della consumazione:\n");
        scanf("%lf", &importo); 
        
        if (scelta == 1) {
            sommaBevande = sommaBevande + importo;
            contBevande++;
        } else if (scelta == 2) {
            sommaRistorazione = sommaRistorazione + importo;
            contRistorazione++;
        } else {
            printf("Scelta non valida!\n");
        }
        
        printf("Inserisci 'esci' se vuoi visualizzare lo scontrino, oppure scrivi una lettera per continuare:\n");
        scanf("%s", esci);
        
    } while (strcmp(esci, "esci") != 0);  // Condizione di uscita
    
    // Calcolo delle medie solo se i contatori sono maggiori di zero
    if (contBevande > 0) {
        mediaBevande = sommaBevande / contBevande;
        printf("Media importo bevande: %.2f\n", mediaBevande);
    } else {
        printf("Non sono state vendute bevande.\n");
    }
    
    if (contRistorazione > 0) {
        mediaRistorazione = sommaRistorazione / contRistorazione;
        printf("Media importo ristorazione: %.2f\n", mediaRistorazione);
    } else {
        printf("Non sono state vendute ristorazioni.\n");
    }
    
    //Confronto quantità vendute
    if (contBevande > contRistorazione) {
        printf("Sono state vendute più bevande.\n");
    } else if (contRistorazione > contBevande) {
        printf("Sono state vendute più ristorazioni.\n");
    } else {
        printf("Sono state vendute lo stesso numero di bevande e ristorazioni.\n");
    }
    
    return 0;
}
