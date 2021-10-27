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

        if (aux < 0) { //Si es negativo rompo el for
            break;
        } else { // 1 ing 2 => prod = 1 * 2 * 4 * 10 // (-1) Salgo del programa informando
            prod = prod * aux;
        }
    }  
    printf("El producto es: %d\n", prod);
}