/* ejemplo-08.c */

#include "persona.h"

//prototipos
void asignarPersona(persona *);
void mostrarPersona(persona *);

int main(void)
{
 //crear una referencia a variables de tipo persona
  persona *x;
 //solicitar memoria dinámica 
  x=(persona *)malloc(sizeof(persona));
  asignarPersona(x);
  mostrarPersona(x);
  free(x);
  return 0;
}