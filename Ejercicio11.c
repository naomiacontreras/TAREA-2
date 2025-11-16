#include <stdio.h>

int main() {
    int i, suma = 0;

    for (i = 10; i <= 50; i++) {
        if (i % 2 == 0)
            suma += i;
    }

    printf("Suma de pares entre 10 y 50: %d\n", suma);

    return 0;
}
