#include <stdio.h>

int main(void)
{
    printf("Archivos - Crear un archivo. \n\n");
	FILE *archivo; 	// Declaramos la variable file como puntero del tipo FILE.
	archivo = fopen("archivo001.dat", "w"); 	// Creamos archivo001.dat y guardamos su direccion en el apuntador "archivo".
    if(archivo != NULL)
    {
        printf("El archivo se ha creado exitosamente. Comprueba en la carpeta que ha sido creado.\n");
        fclose(archivo);
    }
    else
    {
        printf("El archivo no se ha creado.\n");
    }
    return 0;
}
