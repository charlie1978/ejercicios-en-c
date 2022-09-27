#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcion;

    printf("Te encuentras en un camino tres frutas.");
    printf("\n Escribe 1 si quieres probar frutas dulces.");
    printf("\n Escribe 2 si quieres probar frutas acidas.");
    printf("\n Escribe 3 si no quieres frutas");
    printf("\n\n");
    printf(" escribe tu opcion: \n");
    scanf("%i", &opcion);

    switch(opcion)
    {
        case 1:
            printf("\n Las frutas dulces te llenan el corazon de alegria");
            printf("\n\n");
            break;
        case 2:
            printf("\n Las frutas acidas son ricas en vitamina C !");
            printf("\n\n");
            break;
        case 3:
            printf("\n Si no comes frutas y verduras no tendras una alimentacion balanceada.!");
            printf("\n\n");
            break;

        default:
            printf("\n Al no elegir una opcion valida te quedas vagando eternamente en tus suenos");
            printf("\n\n");
            break;
    }
    printf("\n No olvides cepillar tus dientes todos los dias \n");
}
