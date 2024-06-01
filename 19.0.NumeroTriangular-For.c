/*19. Calcular el n-ésimo número triangular
Descripción: Calcular el n-ésimo número triangular.
Ejemplo: Si n = 4, el número triangular es 1 + 2 + 3 + 4 = 10
*/

#include <stdio.h>

int calcularTriangular(int n) {
    int triangular = 0;
    for (int i = 1; i <= n; i++) {
        triangular += i;
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
