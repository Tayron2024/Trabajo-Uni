#include <stdio.h>

int main() {
    int n1, inverso = 0;

    printf("Ingresa ul numero entero: ");
    scanf("%d", &n1);

    do {
        inverso = inverso * 10 + n1 % 10;
        n1 /= 10;
    } while (n1 != 0);

    printf("El numero inverso es: %d\n", inverso);

    return 0;
}