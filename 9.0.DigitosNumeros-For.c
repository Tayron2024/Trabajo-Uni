/* 9.Número de dígitos de un número
Descripción: Contar el número de dígitos de un número.
Ejemplo: 12567 tiene 5 dígitos*/

#include <stdio.h>

int main() {
    int n, contador = 0;

    printf("Ingresa un número: ");
    scanf("%d", &n);

    for (; n != 0; n /= 10) {
        contador++;
    }

    printf("El nnmero de digitos es: %d\n", contador);

    return 0;
}