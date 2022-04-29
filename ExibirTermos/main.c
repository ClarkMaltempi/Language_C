#include <stdio.h>
#include <stdlib.h>

/*
    5.	Faça um programa em C que solicite ao usuário a quantidade de termos que ele deseja exibir da seguinte sequência:3, 6, 9, 12, 15,...
		Obs.: Crie uma função para garantir que essa quantidade deve ser deve ser maior que zero e representada pela variável K.

*/
int k,num,cont;

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

    printf("Digite a quantidade >0 3, 6, 9, 12, 15,...\n");
    scanf("%i",&k);
    Mzero();
    for(cont=1;cont<=k;cont+=1)
    {
        num+=3;
        printf("numero digitado = %d\n",num);
    }

}
