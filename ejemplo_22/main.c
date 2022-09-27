#include <stdio.h>

int main()
{

   int dividendo, divisor;

   printf( "Ingrese dividendo (entero): " );
   scanf( "%d", &dividendo );
   printf( "Ingrese divisor (entero): " );
   scanf( "%d", &divisor );
   printf( "%d div %d = %d ( Restan = %d )", dividendo, divisor,
           dividendo / divisor, dividendo % divisor );

   return 0;
}
