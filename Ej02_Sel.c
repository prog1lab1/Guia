/*
    Programa: Ej02_Sel.c
    Descripción: Ingresar la base y altura de un triangulo y el diámetro de una circunferencia. informar
cual es el de mayor superficie.
    Autor: Daniel Benitez
    Modificó:
*/
#include<stdio.h>

#define PI 3.1416

int main() {
    //Declaracion de Variables
    float altura, base;
    float diametro;
    float superficieTriangulo;
    float superficieCircunferencia;
    float radio;
    //Entrada de Datos
    printf("Ingrese el valor de la base del Triángulo: ");
    scanf("%f", &base);
    printf("Ingrese el valor de la altura del Triángulo: ");
    scanf("%f", &altura);
    printf("Ingrese el valor del diametro de la circunferencia: ");
    scanf("%f", &diametro);
    //Calculo las superficies
    superficieTriangulo = (base * altura) / 2;
    radio = diametro / 2;
    superficieCircunferencia = PI * radio * radio;

    //Seleccion de respuesta
    if (superficieTriangulo > superficieCircunferencia) {
        printf("La superficie del Triángulo es Mayor que la de la Circunferencia\n");
    } else {
        printf("La superficie de la Circunferencia es Mayor que la del Triangulo\n");
    }
}