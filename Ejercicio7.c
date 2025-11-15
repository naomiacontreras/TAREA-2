/*Miranda Contreras Naomi Alexa Tarea 2*/
#include <stdio.h>

int main() 
{
    float distancia, costo, dias, desc;
    printf("Ingrese la distancia a recorrer (km): ");
    scanf("%f", &distancia);
    printf("Ingrese los dias de estancia: ");
    scanf("%f", &dias);
    costo = distancia * 0.23;
    if (distancia > 800 && dias > 7)
    {
        desc=costo * 0.30;
        costo= costo-desc;
    }
    printf("El costo del ticket es: %f\n", costo);

    return 0;
}
