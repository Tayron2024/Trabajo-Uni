#include <stdio.h>

int main() {
    int n, primero = 0, segundo = 1, continuar, i = 2;

    printf("Ingresa el número de elementos de la serie de Fibonacci a mostrar: ");
    scanf("%d", &n);

    printf("Los %d primeros elementos de la serie de Fibonacci son:\n", n);

    printf("%d, %d", primero, segundo);

    while (i < n) {
        continuar = primero + segundo;
        printf(", %d", continuar);
        primero = segundo;
        segundo = continuar;
        i++;
    }

    printf("\n");

    return 0;
}