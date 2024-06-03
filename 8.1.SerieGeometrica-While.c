#include <stdio.h>

int main() {
    int n, i = 1;
    double producto = 1.0, a = 2.0, r = 3.0;

    printf("Ingresa la cantidad de términos a multiplicar: ");
    scanf("%d", &n);

    while (i <= n) {
        double potencia = 1.0;
        int j = 1;
        while (j < i) {
            potencia *= r;
            j++;
        }
        producto *= a * potencia;
        i++;
    }

    printf("El producto de los primeros %d términos es: %f\n", n, producto);

    return 0;
}
