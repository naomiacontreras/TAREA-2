/*Miranda Contreras Naomi Alexa Tarea 2*/
#include <stdio.h>

int main() 
{
    float sueldo, nuevo;
    printf("Ingrese el sueldo del trabajador: ");
    scanf("%f", &sueldo);
    if (sueldo <= 1000)
    {
        nuevo=sueldo*1.15;
    }
    else
    {
        nuevo = sueldo * 1.12;
    }
    printf("El sueldo con aumento es: %f\n", nuevo);
    return 0;
}
