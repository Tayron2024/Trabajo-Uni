#include <stdio.h>

int main() {
    int num1, num2, i = 1, mcd;

    printf("Ingresa dos números separados por espacio: ");
    scanf("%d %d", &num1, &num2);

    do {
        if (num1 % i == 0 && num2 % i == 0) {
            mcd = i;
        }
        i++;
    } while (i <= num1 && i <= num2);

    printf("El MCD de %d y %d es: %d\n", num1, num2, mcd);

    return 0;
}