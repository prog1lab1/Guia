/* 
Programa: Ej03_Buc.c
Descripción: Ingresar datos finalizando con un número negativo, informar el producto.
Autor: Daniel Benitez
Modificó:
*/
#include <stdio.h>

int main() {
    int prod;
    int aux;

    prod = 1;
    for(;;) {
        printf("Ingrese un número (negativo para terminar): ");
        scanf("%d", &aux);

        if (aux < 0) {
            break;
        } else {
            prod = prod * aux;
        }
    }
    printf("El producto es: %d\n", prod);
}