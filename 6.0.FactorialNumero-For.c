/* 
6.Factorial de un número
Descripción: Calcular el factorial de un número.
Ejemplo: 5! = 5 * 4 * 3 * 2 * 1 = 120*/

#include <stdio.h>

int main() {
    int n, i;
    unsigned long long factorial = 1;

    printf("Ingresa un número entero positivo: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("El factorial no está definido para números negativos.\n");
    } else {
        for (i = 1; i <= n; i++) {
            factorial *= i;
        }

        printf("El factorial de %d es: %llu\n", n, factorial);
    }

    return 0;
}