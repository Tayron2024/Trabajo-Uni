#include <stdio.h>

int calcularTriangular(int n) {
    int i = 1, triangular = 0;
    do {
        triangular += i;
        i++;
    } while (i <= n);
    return triangular;
}

int main() {
    int n;

    printf("Ingresa un número entero positivo: ");
    scanf("%d", &n);

    int resultado = calcularTriangular(n);

    printf("El %d-ésimo número triangular es: %d\n", n, resultado);

    return 0;
}
