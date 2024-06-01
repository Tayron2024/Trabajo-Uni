/* 8.Producto de una serie geométrica
Descripción: Calcular el producto de los primeros n términos de una serie geométrica.
Ejemplo: 2, 4, 8, 16, …*/

Solución con bucle for:
#include <stdio.h>

int main() {
    int n, i;
    double producto = 1.0, a = 2.0, r = 3.0;

    printf("Ingresa la cantidad de términos a multiplicar: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        producto *= a * pow(r, i - 1); 
    }

    printf("El producto de los primeros %d términos es: %f\n", n, producto);

    return 0;
}