/*

- while ejercicio 12

- Fecha de publicación: 03/09/2023
- Hora: 6:00 PM
- Versión de su código: 1.0
- Autor. Ing(c) Valeria Muñoz Ramirez
- Nombre del lenguaje utilizado: C
- Versión del lenguaje utilizado: C18
- Presentado a: Doctor Ricardo Moreno Laverde
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- Asignatura IS284 Programación II

- El siguiente programa imprime la serie de Lucas con la cantidad de terminos ingresada por el usuario.
- terminos: Los primeros nueve términos de la serie de Lucas son: 2, 1, 3, 4, 7, 11, 18, 29, 47.
- Salvedades: El programa admite valores ingresados de tipo entero, para valores de otro tipo no garantizamos sus resultados.
*/



#include <stdio.h>

int main()
{
    int numero = 0;

    printf( "Este programa lee desde el teclado un número\nentero y lo imprime al revés.\nEntre el número: " );
    scanf( "%i", &numero );

    do
    {
        printf( "%i", numero % 10 );
        numero /= 10;
    }
    while( numero > 0 );
    

    return 0;
}