#include <stdio.h>

int main() {
    int n, i = 1;
    float producto = 1.0;

    printf("Ingresa un número entero positivo: ");
    scanf("%d", &n);

    while (i <= n) {
        producto *= 1.0 / i;
        i++;
    }

    printf("El producto de la serie 1 * 1/2 * 1/3 * ... * 1/%d es: %f\n", n, producto);

    return 0;
}
