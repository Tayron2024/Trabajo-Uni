/* 12.Sumar los números impares hasta n
Descripción: Calcular la suma de todos los números impares desde 1 hasta n.
Ejemplo: Si n = 10, suma = 1 + 3 + 5 + 7 + 9 = 25*/

#include <stdio.h>

int main() {
    int n, suma = 0;

    printf("Ingresa un número entero positivo: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i += 2) {
        suma += i;
    }

    printf("La suma de los números impares hasta %d es: %d\n", n, suma);
    return 0;
}