/* ejemplo-08.c */

#include "persona.h"

//prototipos
persona *construirArreglo(int);
void leerArreglo(int, persona*);
void imprimirArreglo(int, persona*);
void destruirArreglo(persona*);

int main(void)
{
 //crear una referencia a variables de tipo persona
   persona *x;
 //solicitar memoria dinámica para crear un arreglo
   printf ("Construyendo el arreglo... \n");
   x=(persona*) construirArreglo (3);

 //asignar valores a los elementos del arreglo
   printf ("Escriba los datos...\n");

   leerArreglo(3,x);

   //imprimir valores a los elementos del arreglo
   printf("Los datos almacenados son:\n");
   imprimirArreglo (3,x);

   //liberar la memoria dinámica solicitada

   printf ("Destruyendo el arreglo... \n");

   destruirArreglo (x);

    //finalizar el programa

    return 0;

}