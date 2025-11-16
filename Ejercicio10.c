#include <stdio.h>

int main() 
{
    int num, i;
    int pos = 0, neg = 0, cer = 0;
    for (i = 1; i <= 100; i++) {
        printf("Ingrese el numero %d: ", i);
        scanf("%d", &num);
        if (num > 0) pos++;
        else if (num < 0) neg++;
        else cer++;
    }
    printf("\nPositivos: %d\n", pos);
    printf("Negativos: %d\n", neg);
    printf("Ceros: %d\n", cer);

    return 0;
}
