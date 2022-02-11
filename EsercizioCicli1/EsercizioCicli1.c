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
    printf("I primi %d numeri sono:\n", numero);
    for (int i = 1; i <= numero; i++) 
    {
        printf("%d \n", i);
    }
    return 0;
}