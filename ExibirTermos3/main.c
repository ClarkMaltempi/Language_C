#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <conio.h>
#define Ptr setlocale(LC_ALL,"Portuguese");

/*
    7.	Fa�a um programa em C que solicite ao usu�rio a quantidade de termos que ele deseja exibir da seguinte sequ�ncia: 2/5, 4/10, 6/15, 8/20, 10/25, 12/30,...
    Obs.: Crie uma fun��o para garantir que essa quantidade deve ser deve ser maior que zero e representada pela vari�vel K.
.
*/
int k,cont,num,den=0;

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
        printf("Digite a quantidade>0 da segu�ncia: 2/5, 4/10, 6/15, 8/20, 10/25, 12/30,...\n");
        scanf("%i",&k);
        Mzero();

    }while(k<=0);
    for(cont=1;cont<=k;cont+=1)
    {
        num+=2;
        den+=5;
        printf("%d/%d\n",num,den);
    }
}

