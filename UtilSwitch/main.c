#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <conio.h>
#define Ptr setlocale(LC_ALL,"Portuguese");

/*
    3.	Fa�a um programa que mostre o menu de op��es a seguir, receba a op��o do usu�rio e os dados necess�rios para executar cada opera��o.
    Menu de op��es:
    1.	Somar dois n�meros
    2.	Raiz quadrada de um n�mero
    3.	Divis�o do primeiro pelo segundo n�mero
    4.	Um n�mero positivo elevado ao quadrado.
    5.	Encerrar o programa.
    Digite a op��o desejada:
    Obs:Garante que s� sejam v�lidos  os n�meros de 1 at� 5.As op��es de 1 at� 4 devem garantir o retorno ao menu de op��es  para uma nova escolha.

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
        printf("\nDigite uma op��o: ");scanf("%d",&opc);

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
                printf("Op��o Inv�lida!");
            break;
        }




    return 0;
}
