/*10.Verificar si un número es primo
Descripción: Determinar si un número es primo.
Ejemplo: 7 es primo, 10 no es primo*/

#include <stdio.h>

int main() {
    int n, i, esPrimo = 1; 

    printf("Ingresa un número: \n");
    scanf("%d", &n);

    for (i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            esPrimo = 0; 
            break;
        }
    }

    if (esPrimo)
        printf("%d es un número primo.\n", n);
    else
        printf("%d no es un número primo.\n", n);

    return 0;
}