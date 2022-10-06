#include <stdio.h>
#include <math.h>

void main (void)
{
    int OP, T;
    float RES;
    printf ("ingrese el valor del calculo y el valor entero: \n");
    scanf ("%d", &OP, &T);
    switch (OP)
    {
        case 1: RES = T / 5;
            break;
        case 2: RES = pow(T,T);
            break;
        case 3: RES = 6 * T/2;
            break;
        default: RES = 1;
            break;
    }
    printf ("\nRresultado:   %7.f\n",  RES);
    system ("pause");
    return 0;
}