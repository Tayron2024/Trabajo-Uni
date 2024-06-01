#include <stdio.h>

int main() {
    int n, suma = 0, i = 2;

    printf("Ingresa un número entero positivo: ");
    scanf("%d", &n);

    while (i <= n) {
        suma += i;
        i += 2;
    }

    printf("La suma de los números pares hasta %d es: %d\n", n, suma);

    return 0;
}