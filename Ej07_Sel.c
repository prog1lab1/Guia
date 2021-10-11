/*
    Programa: Ej07_Sel.c
    Descripción: Ingresar 4 números enteros e imprimirlos de Menor a Mayor.
    Autor: Daniel Benitez
    Modificó:
*/
#include <stdio.h>

int main() {
    //Declaración de Variables
    int a, b, c, d;
    int aux; //variable auxiliar para el intercambio
    //Entrada de datos por parte del usuario
    printf("Ingrese el valor de 'a':");
    scanf("%d", &a);
    printf("Ingrese el valor de 'b':");
    scanf("%d", &b);
    printf("Ingrese el valor de 'c':");
    scanf("%d", &c);
    printf("Ingrese el valor de 'd':");    
    scanf("%d", &d);
    //Proceso de ordenamiento
    if (a>b)
    {   //intercambiamos
        aux = a;
        a = b;
        b = aux;
    }
    if (a>c)
    {
        aux = a;
        a = c;
        c = aux;
    }
    if (a>d) 
    {
        aux = a;
        a = d;
        d = aux;
    }
    if (b>c)
    {
        aux = b;
        b = c;
        c = aux;
    }
    if (b>d) 
    {
        aux = b;
        b = d;
        d = aux;
    }
    if (c>d) 
    {
        aux = c;
        c = d;
        d = aux;
    }
    // Muestro los datos ordenados
    printf("Los datos ordenados son: %d %d %d %d\n", a, b, c, d);


    return 0;
}