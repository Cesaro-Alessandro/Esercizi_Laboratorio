#include <stdio.h>

int main()
{
    int numero, i;
    do
    {
        printf("Inserisci un numero intero positivo \n");
        scanf("%d", &numero);
    }
    while(numero < 0);
    printf("I numeri minori o uguali del valore inserito e dispari sono: \n");
    for (int i = 1; i <= numero; i++)
    {
        if (i <= numero && i%2 != 0)
        {
            printf("%d \n", i);
        }
    }
    return 0;
}