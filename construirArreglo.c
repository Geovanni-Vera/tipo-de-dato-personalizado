/* construirArreglo.c*/
#include "persona.h"

persona *construirArreglo(int n)
{

persona *x;
x=(persona *)calloc(n,sizeof(persona));
if (x==NULL) 
    {
        printf ("Error, no hay memoria disponible!'\n'");
        exit (1);
    }

    return x;

}