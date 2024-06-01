#include <stdio.h>

int esPrimo(int num) {
    if (num <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n, count = 0, i = 1;

    printf("Ingresa un número entero positivo: ");
    scanf("%d", &n);

    while (i <= n) {
        if (esPrimo(i)) {
            count++;
        }
        i++;
    }

    printf("El número de primos desde 1 hasta %d es: %d\n", n, count);

    return 0;
}
