/* 
Programa: Ej05_Buc.c
Descripción:Realizar un Programa q implemente el Producto de Wallis para hallar una aproximación
del Numero PI
Autor: Daniel Benitez
Modificó:
*/
#include <stdio.h>

int main() {
    //Creación de variables
    float resultado;  
    int limite;  
    float aux;
    float num;

    //Inicializo el acumulador 
    resultado = 1.0; //Al ser una multiplicación el valor neutro es 1
    
    //Comienzo el ciclo 
    printf("Ingrese la cantidad de iteraciones \n");
    scanf("%d", &limite);
    for(int n = 1; n <= limite; n++) {
        printf("valor de resultado parcial %f\n", resultado);
        num = 2.0*n;
        printf("2*n %f\n", num);
        aux = ((num*num) / ((num-1)*(num+1)));
        printf("el calculo de la formula es: %f\n", aux);
        resultado = resultado * aux;        
    }
    //Informo resultados
    printf("La aproximacion es: %f\n", resultado);
    printf("El aprox de PI: %f\n", (resultado*2.0));  // PI / 2.... resultado * 2
}