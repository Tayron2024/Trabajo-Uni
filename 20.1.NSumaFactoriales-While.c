#include <stdio.h>

int calcularFactorial(int num) {
    int factorial = 1;
    int i = 1;
    while (i <= num) {
        factorial *= i;
        i++;
    }
    return factorial;
}

int main() {
    int n;
    unsigned long long sumaFactoriales = 0;

    printf("Ingresa un número entero positivo: ");
    scanf("%d", &n);

    int i = 1;
    while (i <= n) {
        sumaFactoriales += calcularFactorial(i);
        i++;
    }

    printf("La suma de los factoriales de los primeros %d números es: %llu\n", n, sumaFactoriales);

    return 0;
}
