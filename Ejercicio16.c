#include <stdio.h>

int main() 
{
    int arr[100];
    int i;

    for (i = 0; i < 100; i++)
    {
        arr[i] = i + 1;
    }
    printf("Arreglo de 1 a 100:\n");
    for (i = 0; i < 100; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
