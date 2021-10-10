/*
    Programa: Ej03_Sec.c
    Descripción: Dado el radio de una circunferencia informar su perímetro y superficie.
    Autor: Daniel Benitez
    Modificó:
*/
#include<stdio.h>

#define PI 3.1416

int main() {
    //Definición de Variable
    int radio;
    float superficie;
    float perimetro;
    //Entrada de datos
    printf("Ingrese el radio de la circunferencia:");
    scanf("%d", &radio);
    //Calculos de superficie y perimetro
    perimetro = 2 * PI * radio;
    superficie = PI * radio * radio;
    //Salida de datos
    printf("El perimetro es: %f \n", perimetro);
    printf("La superficie es: %f \n", superficie);
}