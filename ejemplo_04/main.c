#include<stdio.h>

int main()
{   // Constantes enteras y float con asignacion de valores
    printf("Operadores Aritmeticos P2 \n\n");
    const int valorIntA , valorIntB ;
    const float valorFloatA = 3.141569, valorFloatB ;
    // Variables
    int resInt;
    float resFloat;
    printf("Digita un numero entero: " );
    scanf("%i", &valorIntA);
    printf("Digita un numero entero: " );
    scanf("%i", &valorIntB);
    printf("Digita un numero flotante: " );
    scanf("%f", &valorFloatB );
    printf(" Numeros enteros %i %i ",valorIntA, valorIntB );
    printf("\n Numeros flotantes %f %f \n ",valorFloatA, valorFloatB );
    resInt = valorIntA + valorFloatA;
    printf(valorIntA,valorFloatA);
    printf("- Suma:\t\t %d \n", resInt);
    resFloat = (valorIntB * 2) - valorFloatB;
    printf(" - Resta:\t\t %f \n", resFloat);
    resInt = valorIntA * valorIntB;
    printf(" - Multiplicacion:\t %d \n", resInt);
    resFloat = valorFloatA / valorFloatB;
    printf(" - Division float:\t %f \n", resFloat);
    return 0;
}
