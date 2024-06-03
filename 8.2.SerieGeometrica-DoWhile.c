#include <stdio.h>

int main() {
    int n, i = 1;
    double producto = 1.0, a = 2.0, r = 3.0;

    printf("Ingresa la cantidad de términos a multiplicar: ");
    scanf("%d", &n);

    do {
        double potencia = 1.0;
        int j = 1;
        if (i > 1) { // Solo calcula la potencia si i > 1
            do {
                potencia *= r;
                j++;
            } while (j < i);
        }
        producto *= a * potencia;
        i++;
    } while (i <= n);

    printf("El producto de los primeros %d términos es: %f\n", n, producto);

    return 0;
}
