#include <stdio.h>
#include <stdlib.h>

/*
    3.	Fa�a um programa que exiba os n�meros que s�o m�ltiplos de 5 entre 1 e 100. Utilize o la�o while.

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
