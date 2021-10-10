/*
    Programa: Ej01_Sel.c
    Descripción: Ingresar 2 números, si a < b informar a*b , en caso contrario a/b
    Autor: Daniel Benitez
    Modificó:
*/
#include<stdio.h>

int main() {
    //Declaracion de Variables
    float a, b;
    float resultado;
    //Entrada de Datos
    printf("Ingrese el valor de a: ");
    scanf("%f", &a);
    printf("Ingrese el valor de b: ");
    scanf("%f", &b);
    //Esto tiene un problema cual es?
    if (a < b) {
        resultado = a*b;
        printf("a*b: %f", resultado);
    } else {
        resultado = a/b;
        printf("a/b: %f", resultado);
    }
}