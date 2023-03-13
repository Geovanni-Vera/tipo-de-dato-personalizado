/*ImprimirArreglo*/

#include "persona.h"

void imprimirArreglo(int n, persona *arr)
{
    persona *ptr;
    int i;
    for(i = 0;i < n;i++)
    {
        ptr = &arr[i];
        printf("Registro # %d:\n",i+1);
        printf("Nombre: %s\n",ptr->nombre);
        printf("Edad: %d\n",ptr->edad);
    }
}