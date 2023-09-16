/*

- while ejercicio 7


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
    
    printf( "Este programa presenta la Serie de Narayana: Esta serie comienza con los números 1, 1 y 1.\nLos siguientes términos se calculan como la suma del término anterior y el\nnumero de parejas de terminos consecutivos anteriores que son diferentes. \nLa fórmula para el enésimo número de Narayana es:\nN(n) = P(n-1) + P(n-3), donde N(0) = 1, N(1) = 1 y N(2) = 1." );
    printf( "\nIngrese el número de términos que desea: " );
    scanf( "%i", &cantidadDeTerminos );//se le asigna a la variable cantidadDeTerminos el valor ingresado por el usuario
    
    printf( "Los primeros %i términos de la serie Narayana son: ", cantidadDeTerminos );

    int primerValor=1, segundoValor=1, tercerValor=1, auxiliar=0, contador=1;

    do{
        printf( "%i, ", primerValor );
        
        contador++;
        auxiliar =  primerValor + tercerValor;
        primerValor = segundoValor;
        segundoValor = tercerValor;
        tercerValor = auxiliar;
    } while ( contador <= cantidadDeTerminos );
    
    return 0;
}