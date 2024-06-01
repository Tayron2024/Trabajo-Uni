#include <stdio.h>

int main() {
    int n, i = 2, esPrimo = 1; 

    printf("Ingresa un número: ");
    scanf("%d", &n);
    do {
        if (n % i == 0) {
            esPrimo = 0; 
            break;}
        i++;
    } while (i <= n / 2);

    if (esPrimo)
        printf("%d es un número primo.\n", n);
    else
        printf("%d no es un número primo.\n", n);

    return 0;
}