#include <stdio.h>

int main() {
    int n, i = 1;
    float suma = 0.0;

    printf("Ingresa un número entero positivo: ");
    scanf("%d", &n);

    while (i <= n) {
        suma += 1.0 / i;
        i++;
    }

    printf("La suma de la serie 1 + 1/2 + 1/3 + ... + 1/%d es: %f\n", n, suma);

    return 0;
}
