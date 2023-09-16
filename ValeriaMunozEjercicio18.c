#include <stdio.h>

int  main()
{
    printf( "Ternas: \n" );

    int fila1=1, fila2=1, fila3=1;//se declaran las variables fila1, fila2 y contadorFila2

    do {
        printf( "%i %i %i\n", fila1, fila2, fila3 );
        fila1++;
        fila3++;

        if( ( fila1 % 3 ) ==  0 ) {
            printf( "%i %i %i\n", fila1, fila2, fila3 );
            fila1++;
            fila2++;
            fila3=1;
        }     
        
    } while( fila1 <= 9);
    
    return 0;
}