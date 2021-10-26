/*
Programa: MiPrimerArray.c
Descripción: creación e inicialización de un array
Autor: Daniel Benitez
*/
#include <stdio.h>

int main()
{
    //Creación de un array de enteros con 5 elementos
    int v[5];

    //Carga o inicialización de valores al Array
    v[0] = 12;
    v[1] = 23;
    v[2] = 9;
    v[3] = 37;
    v[4] = 31;

    for (int i = 0; i < 5; i++) {
        printf("Elemento %d: %d\n", i, v[i]);
    }

}
