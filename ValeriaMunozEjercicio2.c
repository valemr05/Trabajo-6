/*

- while ejercicio 2


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
    int primerTermino=0, segundoTermino=1, auxiliar=0, sumaDeTerminos=0; //se declaran las variables de tipo entero primerTermino, segundoTermino y sumaDeTerminos

    printf( "Este programa presenta la suma de los elementos de la serie de Fibonacci entre 0 y 100. \nLos números a sumar son:\n" );

    do {
        printf("%i, ", primerTermino);
        sumaDeTerminos += primerTermino; 

        auxiliar = primerTermino + segundoTermino;
        primerTermino = segundoTermino;
        segundoTermino = auxiliar;
    } while ( primerTermino <= 100 );

    printf("y su suma es: %i", sumaDeTerminos);

    return 0;
}
