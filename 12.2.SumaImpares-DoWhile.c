#include <stdio.h>

int main() {
    int n, suma = 0, i = 1;

    printf("Ingresa un número entero positivo: ");
    scanf("%d", &n);

    do {
        suma += i;
        i += 2;
    } while (i <= n);

    printf("La suma de los números impares hasta %d es: %d\n", n, suma);

    return 0;
}