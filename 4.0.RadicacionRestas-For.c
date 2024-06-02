
4.Radicación mediante restas sucesivas
Descripción: Calcular la raíz cúbica de un número utilizando restas sucesivas.
Ejemplo: 27^(1/3) = 3
*/
//Solución con bucle for:
#include <stdio.h>

int main() {
    int n, resultado = 0;

    printf("Ingresa un número para calcular su raíz cúbica: ");
    scanf("%d", &n);

    for (int i = 0; i*i*i <= n; i++) {
        resultado = i;
    }

    printf("La raíz cúbica de %d es: %d\n", n, resultado);

    return 0;
}
