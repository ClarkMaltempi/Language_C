#include <stdio.h>
#include <stdlib.h>

/*
    4.	Fa�a um programa que exiba os n�meros que s�o m�ltiplos de 3 e s�o �mpares.
*/

int main()
{
    int cont,x;

    cont=0;
    do
    {
        cont+=3;
        x = cont%2;
        if(x!=0)
        {
            printf("num=%d\n",cont);
        }

    } while (cont<100);

    return 0;
}
