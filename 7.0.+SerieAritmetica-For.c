/* 
7.Suma de una serie aritmética
Descripción: Calcular la suma de los primeros n términos de una serie aritmética.
Ejemplo: 1 + 2 + 3 + … + n*/

#include <stdio.h>

int main() {
    int n, i, suma= 0, a= 3, d= 2; 

    printf("Ingresa la cantidad de términos a sumar: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        suma += a + (i - 1) * d; 
    }

    printf("La suma de los primeros %d términos es: %d\n", n, suma);

    return 0;
}