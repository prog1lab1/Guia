#include <stdio.h>
#define PI 3.1416

int main()
{

    float b, a, diam, r;
    float sup;
    float cir;

    printf("Ingrese la base: \n");
    scanf("%f", &a);
    printf("Ingrese la altura: \n");
    scanf("%f", &b);
    printf("Ingresar el diametro de una circunferencia: \n");
    scanf("%f", &diam);

    r = diam / 2;
    sup = b * a / 2;
    cir = (PI * r * r);

    if (sup > cir)
    {
        printf("El triangulo es el de mayor superficie");
    }
    else {
        printf("El circulo es el de mayor superficie");
    }
}