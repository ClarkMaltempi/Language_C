#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <conio.h>
#define Ptr setlocale(LC_ALL,"Portuguese");
/*
    6.	Fa�a um programa em C que solicite ao usu�rio a quantidade de termos que ele deseja exibir da seguinte sequ�ncia: 1/4, 1/8, 1/12, 1/16, 1/20,...
    Obs.: Crie uma fun��o para garantir que essa quantidade deve ser deve ser maior que zero e representada pela vari�vel K.
*/
int k,cont,num=1,den=0;

void Mzero()
{
    if(k<0)
    {
        printf("Quantidade deve ser maior que zero\n");
        system("pause");
        system("cls");
        return main();
    }
}


main()
{
    setlocale(LC_ALL,"");
    do{
        printf("Digite a quantidade>0 da segu�ncia: 1/4, 1/8, 1/12, 1/16, 1/20,...\n");
        scanf("%i",&k);
        Mzero();

    }while(k<=0);
    for(cont=1;cont<=k;cont+=1)
    {
        num=1;
        den+=4;
        printf("%d/%d\n",num,den);
    }
}

