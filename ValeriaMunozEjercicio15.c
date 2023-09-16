/*

- while ejercicio 15

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

int ValidarNumero( int numero )
{
    if( numero < 0 )
    {
        printf( "El número ingresado es negativo, ingrese un número positivo: " );
        scanf( "%i", &numero );
        ValidarNumero( numero );
    }
    else
        return numero;
}

int main()
{
    long long int factorial = 1;
    int numero = 0, contador = 1, sumaFactorial = 0;

    printf( "El siguiente programa lee un número entero, no negativo y muestra el\nfactorial del numero ingresado.\nIngrese por favor el numero: " );
    scanf( "%i", &numero );

    numero = ValidarNumero( numero );

    if( numero != 0 )
        do{
            sumaFactorial += factorial;
            factorial *= contador;
            contador++;
        } while( contador <= numero );

    printf( "El factorial de %i es %i", numero, factorial );
}