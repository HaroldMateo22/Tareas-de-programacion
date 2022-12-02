#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int num1, num2, num3;
int al1, al2, al3;
int aciertos = 0, premio = 0;
int monto;
double menu = 1;

int main(void)
{
    while (menu != 0)
    {
        printf ("PROGRAMA DE LOTERIA\n\n");
        printf("Ingrese el monto a jugar: \n");
        scanf("%d", &monto);
        if (monto >= 1 && monto <= 10000)
        {
            printf("\ningrese el numero 1: \n");
            scanf("%d", &num1);
            printf("\ningrese el numero 2: \n");
            scanf("%d", &num2);
            printf("\ningrese el numero 3: \n");
            scanf("%d", &num3);
            
            srand(time(NULL));
            al1 = rand() % 11;
            al2 = rand() % 11;
            al3 = rand() % 11;
            
            printf("El primer numero ganador es: %d\n", al1);
            printf("El segundo numero ganador es: %d\n", al2);
            printf("El tercer numero ganador es: %d\n", al3);
            
            
            if (num1 == al1 || num1 == al2 || num1 == al3)
            {
                aciertos = aciertos + 1;
            }
            if (num2 == al1 || num2 == al2 || num2 == al3)
            {
                aciertos = aciertos + 1;
            }
            if (num3 == al1 || num3 == al2 || num3 == al3)
            {
                aciertos = aciertos + 1;
            }
            if (aciertos == 1)
            {
            printf ("Acertaste %d numero\n\n", aciertos);
            }else
            printf ("Acertaste %d numeros\n\n", aciertos);
            aciertos = aciertos + 1;
            if  (aciertos == 2)
            {
                premio = monto * aciertos * 10;
            }
            if  (aciertos == 3)
            {
                premio = monto * aciertos * 20;
            }
            if  (aciertos == 4)
            {
                premio = monto * aciertos * 30;
            }
            aciertos = aciertos - 1;
            if (aciertos >= 1)
            {
                printf ("Ganaste %d pesos\n\n\n\n", premio);
            }else
            {
            printf ("Mejor suerte la proxima\n\n\n\n");
            }
            aciertos = 0;
        }else
        printf ("NO puede jugar esta cantidad\n\n");
    }
    return 0;
}