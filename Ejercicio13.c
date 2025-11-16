#include <stdio.h>

int main() 
{
    int n, i;
    int arreglo[100];
    int suma = 0;
    printf("Cuantos elementos tendra el arreglo? ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) 
    {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &arreglo[i]);
        suma += arreglo[i];
    }

    printf("La suma es: %d\n", suma);

    return 0;
}
