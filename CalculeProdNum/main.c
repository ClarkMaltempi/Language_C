#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <conio.h>
#define Ptr setlocale(LC_ALL,"Portuguese");
/*
    8.	Faça um programa em C que solicite ao usuário a quantidade de termos representada pela variável X
        que representa a quantidade de termos que o usuário deseja. H representa cada um desses números, calcule o produto dos X números.
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
        printf(" %iº numero = %i\n\n",cont,h);

        prod *=h;
    }
    printf(" \n\n**O Produto dos numeros: %i\n",prod);



    return 0;

}

