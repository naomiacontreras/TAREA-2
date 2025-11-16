#include <stdio.h>

int main() 
{
    int N;
    unsigned long long producto = 1; 
    int i;
    printf("Introduce N: ");
    if (scanf("%d", &N) != 1) 
    {
        printf("Entrada invalida\n");
        return 1;
    }
    if (N < 0) 
    {
        printf("N invalido (debe ser >= 0)\n");
        return 1;
    }
    for (i = 1; i <= N; i++) 
    {
        producto *= i;
    }
    printf("Producto de los %d primeros numeros naturales = %f\n", N, producto);
    return 0;
}
