#include<stdio.h>

int main()
{
    printf("Arreglos e Iteradores.\n\n");

    int listaEnteros[4][5];
    int i,j;
    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 5; j++)
        {
            listaEnteros[i][j] = ((i + 1)*100) + j;
            printf("(%d, %d): %d \n", i, j, listaEnteros[i][j]);
        }
    }

    return 0;
}
