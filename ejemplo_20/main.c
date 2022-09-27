#include <stdio.h>
#include <conio.h>
#define Limite_Inferior 5
#define Limite_Superior 15
int main()
    {
    float Numero=0; 
    printf("Introduzca un numero: ");
    scanf("%f", &Numero);
    if (Numero >= Limite_Inferior)
        {
        if (Numero <= Limite_Superior)
            {
            printf("Esta dentro del intervalo");
            }
        else
            printf("Supera el límite maximo ");
        }
    else
        printf("No alcanza el limite minimo");
return 0;
}
