/* Programa: Saludo con nombre */

#include <conio.h>
#include <stdio.h>

int main()
{
    char nombre[20];

    printf( "Introduzca su nombre: " );
    scanf( "%s", nombre );
    printf( "Hola %s, buenos d%cas.", nombre, 161 );
    return 0;
}
