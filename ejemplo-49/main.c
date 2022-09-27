#include<stdio.h>

int main()
{
    printf("Apuntadores.\n\n");
    float val;     //Variable que vamos a modificar desde su posicion en memoria.
    float *apVal;  //Variable apuntador.
    apVal = &val;  //Guardamos la posicion de memoria de la variable val en el apuntador.
    *apVal = 3.141598; //Asignamos un valor float a la posicion de memoria guardada en el apuntador.
    printf("El valor de la variable es: %f\n", val);
    return 0;
}
