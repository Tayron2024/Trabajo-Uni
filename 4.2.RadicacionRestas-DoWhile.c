#include <stdio.h>

int main() {
    int n, resultado = 0, i = 0;

    printf("Ingresa un número para calcular su raíz cúbica: ");
    scanf("%d", &n);

    do {
        resultado = i;
        i++;
    } while (i*i*i <= n);

    printf("La raíz cúbica de %d es: %d\n", n, resultado);

    return 0;
}