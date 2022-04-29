#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <conio.h>
#define Ptr setlocale(LC_ALL,"Portuguese");

/*
    3.	Faça um programa que mostre o menu de opções a seguir, receba a opção do usuário e os dados necessários para executar cada operação.
    Menu de opções:
    1.	Somar dois números
    2.	Raiz quadrada de um número
    3.	Divisão do primeiro pelo segundo número
    4.	Um número positivo elevado ao quadrado.
    5.	Encerrar o programa.
    Digite a opção desejada:
    Obs:Garante que só sejam válidos  os números de 1 até 5.As opções de 1 até 4 devem garantir o retorno ao menu de opções  para uma nova escolha.

*/



int opc,a,b,c;

int Soma()
{
    c = a+b;
    printf("\nValor da soma: %i",c);
}

int Raiz()
{

    b = (int)sqrt( a );
    printf("\nValor da raiz: %i",b);
}


int main()
{
        setlocale(LC_ALL,"Portuguese");



        printf(" \n[1] Somar dois Numeros ");
        printf(" \n[2] Raiz quadrada de um numero ");
        printf(" \n[9] Para Sair\n");
        printf("\nDigite uma opção: ");scanf("%d",&opc);

        switch(opc)
        {
            case 1:
                printf("\nDigite um numero para somar:");
                scanf("%i",&a);
                printf("\nDigite um numero para somar:");
                scanf("%i",&b);
                Soma();
            break;

            case 2:
                printf("\nDigite um numero para calcular a raiz:");
                scanf("%i",&a);
                Raiz();
            break;

            case 9:
                system("exit");
            break;

            default:
                printf("Opção Inválida!");
            break;
        }




    return 0;
}
