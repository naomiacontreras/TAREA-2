#include <stdio.h>

int main() 
{
    int n, i, num;
    int pos=0, neg=0, cer=0;
    int arr[100];

    printf("Cuantos elementos tendra el arreglo? ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) 
    {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &arr[i]);
        if (arr[i] > 0) pos++;
        else if (arr[i] < 0) neg++;
        else cer++;
    }
    printf("Positivos: %d\nNegativos: %d\nCeros: %d\n", pos, neg, cer);

    return 0;
}
