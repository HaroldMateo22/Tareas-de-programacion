#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    double numero; 
	printf("Escribe un numero y te dire su raiz cuadrada\n");
	scanf("%lf", &numero); 
	double raizCuadrada = sqrt(numero); 
	printf("La raiz cuadrada de %lf es %lf\n", numero, raizCuadrada);
    system ("pause");
	return 0;
}
