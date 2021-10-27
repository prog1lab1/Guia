/* 
Programa: Ej04_Buc.c
Descripción:Ingresar números, sumarlos. Se termina cuando se ingresó un 0, informar la cantidad de
datos ingresados y los números múltiplos de 3.
Autor: Daniel Benitez
Modificó:
*/
#include <stdio.h>

int main() {
    //Creación de variables
    int cantMultTres;
    int sum;
    int aux;
    int cont;

    //Inicializo los contadores
    cantMultTres = 0;
    cont = 0;
    //Inicializo el sumador
    sum = 0;
    //Comienzo el ciclo     
    for(;;) {
        printf("Ingrese un número (0 para terminar): ");
        scanf("%d", &aux);

        if (aux == 0) { //Ingreso un 0 termino el proceso
            break;
        } else {
            cont = cont + 1;    //contador de numeros ingresados cont = cont + 1;
            sum = sum + aux;    //sumador sum += aux
            if (aux % 3 == 0) {
                cantMultTres++; //contador de multiplos de tres
            }
        }
    }
    //Informo resultados
    printf("La cantidad de numero ingresados fueron: %d\n", cont);
    printf("La suma es: %d\n", sum);
    printf("La cantidad de numeros multiplos de tres fueron: %d\n", cantMultTres);
}