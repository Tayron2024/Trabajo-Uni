/**
 * @file 2.InversoDeUnNumero.c
 * @author Tayron Morales (mtayronfernando@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2024-05-31
 * 
 * @copyright Copyright (c) 2024
 * 
 */

/*2.Inverso de un número
Descripción: Dado un número, obtener su inverso.
 Ejemplo: 12567 -> 76521
*/
//solucion mediante un bucle for
#include <stdio.h>

int main() {
    int n1, inverso = 0;

    printf("Ingresa un numero:\n");
    scanf("%d", &n1);

    for (; n1 != 0; n1 /= 10) {
        inverso = inverso * 10 + n1 % 10;
    }

    printf("El numero inverso es: %d\n", inverso);

    return 0;
}



