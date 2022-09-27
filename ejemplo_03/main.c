// Programa que solicita dos numeros y una lñetra, luego las muestra 

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int integerA ;
    float floatA ;
    char letterA ;
    double doubleA ;

    printf("Digita un numero entero: " );
    scanf("%i", &integerA);
    printf("Digita un numero flotante: " );
    scanf("%f", &floatA);
    printf("Digita una letra: " );
    scanf(" %c", &letterA);
    printf("El numero que ingresaste es: %i \n", integerA );
    printf("El numero que flotante es: %f \n", floatA );
    printf("la letra que ingresaste es: %c \n", letterA );

    return 0;
}
