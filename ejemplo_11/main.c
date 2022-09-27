/* Programa: Suma y multiplicación de dos números enteros  */

#include <conio.h>
#include <stdio.h>

int main()
{
    int n1, n2, producto, suma;

    printf( "\n   Introduzca primer numero (entero): " );
    scanf( "%d", &n1 );
    printf( "\n   Introduzca segundo numero (entero): " );
    scanf( "%d", &n2 );
    suma = n1 + n2;
    producto = n1 * n2;
    printf( "\n   La suma es: %d", suma );
    printf( "\n\n   La multiplicaci%cn es: %d", 162, producto );
    return 0;
}
