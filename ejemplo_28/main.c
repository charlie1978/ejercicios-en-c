#include<stdio.h>

int main()
{
    printf("Iterador For.\n\n");

    int limSup;
    int limInf;
    printf("Imprimir en orden descendiente.\n");
    printf("Ingresa el limite superior: ");
    scanf("%d", &limSup);
    printf("Ingresa el limite inferior: ");
    scanf("%d", &limInf);
    printf("\n");
    int i;
    for ( i =limSup ; i >= limInf ; i-- )
    {
        printf("Numero: %d \n", i);
    }
    return 0;
}
