/*

- while ejercicio 11

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
    int primerValor = 1, segundoValor = 3, auxiliar = 0, cantidadDeTerminos=0;//se declaran las variables necesarias para el programa, primerValor y segundoValor para los primeros valores de la serie, auxilar para ayudarnos en la formula usada para hallar los valores de la serie y cantidadDeTerminos para almacenar el número de términos que desea el usuario.

    printf( "El siguiente programa presenta la serie de Triangular: T(n) = T(n-1) + (n-1)T(n-2),\ndonde T(0) = 1." );
    printf( "\nIngrese la cantidad de términos que desea: " );
    scanf( "%i", &cantidadDeTerminos );//se le asigna a la variable cantidadDeTerminos el valor ingresado por el usuario    
    printf( "Los primeros %i términos de la serie Triangular son: ", cantidadDeTerminos );

    //se declara la variable i para el ciclo while, se inicializa en 0, se evalua si i es menor que cantidadDeTerminos y se incrementa en 1
    int i = 0;
    do {
        printf( "%i, ", primerValor );
        auxiliar = ( segundoValor - primerValor ) + ( segundoValor + 1 );
        primerValor = segundoValor;
        segundoValor = auxiliar;
        i++;
    }//fin del for
    while ( i < cantidadDeTerminos);
    return 0; 
 }