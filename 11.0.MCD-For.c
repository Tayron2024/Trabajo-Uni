/*11.Encontrar el MCD (Máximo Común Divisor)
Descripción: Calcular el MCD de dos números.
Ejemplo: MCD de 54 y 24 es 6*/

#include <stdio.h>

int main() {
    int num1, num2, i, mcd;

    printf("Ingresa dos números separados por espacio: ");
    scanf("%d %d", &num1, &num2);

    for (i = 1; i <= num1 && i <= num2; i++) {
        if (num1 % i == 0 && num2 % i == 0) {
            mcd = i;
        }
    }

    printf("El MCD de %d y %d es: %d\n", num1, num2, mcd);

    return 0;
}