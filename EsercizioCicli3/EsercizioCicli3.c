#include <stdio.h>

int main()
{
    int numero1, numero2;
    do
    {
        printf("Inserisci due interi e positivi, con il primo minore del secondo \n");
        printf("Inserisci un numero intero positivo \n");
        scanf("%d", &numero1);
        printf("Inserisci un secondo numero intero positivo \n");
        scanf("%d", &numero2);
    }
    while(numero1 < 0 || numero2 < 0 || numero2 < numero1);
    printf("I numeri interi compresi nell'intervallo tra %d e %d sono: \n", numero1, numero2);
    for (int i = numero1; i <= numero2; i++)
    {
        printf("%d \n", i);
    }
    return 0;
}