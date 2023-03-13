/*leerCadena.c*/
#include <stdio.h>

void leerCadena(char a[], int b)
{
    int ch, i=0;

    while(( ch = getchar() ) != '\n' )
    {
        a[i++] = (char)ch;
        if (i==(b-1)) 
            break;
    }

    a[i]='\0';
}