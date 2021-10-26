/*
    Programa: Ej06_Buc.c
    Descripción: Calcular el Factorial de 
    un número leído por teclado e informar si es primo.
    Autor: Daniel Benitez
    Modificó:
*/
#include<stdio.h>

int main() {
    int factorial;
    int num, i, divisible;

    printf("Ingrese el numero a calcular\n");
    scanf("%d", &num);
    
    factorial = 1;    
    if(num != 0) {
        for(i = 1; i <= num; i++) {
            factorial = factorial * i;
        }    
    }
    printf("El factorial es: %d\n", factorial);

    //Ahora averiguo si es primo
    if (num == 0 || num == 1 || num == 4) {
        printf("El numero %d no es primo", num);
    } else {
        for (int x = 2; x < (num / 2); x++) {
            if (num % x == 0) {
                divisible = 1;
                break;                
            } else {
                divisible = 0;
            }
        }
        if (divisible == 0) {
                printf("El numero %d es primo", num);
        } else {
                printf("El numero %d no es primo", num);
        }
    }

    return 0;
}