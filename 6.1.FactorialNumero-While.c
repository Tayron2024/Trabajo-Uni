#include <stdio.h>

int main() {
    int n, i = 1;
    unsigned long long factorial = 1;

    printf("Ingresa un número entero positivo: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("El factorial no está definido para números negativos.\n");
    } else {
        while (i <= n) {
            factorial *= i;
            i++;
        }

        printf("El factorial de %d es: %llu\n", n, factorial);
    }

    return 0;
}