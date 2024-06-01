/*20. Calcular la suma de los factoriales de los primeros n números
Descripción: Calcular la suma de los factoriales de los primeros n números.
Ejemplo: Si n = 3, suma = 1! + 2! + 3! = 1 + 2 + 6 = 9
*/

#include <stdio.h>

int calcularFactorial(int num) {
    int factorial = 1;
    for (int i = 1; i <= num; i++) {
        factorial *= i;
    }
    return factorial;
}

int main() {
    int n;
    unsigned long long sumaFactoriales = 0;

    printf("Ingresa un número entero positivo: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sumaFactoriales += calcularFactorial(i);
    }

    printf("La suma de los factoriales de los primeros %d números es: %llu\n", n, sumaFactoriales);

    return 0;
}
