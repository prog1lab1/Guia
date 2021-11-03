#include<stdio.h>

int suma(int a, int b);
int dividir(int a, int b);

void main(void)
{
	int x,y,z;
	printf("ingrese numero a sumar:");
	scanf("%d",&x);
	printf("ingrese numero a sumar:");
	scanf("%d",&y);

	z=suma(x,y);
	printf("la suma es %d",z);
	z=dividir(x,y);
	printf("la division es %d",z);
}

int suma (int a, int b)
{
	int total;
	total= a + b;
	return total;
}

int dividir(int j, int x)
{
	int mayor,menor, resultado;
	if( j > x){
		mayor=j;
		menor=x;
	}else{
		mayor=x;
		menor=j;
	}
	if (menor != 0)
	   resultado =  mayor/menor;

    return resultado;
}
