/*Miranda Contreras Naomi Alexa TAREA 2 */

#include <stdio.h>
#include <math.h>

int main() 
{
    float a, b, suma, resta, mult;
    printf("Ingrese dos numeros: ");
    scanf("%f %f", &a, &b);
    suma=a+b;
    resta=a-b;
    mult=a*b;
    printf("\n La suma es: %f\n", suma);
    printf("\n La resta es: %f\n", resta);
    printf("\n La multiplicación es: %f\n", mult);
    return 0;
}
