#include <stdlib.h>
#include <stdio.h>

int menu = 1;

int main()
{
    while (menu != 0)
    {
    // Variables a utilizar en el programa
    int numero=0;
    int divisores=0;
    int primo=0; // El entero "primo" lo inicializamos a 0, para definir que "1" es equivalente a "no primo"
    do
    {
        printf ("\nIdentificador de numeros primos\n");
        printf("\n\nIngrese un numero: ");
        scanf(" %d",&numero); //Escaneamos los valores ingresados en el teclado y los guardamos en la variable numero
        if(numero == 0)
        {
            printf ("\nLa operacion no es realizable con cero\n");
        }
        if(numero != -1 && numero > 0) //Verificamos que el numero no sea negativo y que sea mayor que cero
        {
            primo = 0; //Regresamos siempre el valor de la variable a 0 al iniciar el ciclo
            divisores = 2; //Definimos que el maximo de divisores para el nummero a verificar sean solo 2
            while(divisores < numero  && primo != 1) /* Mientras se cumpla que la cantidad almacenada en divisores sea menor que el numero ingresado y que
            primo sea distinto de 1, se repetira el ciclo, debido a que si primo es igual a 1, significa que el numero no es primo, la operacion es una negacion */
            {
                if(numero % divisores == 0) primo=1;
                divisores++; /* si el residuo de la division entre la cantidad de divisores y el numero ingresado es igual 0, el valor de primo pasa a 1, lo que
                el numero no es primo */
            }
            // Si primo vale 0 es que el numero es primo
            if (primo == 0)
            {
                printf("\nEl numero %d es primo\n",numero);
            }
            else
            {
                printf("\nEl numero %d no es primo",numero);
            }
        }
    } while (numero != -1);
    }
    return 0;
}