/*
    Programa: Ej08_Sel.c
    Descripción: Lea 3 Números por teclado y descubra si Uno de ellos, es la suma de los otros Dos. Debe
informarlo por pantalla indicado qué Numero es la suma de los otros dos.
    Autor: Daniel Benitez
    Modificó:
*/
#include <stdio.h>

int main() 
{
    //Declaración de variables
    int a, b, c;

    //Entrada de datos
    printf("Ingrese el valor de a:\n");
    scanf("%d",&a);
    printf("Ingrese el valor de b:\n");
    scanf("%d",&b);
    printf("Ingrese el valor de c:\n");
    scanf("%d",&c);


    if ((a + b) == c) {
        printf("a + b = c ");
    }
    if ((a + c) == b) {
        printf("a + c = b ");
    }
        if ((c + b) == a) {
        printf("b + c = a ");
    }

    return 0;
}