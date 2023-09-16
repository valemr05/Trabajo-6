/*

- while ejercicio 10


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

    int cantidadDeTerminos = 0;//se crea la variable cantidadDeTerminos de tipo entero con un valor conocido
    
    printf( "Esta serie cuenta el número de caminos no cruzados de longitud n en\nuna retícula tridimensional. Comienza con los números 1, 1 y los siguientes términos se calculan como la\nsuma de los términos anteriores y la suma de los términos anteriores menos el tercer término anterior. La\nfórmula para el enésimo número de Motzkin es M(n) = M(n-1) + Σ(k=0, n-2) M(k)M(n-2-k), donde M(0) =1 y M(1) = 1." );
    printf( "\nIngrese el número de términos que desea: " );
    scanf( "%i", &cantidadDeTerminos );//se le asigna a la variable cantidadDeTerminos el valor ingresado por el usuario
    
    printf( "Los primeros %i términos de la serie de Motzkin son: ", cantidadDeTerminos );

    int primerValor=1, segundoValor=1, auxiliar=0, n=2, contador=1;

    do{
        printf( "%i, ", primerValor );
        
        contador++;
        auxiliar =  ( ( ( ( 3 * ( n - 1 )  ) * primerValor ) + ( ( ( 2 * n ) + 1 ) * segundoValor ) ) / ( n + 2 ) );
        primerValor = segundoValor;
        segundoValor = auxiliar;
        n++;
    } while ( contador <= cantidadDeTerminos );

    return 0;
}