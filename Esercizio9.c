#include <stdio.h>

int main()
{
    int numeroA, numeroB, numeroC;

    do
    {
        printf("Inserire i numeri in ordine strettamente crescente (A<B<C) e maggiori di 0 \n");
        printf("Inserisci A \n");
        scanf("%d", &numeroA);
        printf("Inserisci B \n");
        scanf("%d", &numeroB);
        printf("Inserisci C \n");
        scanf("%d", &numeroC);
    }
    while(numeroA < 0 && numeroB < 0 && numeroC < 0 && numeroA < numeroB < numeroC);

    printf("Il valore maggiore è %d \n", numeroC);
    printf("Il valore minimo è %d \n", numeroA);
    
    return 0;
}