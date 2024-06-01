#include <stdio.h>

int main() {
    int n, contador = 0;

    printf("Ingresa un número: ");
    scanf("%d", &n);

    do {
        n /= 10;
        contador++;
    } while (n != 0);

    printf("El número de dígitos es: %d\n", contador);

    return 0;
}