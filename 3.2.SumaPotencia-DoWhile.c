#include <stdio.h>

int main() {
    int n, exponente, resultado = 1, i = 1;

    printf("Ingresa la n: ");
    scanf("%d", &n);
    printf("Ingresa el exponente: ");
    scanf("%d", &exponente);

    do {
        resultado *= n;
        i++;
    } while (i <= exponente);

    printf("El resultado de %d elevado a %d es: %d\n", n, exponente, resultado);

    return 0;
}