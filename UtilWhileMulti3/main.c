#include <stdio.h>
#include <stdlib.h>

/*
    4.	Faça um programa que exiba os números que são múltiplos de 3 e são ímpares.
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
