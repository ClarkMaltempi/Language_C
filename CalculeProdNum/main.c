#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <conio.h>
#define Ptr setlocale(LC_ALL,"Portuguese");
/*
    8.	Fa�a um programa em C que solicite ao usu�rio a quantidade de termos representada pela vari�vel X
        que representa a quantidade de termos que o usu�rio deseja. H representa cada um desses n�meros, calcule o produto dos X n�meros.
        OBS: H deve ser maior ou igual a 15.
*/


int x,h,cont,prod=1;


void Mzero()
{
    if(x<=0)
    {
        printf("Quantidade deve ser maior que 0\n");
        system("pause");
        system("cls");
        return main();
    }
}

void Mquinze()
{
    if(h<15)
    {
        printf(" Numero deve ser maior que 15\n");
        system("pause");
        system("cls");
        return main();
    }
}


main()
{
    setlocale(LC_ALL,"");

        printf(" Digite a quantidade que deseja: ");
        scanf("%i",&x);
        Mzero();

    for(cont=1;cont<=x;cont++)
    {
        printf(" Digite o numero: ");
        scanf("%i",&h);
        Mquinze();
        printf(" %i� numero = %i\n\n",cont,h);

        prod *=h;
    }
    printf(" \n\n**O Produto dos numeros: %i\n",prod);



    return 0;

}

