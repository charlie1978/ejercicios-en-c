#include<stdio.h>

int main()
{
    printf("Encontrar el numero mas grande de un arreglo.\n\n");
    int tam;
    printf("Tama�o del arreglo: ");
    scanf("%d", &tam);

    int numeros[tam];
    int mayor;

    printf("Ingresa los valores:\n");
    int i;
    for (i=0;i<tam;i++)
    {
        printf("Valor[%d]: ", i);
        scanf("%d", &numeros[i]);
    }
    mayor = numeros[0];
    for(i = 1; i < tam; i++)
        if(numeros[i] > numeros[i-1])
            mayor = numeros[i];
    printf("\nEl numero mayor es: %d\n\n", mayor);
    return 0;
}
