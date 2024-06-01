#include <stdio.h>

int calcularFactorial(int num) {
    int factorial = 1;
    int i = 1;
    do {
        factorial *= i;
        i++;
    } while (i <= num);
    return factorial;
}

int main() {
    int n;
    unsigned long long sumaFactoriales = 0;

    printf("Ingresa un número entero positivo: ");
    scanf("%d", &n);

    int i = 1;
    do {
        sumaFactoriales += calcularFactorial(i);
        i++;
    } while (i <= n);

    printf("La suma de los factoriales de los primeros %d números es: %llu\n", n, sumaFactoriales);

    return 0;
}
