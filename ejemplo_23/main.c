#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 0;
    int n = 0;
    int contador=0;
    int cuadrado = 0;
    int impares=0;

    printf("Cuantos numeros: ");
    scanf(" %d",&n);
    for(contador=1; contador<=n; contador++) {
        printf("\nNo. %d = ",contador);
        cuadrado=0;
        impares=1;
        x=1;
        do {
            printf(" %d ",impares);
            if(x<contador) printf("+");
            cuadrado+=impares;
            impares+=2;
            x++;
        } while(x<=contador);
        printf(" = %d ",cuadrado);
    }
    return 0;
}
