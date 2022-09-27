#include<stdio.h>

int main()
{
    printf("Iterador Do - While.\n\n");
    printf("No interrumpe hasta identificar la letra oculta.\n\n");
    char respuesta = 'p';
    char valor;

    do
    {
       printf("Ingresa una letra: ");
       scanf(" %c", &valor);
    }
    while(valor != respuesta);

    printf("\ncoinciden: %c == %c \n", valor, respuesta);

    return 0;
}
