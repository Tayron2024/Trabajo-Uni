/*16. Suma de una serie de números fraccionarios
Descripción: Calcular la suma de la serie 1 + 1/2 + 1/3 + … + 1/n.
Ejemplo: Si n = 3, suma = 1 + 1/2 + 1/3
*/

#include <stdio.h>

int main() {
    int n;
    float suma = 0.0;

    printf("Ingresa un número entero positivo: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        suma += 1.0 / i;
    }

    printf("La suma de la serie 1 + 1/2 + 1/3 + ... + 1/%d es: %f\n", n, suma);

    return 0;
}
