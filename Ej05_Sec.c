/*
    Programa: Ej05_Sec.c
    Descripción: Ingresar tres números, informar su promedio.
    Autor: Daniel Benitez
    Modificó:
*/
#include<stdio.h>


int main() {
    //Definición de Variable
    int numeroA, numeroB, numeroC;
    float promedio;
    //Entrada de datos
    printf("Ingrese el primer numero:");
    scanf("%d", &numeroA);
    printf("Ingrese el segundo numero:");
    scanf("%d", &numeroB);
    printf("Ingrese el último numero:");
    scanf("%d", &numeroC);
    //Calculo del promedio
    promedio = (numeroA + numeroB + numeroC) / 3;
    
    //Salida de datos
    printf("El promedio es: %f \n", promedio);
}