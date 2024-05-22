/**
 * @file trabajo.c
 * @author Tayron Morales (mtayronfernando@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2024-05-21
 * 
 * @copyright Copyright (c) 2024
 * 
 * 
**Investigacion**

-scanf: Esta función se utiliza para leer datos de la entrada estándar (teclado) y almacenarlos en variables. 
Se le pueden proporcionar especificadores de formato como %d para enteros, %f para números de punto flotante, %c
para caracteres, entre otros.

-Ejemplo de scanf:
int edad;
printf("Ingresa tu edad: ");
scanf("%d", &edad);

-printf: Esta función se utiliza para mostrar datos en la salida estándar (pantalla). Al igual que scanf, 
se pueden usar especificadores de formato para formatear la salida, como %d para enteros, %f para flotantes, 
%c para caracteres, etc.

-Ejemplo de printf:

-int numero = 10;
printf("El número es: %d\n", numero);
Tipos de Datos en C y Declaración de Variables:

-En C, existen diferentes tipos de datos que se utilizan para almacenar diferentes tipos de valores. 
Algunos de los tipos de datos comunes son:

int: Se utiliza para almacenar números enteros. Puede contener valores como -2, 0, 42, etc.
Para declarar una variable de tipo int, se utiliza la siguiente sintaxis:
int edad;

float: Se utiliza para almacenar números de punto flotante de precisión simple. Puede contener valores como 3.14, -0.5, 123.456, etc.
Para declarar una variable de tipo float, se utiliza la siguiente sintaxis:
float precio;

double: Se utiliza para almacenar números de punto flotante de doble precisión. Proporciona mayor precisión que float. Puede contener valores como 3.14159, 0.0001, etc.
Para declarar una variable de tipo double, se utiliza la siguiente sintaxis:
double pi;

char: Se utiliza para almacenar caracteres individuales. Puede contener letras, dígitos, símbolos, etc.
Para declarar una variable de tipo char, se utiliza la siguiente sintaxis:
char letra;

Bool: Se utiliza para almacenar valores booleanos (verdadero o falso). En C, 0 se considera falso y cualquier otro valor se considera verdadero.
Para declarar una variable de tipo _Bool, se utiliza la siguiente sintaxis:
Bool esVerdadero;

short: Se utiliza para almacenar enteros cortos. Tiene menor rango que int.
Para declarar una variable de tipo short, se utiliza la siguiente sintaxis:
short distancia;

long: Se utiliza para almacenar enteros largos. Tiene un rango mayor que int.
Para declarar una variable de tipo long, se utiliza la siguiente sintaxis:
long poblacion;

long long: Se utiliza para almacenar enteros largos con un rango aún mayor que long.
Para declarar una variable de tipo long long, se utiliza la siguiente sintaxis:
long long valorGrande;

unsigned int: Similar a int, pero solo puede contener valores no negativos (positivos y cero).
Para declarar una variable de tipo unsigned int, se utiliza la siguiente sintaxis:
unsigned int cantidad;

unsigned char: Similar a char, pero solo puede contener valores no negativos.
Para declarar una variable de tipo unsigned char, se utiliza la siguiente sintaxis:
unsigned char codigo;

Codigo
 */

#include <stdio.h> 
/*Librerias: las librerias nos permite tener los datos de entrada manejar datos mas generales para el correcto
uso del programa hay varios como time.h que nos permite realizar programas con la fecha y tiempo actual
math.h , stdlib.h y muchas mas estas son fundamentales para el funcionamiento del programa*/

int main()//main es la funcion principal del codigo
{
    int n;
    float ndecimal;
    char letra;
    /*Declaramos el int con el nombre de numero donde almacenaremos el dato que despues ingresaremos al igual que
    float y char*/

    printf("Bienvenido Usuario al programa\n");
    printf("Ingresa un número entero : ");
    scanf("%d", &n);
    printf("Ingresa un número decimal: ");
    scanf("%f", &ndecimal);

    printf("Ingresa una letra: ");
    scanf(" %c", &letra); 
    /*Iniciamos con un printf de bienvidad y otro que pide al usuario ingrese un numero y el scanf se encargara de 
leer el dato y alamcenarlo al igual que en con el float y char cumple la misma funcion pero en char presenta
un caracter y tambien se lo puede representar con numeros*/
    printf("===============================\n");
    printf("Los valores ingresados son:\n");
    printf("Número entero: %d\n", n);
    printf("Número decimal: %.2f\n", ndecimal);
    printf("Letra: %c\n", letra);
/*Al final agregamos otro printf para hacer saber el usuario que nos esta mostrando el resultado
muy importante cada ves que queramos presentar algun resultado o que lea una variable en un printf
debemos poner que tipo de dato es si queremos presentar un dato entero usaremos %d o %i dependiendo del tamaño
del dato si es flotante usaremos %f o %lf y con char usaremos %c, y despues de las comillas agregamos una coma
y ponemos el nombre de la variable 
*/
    return 0;
}

