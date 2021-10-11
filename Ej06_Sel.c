/*
    Programa: Ej06_Sel.c
    Descripción: Ingresar 4 números enteros e imprima el menor de todos.
    Autor: Daniel Benitez
    Modificó:
*/
#include<stdio.h>

int main() {
    //Declaracion de Variables
    int numeroA, numeroB, numeroC, numeroD;
    int menor;
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
    menor = numeroA;

    if (menor < numeroB) {
        menor = numeroB;
    }

    if (menor < numeroC) {
        menor = numeroC;
    }

    if (menor < numeroD) {
        menor = numeroD;
    }

    printf("El menor es: %d", menor);
}