/*
    Programa: Ej09_Sel.c
    Descripción: Construir un programa que permita ingresar un Nro por teclado y nos diga: Si es
positivo, igual q cero o negativo y si es par o impar.
    Autor: Daniel Benitez
    Modificó:
*/
#include <stdio.h>

int main()
{
    int n;

    printf("Ingrese un número: ");
    scanf("%d", &n);

    if (n == 0)
    {
        printf("El número es 0\n");
    }
    else
    {
        if (n > 0)
        {
            printf("El número es positivo\n");
        }
        else
        {
            printf("El número es negativo\n");
        }
        if (n % 2 == 0)
        {
            printf("El número es par\n");
        }
        else
        {
            printf("El número es impar\n");
        }
    }
}