/*
    Programa: Ej05_Sel.c
    Descripción: Ingresar 4 números enteros e imprima el Mayor de todos.
    Autor: Daniel Benitez
    Modificó:
*/
#include<stdio.h>

int main() {
    //Declaracion de Variables
    int numeroA, numeroB, numeroC, numeroD;
    int mayor;
    //Entrada de Datos
    printf("Ingrese el valor del primer numero: ");
    scanf("%d", &numeroA);
    printf("Ingrese el valor del segundo numero: ");
    scanf("%d", &numeroB);
    printf("Ingrese el valor del tercer numero: ");
    scanf("%d", &numeroC);
    printf("Ingrese el valor del ultimo numero: ");
    scanf("%d", &numeroD);
    //Seleccion 
    mayor = numeroA;

    if (mayor < numeroB) {
        mayor = numeroB;
    }

    if (mayor < numeroC) {
        mayor = numeroC;
    }

    if (mayor < numeroD) {
        mayor = numeroD;
    }

    printf("El mayor es: %d", mayor);
}