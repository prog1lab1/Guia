/* 
Programa: Ej01_fun.c
Descripción: Realizar un programa que lea los lados a,b,c de un triangulo y Realizar una función que
informe si conforman triangulo.
Autor: Daniel Benitez
Modificó:
*/
#include<stdio.h> //comentario

int formanTriangulo(int a, int b, int c);
int ingreso();

int main() {
    int l1, l2, l3; 
    int lados[3];

    l1 = ingreso();
    l2 = ingreso();
    l3 = ingreso();

    if( formanTriangulo(l1, l2, l3) != 0 ) { //Si es distinto 0
        printf("Forman un triangulo\n");        
    } else {
        printf("No forman un triangulo\n");
    }
}

int formanTriangulo(int a, int b, int c) {
    int res = 0; //falso
    if(((a + b) > c) && ((a + c) >b) && ((b + c) >a)) {
        res = 1; //verdadero
    }
    return res;    

//    return ((a + b) > c) && ((a + c) >b) && ((b + c) >a)
}

int ingreso() {
    int var;
    printf("Ingrese el valor del lado\n");
    scanf("%d", &var);
    return var;
}