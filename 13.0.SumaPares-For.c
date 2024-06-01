/*13. Sumar los números pares hasta n
Descripción: Calcular la suma de todos los números pares desde 1 hasta n.
Ejemplo: Si n = 10, suma = 2 + 4 + 6 + 8 + 10 = 30*/

#include <stdio.h>

int main() {
    int n, suma = 0;

    printf("Ingresa un número entero positivo: ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i += 2) {
        suma += i;
    }

    printf("La suma de los números pares hasta %d es: %d\n", n, suma);

    return 0;
}