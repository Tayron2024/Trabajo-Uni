#include <stdio.h>

int main() {
    int n, suma = 0, i = 1;

    printf("Ingresa un número entero positivo: ");
    scanf("%d", &n);

    while (i <= n) {
        suma += i * i * i;
        i++;
    }

    printf("La suma de los cubos de los primeros %d números es: %d\n", n, suma);

    return 0;
}
