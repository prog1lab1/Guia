#include<stdio.h>

int main() {
    int n;

    //Ingreso de numeros a analizar..Usuario
    printf("Ingrese la cantidad de numeros a analizar\n");
    scanf("%d", &n);

    for(int i=2; i <= n; i++) {
        if (i == 2) {
            printf("2 es primo\n");
        } else {
            for(int j = 2; j <= i; j++) {
                if (i % j == 0) {
                    if (i == j) {
                        printf("%d es primo\n", i);                       
                    } else {
                        break;
                    }
                }
            }
        }
    }
}