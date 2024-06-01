/*14. Suma de los cuadrados de los primeros n números
Descripción: Calcular la suma de los cuadrados de los primeros n números naturales.
Ejemplo: Si n = 3, suma = 1^2 + 2^2 + 3^2 = 14
*/

#include <stdio.h>

int main() {
    int n, suma = 0;

    printf("Ingresa un número entero positivo: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        suma += i * i;
    }

    printf("La suma de los cuadrados de los primeros %d números es: %d\n", n, suma);

    return 0;
}
