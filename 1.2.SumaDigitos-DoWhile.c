    #include <stdio.h>
    int main() {
    int n, nIngresados, suma = 0;

    printf("Ingresa un número entero: ");
    scanf("%d", &n);

    nIngresados = n;
    do {
        suma += nIngresados % 10;
        nIngresados /= 10;
    } while (nIngresados != 0);

    printf("La suma de los dígitos es: %d\n", suma);

    return 0;
}