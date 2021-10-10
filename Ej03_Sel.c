/*
    Programa: Ej03_Sel.c
    Descripción: Ingresar un número y determinar si pertenece al intervalo -2 < x < 4
    Autor: Daniel Benitez
    Modificó:
*/
#include<stdio.h>

int main() {
    //Declaracion de Variables
    float numero;
    //Entrada de Datos
    printf("Ingrese el valor del numero: ");
    scanf("%f", &numero);
    //Seleccion 
    if ((-2 < numero) && ( numero < 4)) {
        printf("El numero pertenece al intervalo -2 < x < 4\n");
    } else {
        printf("El numero no pertenece al intervalo -2 < x < 4\n");
    }
}