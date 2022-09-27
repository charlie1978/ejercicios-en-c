/* Programa: Número par o impar */

#include <conio.h>
#include <stdio.h>

int main()
{
    int numero;

    printf( "\n   Introduzca un numero entero: ", 163 );
    scanf( "%d", &numero );
    if ( numero % 2 == 0 )
        printf( "\n EL NUMERO ES PAR" );
    else
        printf( "\n EL NUMERO ES IMPAR" );
     return 0;
}
