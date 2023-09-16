#include <stdio.h>

//Se crea la función VerificarResultados, que recibe como parámetros los contadores de cada requisito y realiza el conteo de cada uno de ellos
int VerificarResultados( int numero, int *contador, int *mayor, int *menor, int *negativos, int *positivos, int *sumaPositivos, int *mayores150 )
{   //se verifica si el numero ingresado es mayor a 150, si es así se aumenta el contador de mayores150
    if( numero > 150 ){
        (*mayores150)++;
    }//se verifica si el numero ingresado es mayor al numero mayor, si es así se cambia el valor de mayor por el numero ingresado
    if( numero > *mayor ){
        *mayor = numero;
    }//se verifica si el numero ingresado es menor al numero menor, si es así se cambia el valor de menor por el numero ingresado
    if( numero < *menor ){
        *menor = numero;
    }//se verifica si el numero ingresado es menor a cero, si es así se aumenta el contador de negativos
    if( numero < 0 ){
        (*negativos)++;
    }//se verifica si el numero ingresado es mayor a cero, si es así se aumenta el contador de positivos
    if( numero > 0 ){
        (*positivos)++;
    }//se verifica si el numero ingresado es mayor a cero, si es así se suma el numero ingresado al contador de sumaPositivos
    if( numero > 0 ){
        (*sumaPositivos) += numero;
    }

    return 0;
}//fin de la función VerificarResultados

//se crea la función ValidarNumero con un parámetro de tipo entero, numero
int ValidarNumero( int numero )
{   //se verifica si el numero es entero positivo
    while( numero == 0 )
    {
        printf( "El número no puede ser cero.\nIngrese un número: " );
        scanf( "%i", &numero );//se le asigna a la variable numero el valor ingresado por el usuario
    }//fin del while

    return numero;
    
}//fin de la función ValidarNumero

int main()
{   
    printf( "Este programa lee desde el teclado un grupo de 75 números, diferentes a cero e imprime:\n* Cantidad de números Mayores a 150\n* Número mayor y número menor encontrado en el grupo\n* Cantidad de Números negativos encontrados\n* Promedio de los Positivos Encontrados.\n" );

    int numero=0, contador=0, numeroMayor=0, numeroMenor=__INT_MAX__, negativos=0, positivos=0, sumaPositivos=0, mayores150=0; //se crean las variables numero y contador de tipo entero con un valor conocido

    while( contador < 5 )
    {
        printf( "Ingrese un número: " );
        scanf( "%i", &numero );

        numero = ValidarNumero( numero );//se llama a la función ValidarNumero para verificar si el numero es diferente de cero
        
        //se llama a la función VerificarResultados para que realice el conteo de cada requisito
        VerificarResultados( numero, &contador, &numeroMayor, &numeroMenor, &negativos, &positivos, &sumaPositivos, &mayores150 );

        contador++;
    }//fin del while

    //se crean las variables sumaPositivosFloat y positivosFloat de tipo flotante porque que el resultado de la división puede ser un número decimal
    float sumaPositivosFloat = sumaPositivos, positivosFloat = positivos;

    //se llama a la función ImprimirResultados para que imprima los resultados
    printf( "\nCantidad de números mayores a 150: %i", mayores150 );
    printf( "\nNúmero mayor: %i", numeroMayor );
    printf( "\nNúmero menor: %i", numeroMenor );
    printf( "\nCantidad de números negativos: %i", negativos );
    printf( "\nPromedio de los números positivos: %g", ( sumaPositivosFloat / positivosFloat ) );
    
    return 0;
}