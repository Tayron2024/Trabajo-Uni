#include <stdio.h>
#include <math.h>

int main() {
    int n, i = 1;
    double producto = 1.0, a = 2.0, r = 3.0;

    printf("Ingresa la cantidad de términos a multiplicar: ");
    scanf("%d", &n);

    while (i <= n) {
        producto *= a * pow(r, i - 1); 
        i++;
    }

    printf("El producto de los primeros %d términos es: %f\n", n, producto);

    return 0;
}