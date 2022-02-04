#include <stdio.h>
#include <math.h>

int main()
{
    int nNumeri, numero, contatore = 0;
    double somma = 0;
    
    do
    {
        printf("Inserisci numero totale di valori da inserire (deve essere positivo) \n");
        scanf("%d", &nNumeri);
    }
    while(nNumeri < 0);

    do
    {
        printf("Inserisci un valore > 0 \n");
        scanf("%d", &numero);

        if(numero > 0)
        {
            somma = sqrt(numero) + somma;
            contatore++;
        }
    }
    while(nNumeri != contatore && numero > 0);

    if(numero < 0)
    {
        printf("Il programma è terminato perchè è impossibile effettuare la radice quadrata di un numero negativo \n");
    }
    printf("La somma totale è %f \n", somma);
    return 0;
}