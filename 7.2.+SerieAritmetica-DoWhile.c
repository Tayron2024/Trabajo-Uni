#include <stdio.h>

int main() {
    int n, i = 1, suma = 0, a = 3, d = 2; 

    printf("Ingresa la cantidad de términos a sumar: ");
    scanf("%d", &n);

    do {
        suma += a + (i - 1) * d; 
        i++;
    } while (i <= n);

    printf("La suma de los primeros %d términos es: %d\n", n, suma);

    return 0;
}