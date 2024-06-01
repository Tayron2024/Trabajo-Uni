/*17. Producto de una serie de números fraccionarios
Descripción: Calcular el producto de la serie 1 * 1/2 * 1/3 * … * 1/n.
Ejemplo: Si n = 3, producto = 1 * 1/2 * 1/3
*/

#include <stdio.h>

int main() {
    int n;
    float producto = 1.0;

    printf("Ingresa un número entero positivo: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        producto *= 1.0 / i;
    }

    printf("El producto de la serie 1 * 1/2 * 1/3 * ... * 1/%d es: %f\n", n, producto);

    return 0;
}
