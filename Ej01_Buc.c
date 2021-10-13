/* Programa: Ej01_Buc.c
Descripción: Ingresar 10 números e informar el promedio.
Autor: Daniel Benitez
Modificó:
*/
#include<stdio.h>

int main() {
    int sum, prom;
    int aux;

    sum = 0;
    puts(".");

    for(int i=0;i < 10; i++) {
        printf("Ingrese el numero %d:", i);
        scanf("%d", &aux );

        sum = sum + aux;
    }
    puts("..");


    prom = sum / 10;
    printf("El promedio es %d", prom);

    return 0;
}