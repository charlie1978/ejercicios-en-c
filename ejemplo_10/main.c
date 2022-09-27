/* Programa: Volumen de un cubo */

#include <conio.h>
#include <math.h>
#include <stdio.h>

int main()
{
    float arista, volumen;

    printf( "\n   Ingrese arista: " );
    scanf( "%f", &arista );
    volumen = pow( arista, 3 );
    printf( "\n   El volumen del cubo es: %.2f", volumen );
    return 0;
}
