#include <stdio.h>
#include <math.h>

void main (void)
{
    int num;
    printf ("Ingrese el numero:  ");
    scanf ("%d", &num);
    if (num == 0)
        printf ("\nNulo");
    else
        if (pow (-1, num) > 0 );
        printf ("\nPar");
        else
        printf ("\nImpar\n");
    system ("pause");
    return 0;
}