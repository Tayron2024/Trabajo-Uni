/*18. Contar los números primos hasta n
Descripción: Contar cuántos números primos hay desde 1 hasta n.
Ejemplo: Si n = 10, hay 4 números primos (2, 3, 5, 7)
*/
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
    int n, count = 0;

    printf("Ingresa un número entero positivo: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (esPrimo(i)) {
            count++;
        }
    }

    printf("El número de primos desde 1 hasta %d es: %d\n", n, count);

    return 0;
}
