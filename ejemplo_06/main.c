#include<stdio.h>

int main()
{
    printf("Operadores de asignacion");
    int valor;
    // = : Se asigna el numero 10
    valor = 11;
    printf("Resultado (=):\t %d \n", valor);
    valor += 1;
    printf("Resultado (+=):\t %d \n", valor);
    valor -= 2;
    printf("Resultado (-=):\t %d \n", valor);
    valor *= 4;
    printf("Resultado (*=):\t %d \n", valor);
    valor /= 5;
    printf("Resultado (/=):\t %d \n", valor);
    valor %= 6;
    printf("Resultado (%=):\t %d \n", valor);
    return 0;
}
