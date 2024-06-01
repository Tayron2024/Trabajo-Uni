#include <stdio.h>

int calcularTriangular(int n) {
    int i = 1, triangular = 0;
    while (i <= n) {
        triangular += i;
        i++;
    }
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
