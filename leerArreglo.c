/* leerArreglo.c */

#include "persona.h"
void leerCadena(char[], int);

void leerArreglo (int n, persona *arr)
{

    char str[128];
    int i ='\n';
    for (i=0; i<n; i++) 
        {

            printf ("Registro #%d:\n", i+1);
            printf ("Nombre: ");
            leerCadena(arr[i].nombre, 128);
            printf("Edad: ");
            leerCadena (str, 128);
            arr[i].edad=(int)atoi (str);
        }

}
