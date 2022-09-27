#include <stdio.h>
#include <stdlib.h>

int main()
{
    int filas;
    printf ("ingrese numero de filas: ");
    scanf(" %i",&filas);
    while(filas > 0)
    {
        printf(" \n # # ");
        filas--;
    }


    return 0;
}
