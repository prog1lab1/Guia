/*
    Programa: Ej04_Sel.c
    Descripción: Ingresar un número e informar si es múltiplo de 7.
    Autor: Daniel Benitez
    Modificó:
*/
#include<stdio.h>

int main() {
    //Declaracion de Variables
    int numero;
    //Entrada de Datos
    printf("Ingrese el valor del numero: ");
    scanf("%d", &numero);
    //Seleccion 
    if (numero % 7 == 0) {
        printf("El numero es multiplo de 7");
    } else {
        printf("El numero no es multiplo de 7\n");
    }
}