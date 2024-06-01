#include <stdio.h>
int main() {
    int n, nIngresados, suma = 0;

    printf("Ingresa un número entero: ");
    scanf("%d", &n);

    nIngresados = n;
    while (nIngresados != 0) {
        suma += nIngresados % 10;
        nIngresados /= 10;
    }

    printf("La suma de los dígitos es: %d\n", suma);

    return 0;
    }