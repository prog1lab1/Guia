/*
    Programa: Ej02_Sec.c
    Descripción: Dadas la base y altura de un rectángulo imprimir su superficie.
    Autor: Daniel Benitez
    Modificó:
*/
#include <stdio.h>

int main()
{
    int base;
    int altura;
    int superficie;

    //Entrada de Datos
    printf("Ingrese la base del Triángulo:");
    scanf("%d", &base);
    printf("Ingrese la altura del Triángulo:");
    scanf("%d", &altura);

    //Cálculo de la superficie
    superficie = (base * altura) / 2;

    printf("La superficie del Triángulo es: %d", superficie);
}