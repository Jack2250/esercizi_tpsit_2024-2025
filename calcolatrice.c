#include <stdio.h>

double sommaFunzione(double n1, double n2)
{
    return n1 + n2;
}

double sottrazioneFunzione(double n1, double n2)
{
    return n1 - n2;
}

double moltiplicazioneFunzione(double n1, double n2)
{
    return n1 * n2;
}

double divisioneFunzione(double n1, double n2)
{
    return n1 / n2;
}
int main(int argc, char *argv[])
{
    int scelta = 0;
    double num1, num2, somma, sottrazione, moltiplicazione, divisione;

    do
    {
        printf("Quale operazione vuoi fare: [1] SOMMA [2] SOTTRAZIONE [3] MOLTIPLICAZIONE [4] DIVISIONE [5] SPEGNI CALCOLATRICE\n");
        scanf("%d", &scelta);

        switch (scelta)
        {
        case 1:
            printf("Inserisci il primo numero da sommare\n");
            scanf("%lf", &num1);
            printf("Inserisci il secondo numero da sommare\n");
            scanf("%lf", &num2);

            somma = sommaFunzione(num1, num2);
            printf("La somma è %lf\n", somma);
            break;

        case 2:
            printf("Inserisci il primo numero da sottrarre\n");
            scanf("%lf", &num1);
            printf("Inserisci il secondo numero da sottrarre\n");
            scanf("%lf", &num2);

            sottrazione = sottrazioneFunzione(num1, num2);
            printf("La sottrazione è %lf\n", sottrazione);
            break;

        case 3:
            printf("Inserisci il primo numero da moltiplicare\n");
            scanf("%lf", &num1);
            printf("Inserisci il secondo numero da moltiplicare\n");
            scanf("%lf", &num2);

            moltiplicazione = moltiplicazioneFunzione(num1, num2);
            printf("Il prodotto è %lf\n", moltiplicazione);
            break;

        case 4:
            printf("Inserisci il primo numero da dividere\n");
            scanf("%lf", &num1);
            printf("Inserisci il secondo numero da dividere\n");
            scanf("%lf", &num2);
            if (num2 != 0)
            {
                divisione = divisioneFunzione(num1, num2);
                printf("Il quoziente è %lf\n", divisione);
            }
            else
            {
                printf("Impossibile\n");
            }

            break;

        case 5:
            printf("Uscita ...");
            break;
        default:
            printf("Opzione sbagliata");
            break;
        }
    } while (scelta != 5);

    return 0;
}
