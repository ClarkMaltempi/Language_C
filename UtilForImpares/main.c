#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <conio.h>
#define Ptr setlocale(LC_ALL,"Portuguese");


/*
    1.	Fa�a um programa que exiba os n�meros �mpares de 50 at� 150.Utilize o la�o for.

*/
int main()
{
    int i,x;

        for(i=50;i<=150;i++)
        {
            x = i%2;
            if(x != 0)
            {
                 printf("%i\n",i);
            }
        }

    return 0;
}
