/* 
Programa: Ej01_Buc.c
Descripción: Ingresar 10 números e informar el número máximo.
Autor: Daniel Benitez
Modificó:
*/
#include <stdio.h>


int main() {
    int aux;
    int max = -9999;

    for(int i = 0; i < 10; i++) {
        printf("Ingrese un Numero: ");
        scanf("%d", &aux);
        if (aux > max) {
            max = aux;
        }
    }
    printf("El máximo es: %d\n", max);
    printf("Fin\n");

    return 0;
}