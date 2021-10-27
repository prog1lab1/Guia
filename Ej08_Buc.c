/* 
Programa: Ej08_Buc.c
Descripción: Imprimir los primeros N números primos.
Autor: Daniel Benitez
Modificó:
*/
#include<stdio.h>

int esPrimo(int num);

int main() {
    int n, c;
    c = 0;

    printf("Ingrese la cantidad de numero primos deseados\n");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
      if(esPrimo(i)) {
        printf("%d Es primo\n ", i);
      }
    }

    return 0;
}

int esPrimo(int num) {
  int condicion = 0;
  if(num != 0 && num != 1) {
    for(int i = 2; i <= num; i++) {
      if(num % i == 0) {
        if(num == i) {
          return 1;
        } else {
          return 0;
        }
      } 
    }
  } 
  return 0;
}
