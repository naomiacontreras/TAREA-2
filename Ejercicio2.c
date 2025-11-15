/*Miranda Contreras Naomi Alexa Tarea 2*/
#include <stdio.h>
#include <math.h>

int main() 
{
    float a, r, c;
    printf("Ingrese el radio del círculo");
    scanf("%f", &r);
    a=3.1416*r*r;
    c=2*3.1416*r;
    printf("\n El área es: %f\n", a);
    printf("\n La circunferencia es: %f\n", c);
    return 0;
}
