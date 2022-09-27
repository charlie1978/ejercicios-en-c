#include<stdio.h>

int main()
{
    printf("Switch. \n\n");

    int opcion;

    printf("Ingresa la opcion: ");
    scanf("%d", &opcion);

    switch(opcion)
    {
        case 1:
            printf("\n Elegiste el uno.\n\n");
            break;
        case 2:
            printf("\n Elegiste el dos.\n\n");
            break;
        case 3:
            printf("\n Elegiste el tres.\n\n");
            break;
        case 4:
            printf("\n Elegiste el cuatro.\n\n");
            break;
        case 5:
            printf("\n Elegiste el cinco.\n\n");
            break;
        case 6:
            printf("\n Elegiste el seis.\n\n");
            break;
        case 7:
            printf("\n Elegiste el siete.\n\n");
            break;
        case 8:
            printf("\n Elegiste el ocho.\n\n");
            break;
        case 9:
            printf("\n Elegiste el nueve.\n\n");
            break;
        case 0:
            printf("\n Elegiste el cero.\n\n");
            break;
        default:
            printf("\nElegiste una opcion equivocada.\n\n");
            break;
    }
    printf("\n Gracias por elegir!!! \n\n");
    return 0;
}
