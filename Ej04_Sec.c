/*
    Programa: Ej04_Sec.c
    Descripción: Ingresar tres números, informar su suma y producto.
    Autor: Daniel Benitez
    Modificó:
*/
#include<stdio.h>


int main() {
    //Definición de Variable
    int numeroA, numeroB, numeroC;
    int suma;
    int producto;
    //Entrada de datos
    printf("Ingrese el primer numero:");
    scanf("%d", &numeroA);
    printf("Ingrese el segundo numero:");
    scanf("%d", &numeroB);
    printf("Ingrese el último numero:");
    scanf("%d", &numeroC);
    //Calculos de suma y producto
    suma = numeroA + numeroB + numeroC;
    producto = numeroA * numeroB * numeroC;
    
    //Salida de datos
    printf("El producto es: %d \n", producto);
    printf("La suma es: %d \n", suma);
}