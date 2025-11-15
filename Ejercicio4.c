#include <stdio.h>

int main() 
{
    float cantidad, tasa, total;
    printf("Ingrese la cantidad invertida: ");
    scanf("%f", &cantidad);
    printf("Ingrese la tasa de interes mensual (en %%): ");
    scanf("%f", &tasa);
    total = cantidad + (cantidad * tasa / 100);
    printf("Monto final despues de un mes: %.2f\n", total);

    return 0;
}
