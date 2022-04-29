#include <stdio.h>
#include <stdlib.h>

/*
    3.	Faça um programa que exiba os números que são múltiplos de 5 entre 1 e 100. Utilize o laço while.

*/

int main()
{
    int cont;

    cont=0;
    do
    {
        cont+=5;
        printf("num=%d\n",cont);

    } while (cont<100);

    return 0;
}
