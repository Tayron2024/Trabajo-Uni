/**
 * @file SumaDeLosnIngresados.c
 * @author Tayron Morales (mtayronfernando@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2024-05-31
 * 
 * @copyright Copyright (c) 2024
 */

/*
1.Suma de los dígitos de un número
• Descripción: Dado un número, calcular la suma de sus dígitos.
• Ejemplo: 12567 -> 1 + 2 + 5 + 6 + 7 = 21*/
//Este Ejercicio fue resuelto con for

#include <stdio.h>

int main() {
    int n, nIngresados, suma = 0;

    printf("Ingresa un numero: ");
    scanf("%d", &n);

    for (nIngresados = n; nIngresados != 0; nIngresados /= 10) {
        suma += nIngresados % 10;
    }

    printf("La suma de los digitos es: %d\n", suma);

    return 0;
}


