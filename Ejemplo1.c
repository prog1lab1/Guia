#include<stdio.h> //Funcionalidades de Teclado y Monitor

int main() {

    int i, suma = 0;
    for ( i = 1; i<=100;  i++) {
        suma = suma + i; //0+1; 2+1=3 3+1=4 ...
    }

    printf("%d", suma);
}


