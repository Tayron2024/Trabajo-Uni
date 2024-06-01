#include <stdio.h>

int main() {
    int n, contador = 0;

    printf("Ingresa un número: ");
    scanf("%d", &n);

    while (n != 0) {
        n /= 10;
        contador++;
    }

    printf("El número de dígitos es: %d\n", contador);

    return 0;
}