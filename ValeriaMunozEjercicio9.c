/*

- while ejercicio 9


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
#include <math.h>
//se crea la función Factorial con un parámetro de tipo float, numero
float Factorial( float numero )
{    
    if( numero == 0 ){
        return 1;
    }//de lo dontrario
    else{
        float resultado = 1;//se declara la variable resultado de tipo float con un valor de 1, siendo este el factorial de 0
        int n = 1;//se declara la variable n para el ciclo while, se inicializa en 0, se evalua si n es menor que numero y se incrementa en 1
        while (n <= numero)
        {
            resultado *= n;
            n++;
        }//fin del while
        return resultado;
    }//fin del if
}//fin de la función Factorial

/*se crea la función Sumatoria con cuatro parámetros de tipo entero, k, n, resultado y de tipo flotante limite que se encarga de hacer
la sumatoria necesaria para hallar cada termino de la serie */
float Sumatoria( int k, int n, int limite, float resultado )
{
    do{
        resultado += ( pow( k, n ) / Factorial( k ) );
        k++;
    }
    while( k <= limite );

    //se multiplica el resultado de la sumatoria por 1/e para obtener el termino de la serie ( e = numero euler )
    return ( resultado * ( 1 / 2.718281828459045235 ) );

}//fin de la función Sumatoria

int main()
{
    int cantidadDeTerminos = 0;//se declara la variable cantidadDeTerminos de tipo entero con un valor conocido
    
    printf( "El siguiente programa presenta la serie de Bell: B(n) = 1/e * Σ(k=0, ∞) (k^n/k!),\ndonde B(0) = 1 y B(1) = 1." );
    printf( "\nIngrese el número de términos que desea: " );
    scanf( "%i", &cantidadDeTerminos );//se le asigna a la variable cantidadDeTerminos el valor ingresado por el usuario
    
    printf( "Los primeros %i términos de la serie de Bell son: ", cantidadDeTerminos );
    
    //se declara la variable i para el ciclo while, se inicializa en 0, se evalua si i es menor que cantidadDeTerminos y se incrementa en 1
    int i = 0;
    do{

        printf( "%g, ", Sumatoria( 0, i, 100, 0 ) );//se llama a la funcion sumatoria para hallar el termino de la serie
                //se usa el formato %g para que el resultado sea redondeado y no se imprima con valores decimales
        i++;
    }
    while ( i < cantidadDeTerminos);
    return 0;
}