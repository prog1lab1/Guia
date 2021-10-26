/*
    Programa: Ej02_Sec.c
    Descripción: Dadas la base y altura de un rectángulo imprimir su superficie.
    Autor: Daniel Benitez
    Modificó:
*/
#include <stdio.h>

#define PI 3.14159  //Constante

int main()
{
    int base;
    int altura;
    int superficie;

    //Entrada de Datos
    printf("Ingrese la base del rectángulo:");
    scanf("%d", &base);
    printf("Ingrese la altura del rectángulo:");
    scanf("%d", &altura);

    //Cálculo de la superficie
    superficie = (base * altura);

    printf("La superficie del rectángulo es: %d", superficie);
}