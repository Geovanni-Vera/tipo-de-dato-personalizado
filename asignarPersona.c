#include "persona.h"

void leerCadena(char[],int);

void asignarPersona(persona *y)
{
    char str[128];
    printf("Escriba el nombre de la persona ...\n");
    leerCadena(str,128);
    strcpy(y->nombre,str);
    printf("Escriba la edad de la persona ... \n");
    leerCadena(str,128);
    y->edad=(int)atoi(str);
}