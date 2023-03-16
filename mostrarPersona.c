#include "persona.h"

void mostrarPersona(persona *y)
{
    printf("Los datos almacenados de la persona son ... \n");
    printf("Nombre: %s\n",y->nombre);
    printf("Edad: %d\n",y->edad);
}