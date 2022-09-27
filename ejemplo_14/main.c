/* Programa: Número mayor de tres números introducidos */

#include <conio.h>
#include <stdio.h>

int main()
{
    int n1, n2, n3;
    printf( "\n   Introduzca el primer numero (entero): ", 163 );
    scanf( "%d", &n1 );
    printf( "\n   Introduzca el segundo numero (entero): ", 163 );
    scanf( "%d", &n2 );
    printf( "\n   Introduzca el tercer numero (entero): ", 163 );
    scanf( "%d", &n3 );
    if ( n1 >= n2 && n1 >= n3 )
        printf( "\n   %d es el mayor.", n1 );
    else
        if ( n2 > n3 )
            printf( "\n   %d es el mayor.", n2 );
        else
            printf( "\n   %d es el mayor.", n3 );
    return 0;
}
