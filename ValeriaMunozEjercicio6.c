/*

- while ejercicio 6


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
    int cantidadDeTerminos=0;//se crea la variable cantidadDeTerminos de tipo entero con un valor conocido
    
    printf( "Este programa presenta la Serie de Padovan: Esta serie comienza con los números 1, 0 y 0.\nLos siguientes términos se calculan como la suma de los dos términos anteriores y el\ntercer término anterior. La fórmula para el enésimo número de Padovan es:\nP(n) = P(n-2) + P(n-3), donde P(0) = 1, P(1) = 0 y P(2) = 0." );
    printf( "\nIngrese el número de términos que desea: " );
    scanf( "%i", &cantidadDeTerminos );//se le asigna a la variable cantidadDeTerminos el valor ingresado por el usuario
    
    printf( "Los primeros %i términos de la serie Padovan son: ", cantidadDeTerminos );

    int primerValor=1, segundoValor=0, tercerValor=0, auxiliar=0, contador=1;

    do{
        printf( "%i, ", primerValor );
        
        contador++;
        auxiliar =  primerValor + segundoValor;
        primerValor = segundoValor;
        segundoValor = tercerValor;
        tercerValor = auxiliar;
    } while ( contador <= cantidadDeTerminos );
    
    return 0;
}