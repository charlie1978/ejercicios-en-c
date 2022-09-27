#include<stdio.h>

int main()
{
    printf("Arreglos unidimensionales.\n\n");

    int listaEnteros[3];
    listaEnteros[0] = 3;
    listaEnteros[1] = 2;
    listaEnteros[2] = 1;

    float listaFlotantes[] = {23.4, 34.5, 45.6, 45.6, 56.7};

    char listcadena[6];
    listcadena[0] = 'C';
    listcadena[1] = 'H';
    listcadena[2] = 'A';
    listcadena[3] = 'R';
    listcadena[4] = 'L';
    listcadena[5] = 'I';
    listcadena[6] = 'E';
    printf("\nPrimer entero: \t\t %d", listaEnteros[0]);
    printf("\nUltimo flotante: \t %f", listaFlotantes[4]);
    printf("\nLista de caracteres: \t %c%c%c%c%c%c%c. \n", listcadena[0], listcadena[1], listcadena[2], listcadena[3], listcadena[4], listcadena[5], listcadena[6]);
    printf("\n");

    return 0;
}
