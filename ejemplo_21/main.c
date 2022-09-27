#include <stdio.h>
#include <conio.h>
int main()
{
    printf("Identifico si un numero es divisor de otro \n : ");
    int Numero1=0, Numero2=0; 
    printf("Ingrese el primer numero: ");
    scanf("%i", &Numero1); 
    printf("Ingrese el segundo numero: ");
    scanf("%i", &Numero2); 
    if (Numero1 > Numero2)
        {
        if (Numero1%Numero2 == 0)
            {
            printf("Es divisor %i de %i", Numero1,Numero2);
            }
        else
        printf("%i no es divisor de %i ", Numero2,Numero1);
    }
    else
    printf("No es divisor porque es mayor %i",Numero2);
return 0;
}
