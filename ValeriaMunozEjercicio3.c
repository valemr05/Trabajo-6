/*

- while ejercicio 3


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
    int primerNumero = 2, segundoNumero = 1, auxiliar = 0, cantidadDeTerminos = 0;

    printf( "Serie de Lucas: Esta serie comienza con los números 2 y 1, y los siguientes términos se\ncalculan como la suma de los dos términos anteriores más el términos anteriores\nLa fórmula para el enésimo número de Lucas es\nL(n) = L(n-1) + L(n-2), donde L(0) = 2 y L(1) = 1" );
    printf( "\nIngrese el número de términos que desea: " );
    scanf( "%i", &cantidadDeTerminos );
    printf( "Los primeros %i terminos de la serie de Lucas son: ", cantidadDeTerminos );

    do
    {
        printf( "%i ", primerNumero );
        auxiliar = segundoNumero + primerNumero;
        primerNumero = segundoNumero;
        segundoNumero = auxiliar;
        cantidadDeTerminos--;
    }
    while( cantidadDeTerminos > 0 );

    return 0;
}