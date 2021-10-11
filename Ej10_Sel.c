/*
    Programa: Ej10_Sel.c
    Descripción: Ingresar un Dígito por teclado, del 0 al 10, e imprimirlo en Letras: Si Ingreso 1, imprimir
“Uno”, si ingreso 2, imprimir “Dos”, y así sucesivamente.
    Autor: Daniel Benitez
    Modificó:
*/
#include <stdio.h>

int main()
{
    int n;

    printf("Ingrese un número: ");
    scanf("%d", &n);

    switch (n)
    {
    case 0:
        printf("Cero\n");
        break;
    case 1:
        printf("Uno\n");
        break;
    case 2:
        printf("Dos\n");
        break;
    case 3:
        printf("Tres\n");
        break;
    case 4:
        printf("Cuatro\n");
        break;
    case 5:
        printf("Cinco\n");
        break;
    case 6:
        printf("Seis\n");
        break;
    case 7:
        printf("Siete\n");
        break;
    case 8:
        printf("Ocho\n");
        break;
    case 9:
        printf("Nueve\n");
        break;
    case 10:
        printf("Diez\n");
        break;
    default : printf("No es número es un numero válido vuelva a intentarlo!\n");
    }
}