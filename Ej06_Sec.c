/*
    Programa: Ej06_Sec.c
    Descripción: Ingresar dos valores numéricos que corresponden a un horario expresados horas y
minutos, convertirlo a minutos. Mostrar el resultado.
    Autor: Daniel Benitez
    Modificó:
*/
#include<stdio.h>


int main() {
    //Definición de Variable
    int horas, minutos;
    int totalEnMinutos;
    //Entrada de datos
    printf("Ingrese las horas:");
    scanf("%d", &horas);
    printf("Ingrese los minutos:");
    scanf("%d", &minutos);
    //Calculo del promedio
    totalEnMinutos = (horas * 60) + minutos;
    
    //Salida de datos
    printf("El total en minutos es: %d \n", totalEnMinutos);
}