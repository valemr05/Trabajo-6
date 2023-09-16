/*

- while ejercicio 8


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

//Se crea la función Factorial con un parámetro de tipo entero (numero) que calcula el factorial de un número
long long int Factorial( int numero )
{
    long long int resultado = 1;

    if( numero != 0)
        do{
            resultado *= numero;
            numero--;
        } while( numero > 0 );

    return resultado;
}

int main()
{
    int catalan = 1, cantidadDeTerminos = 0, contador = 1;

    printf( "Serie de Catalán: Esta serie es una secuencia de números que aparece en diversos\nproblemas de conteo en matemáticas. Comienza con los números 1, 1, y los siguientes términos se\ncalculan como la suma de los productos de los términos anteriores. La fórmula para el enésimo número\nde Catalán es C(n) = (2n)! / (n!(n+1)!), donde C(0) = 1" );
    printf( "\nIngrese el número de términos que desea: " );
    scanf( "%i", &cantidadDeTerminos );
    printf( "Los primeros %i terminos de la serie de Catalán son: ", cantidadDeTerminos );

    do
    {
        printf( "%i ", catalan );
        catalan = Factorial( 2 * contador ) / ( Factorial( contador ) * Factorial( contador + 1 ) );
        contador++;
    }
    while( contador <= cantidadDeTerminos );

    return 0;
}