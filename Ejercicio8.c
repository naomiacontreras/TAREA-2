#include <stdio.h>

int main() 
{
    int a, b;
    printf("Ingrese dos numeros enteros: ");
    scanf("%d %d", &a, &b);
    if (b != 0 && a % b == 0)
        printf("%d es divisor de %d\n", b, a);
    else
        printf("%d NO es divisor de %d\n", b, a);

    return 0;
}
