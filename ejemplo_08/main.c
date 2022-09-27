int main()
{
    printf("Serie Fibonacci.\n");
    int first = 0;
    int i;
    int second = 1;
    int suma = 0;
    int limit;
    printf("Indique posicion limite de la serie : ");
    scanf("%i", &limit);
    for (i = 1; i <= limit; i++)
    {
        printf("La posicion %i de fibonacci es: %i \n", i, suma);
        suma = first + second;
        second = first;
        first = suma;
    }
    return 0;
}
