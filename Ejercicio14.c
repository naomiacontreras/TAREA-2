#include <stdio.h>

int main() 
{
    int n, i, buscado, cont = 0;
    int arreglo[100];
    printf("Cuantos elementos tendra el arreglo? ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &arreglo[i]);
    }
    printf("Numero a buscar: ");
    scanf("%d", &buscado);
    for (i = 0; i < n; i++)
        if (arreglo[i] == buscado)
            cont++;
    printf("El numero %d aparece %d veces.\n", buscado, cont);

    return 0;
}
