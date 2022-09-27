#include<stdio.h>
#include<string.h>

int main()
{
    printf("Contando una cadena de Caracteres.\n\n");

    char nameC[50];
    int size;
    printf("Indique su nombre: ");
    gets(nameC); //gets: permite leer una cadena incluyendo espacios y termina cuando lee el fin de linea: \n
    printf("El nombre es: ");
    puts(nameC); //puts: Imprime la cadena hasta que detecta el fin de linea \0 o \n.
    size = strlen(nameC);
    printf("\nEl tamanio de la cadena es: %d \n\n", size);

    return 0;
}
