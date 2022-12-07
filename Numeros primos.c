#include <stdio.h>
#include <stdlib.h>

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
        if(numero != -1 && numero > 0) //Verificamos que el numero no sea negativo y que no sea menor que cero
        {
            primo=0;
            divisores=2;
            while(divisores<numero  && primo!=1)
            {
                if(numero%divisores==0) primo=1;
                divisores++;
            }
            // Si primo vale 0 es que el numero es primo
            if (primo==0)
            {
                printf("\nEl numero %d es primo\n",numero);
            }
            else
            {
                printf("\nEl numero %d no es primo",numero);
            }
        }
    } while(numero!=-1);
    }
    return 0;
}