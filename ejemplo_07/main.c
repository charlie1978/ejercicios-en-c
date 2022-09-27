#include<stdio.h>

int main()
{
    printf("Operadores de incremento y decremento. \n\n");
    int val, res;
    val = 25;
    res = val++;
    printf("resultado: %d\n", res);
    val = 25;
    res = ++val;
    printf("resultado: %d\n", res);
    val = 25;
    res = val--;
    printf("resultado: %d\n", res);
    val = 25;
    res = --val;
    printf("resultado: %d\n", res);

    return 0;
}
