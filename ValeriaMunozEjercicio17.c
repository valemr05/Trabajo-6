#include <stdio.h>

int  main()
{
    printf( "Parejas de enteros: \n" );
    int fila1=0, fila2=1, contadorFila2=1;//se declaran las variables fila1, fila2 y contadorFila2 para el programa, fila1 para el primer valor de la pareja, fila2 para el segundo valor de la pareja y contadorFila2 para contar las veces que se imprime el valor de fila2

    do{
        if ( contadorFila2 < 2 ){ 
            printf( "%i %i\n", fila1, fila2 );
            fila1++;//se aumenta el valor de fila1 en 1
            contadorFila2++;//se aumenta el valor de contadorFila2 en 1
        }//de lo contrario
        else{
            printf( "%i %i\n", fila1, fila2 );
            fila1++;//se aumenta el valor de fila1 en 1
            fila2++;//se aumenta el valor de fila2 en 1
            contadorFila2--;//se disminuye el valor de contadorFila2 en 1
        }//fin del if contadorFila2 < 2
    }//fin del while fila1 <= 9
    while( fila1 <= 9 );
    return 0;
}