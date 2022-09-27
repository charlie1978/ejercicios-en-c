#include<stdio.h>

char textoPublico[] = {"Texto como una variable global.\n"};

void comprobar()
{
    printf("\n\n-- Imprimir desde la funcion: comprobar --\n\n");

    printf("Variable global: ");
    printf("%s", textoPublico);
    printf("Variable local: ");
}
int main()

{
    printf("Variables publicas y privadas.\n");
    printf("-- Imprimiendo desde la funcion: main --\n\n");
    char textoPrivado[] = {"Este texto es solo de la funcion.\n"};
    printf("Variable global: ");
    printf("%s", textoPublico);
    printf("Variable local: ");
    printf("%s", textoPrivado);
    comprobar();
    return 0;
}
