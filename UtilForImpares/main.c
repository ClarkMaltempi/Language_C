#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <conio.h>
#define Ptr setlocale(LC_ALL,"Portuguese");


/*
    1.	Faça um programa que exiba os números ímpares de 50 até 150.Utilize o laço for.

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
