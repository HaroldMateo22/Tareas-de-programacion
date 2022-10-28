#include <stdio.h>
#include <stdlib.h>

float arreglo[5];
int cont = 0;
int n = 5;
float tmp = 0.0;

int main (void)
{
    while ( n != 0 )
    {
        tmp = 0.0;
        cont = 0;
        while(cont < n)
        {
            printf("\nInsertar el numero %d: ",cont+1);
            scanf("%f",&tmp);
            arreglo[cont] = tmp;
            cont++;
        }
        for(cont = 0, tmp = 0; cont<n; cont++)
        {
            tmp += arreglo[cont];
        }
        printf("\nPromedio es: %f",tmp/n);
        printf("\n\n");
    }
    getchar();
    return 0;
}