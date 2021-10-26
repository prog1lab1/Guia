/*
    Programa: Ej07_Buc.c
    Descripción: Escribir un Programa q obtenga la Media de las Notas obtenidas por un alumno. Se
pueden introducir hasta 4 notas entre 0 y 100 y 
luego imprimir por teclado la Media y la Categoría.
    Autor: Daniel Benitez
    Modificó:
*/
#include<stdio.h>

int main() {
    int num;
    int sum, cont, media;

    sum = 0;
    cont = 0;
    
    printf("Ingrese una nota (-1 para finalizar):\n");
    scanf("%d", &num);        
    while (num != -1) {
        sum = sum + num;
        cont++;
        printf("Ingrese una nota (-1 para finalizar):\n");
        scanf("%d", &num);
    }

    media = sum / cont;
    printf("La media es: %d\n", media);
    
    switch(media) {
        case 90 ... 100:
            printf("Categoría A\n");
            break;
        case 80 ... 89:
            printf("Categoría B\n");
            break;
        case 70 ... 79:
            printf("Categoría C\n");
            break;
        case 60 ... 69:
            printf("Categoría D\n");
            break;
        case 0 ... 59:
            printf("Categoría E\n");
            break;
        default:
            printf("Fuera de rango\n");
    }
}