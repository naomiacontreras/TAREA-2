/*Miranda Contreras Naomi Alexa Tarea 2*/
#include <stdio.h>

int main() 
{
    float compra, total, desc;
    printf("Ingrese el monto de la compra: ");
    scanf("%f", &compra);
    if (compra > 2500)
        {
           desc = compra * 0.08;
           total= compra-desc;
        }
    else
        {
            total = compra;
        }

    printf("El cliente debe pagar: %f\n", total);

    return 0;
}
