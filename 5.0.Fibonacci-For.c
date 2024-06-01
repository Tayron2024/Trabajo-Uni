/*5.Serie de Fibonacci
Descripción: Presentar los n elementos de la serie de Fibonacci.
Ejemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, …
Solución con bucle for:*/
#include <stdio.h>

int main() {
    int n, primero = 0, segundo = 1, continuar;

    printf("Ingresa el número de elementos de la serie de Fibonacci a mostrar: ");
    scanf("%d", &n);

    printf("Los %d primeros elementos de la serie de Fibonacci son:\n", n);

    printf("%d, %d", primero, segundo);

    for (int i = 2; i < n; i++) {
        continuar = primero + segundo;
        printf(", %d", continuar);
        primero = segundo;
        segundo = continuar;
    }

    printf("\n");

    return 0;
}