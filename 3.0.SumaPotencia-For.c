/**
 * @file 3.sumasPotencia.c
 * @author Tayron Morales (mtayronfernando@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2024-05-31
 * 
 * @copyright Copyright (c) 2024
 * 
 */

/*
3.Potencia mediante sumas sucesivas
Descripción: Calcular la potencia de un número utilizando sumas sucesivas.
Ejemplo: 2^3 = 2 * 2 * 2 = 8
*/
//Solución con bucle for:
#include <stdio.h>

int main() {
    int n, exponente, resultado = 1;

    printf("Ingresa la n: ");
    scanf("%d", &n);
    printf("Ingresa el exponente: ");
    scanf("%d", &exponente);

    for (int i = 1; i <= exponente; i++) {
        resultado *= n;
    }

    printf("El resultado de %d elevado a %d es: %d\n", n, exponente, resultado);

    return 0;
}



