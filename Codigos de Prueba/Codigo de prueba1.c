#include <stdio.h>

void main (void)
{
    float PRO;
    printf ("Ingrese el promedio del alumno: ");
    scanf ("%f", &PRO);
    if (PRO >= 6)
    printf ("\nAprobado\n");
    else
    printf("\nReprobado\n");
    system("pause");
    return("0");
}