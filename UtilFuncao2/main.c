#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <conio.h>
#define Ptr setlocale(LC_ALL,"Portuguese");

/*
    2.	Crie uma fun��o que garanta o recebimento de n�meros maiores que zero e menores ou iguais a 10.
    Receba dois n�meros utilizando est� fun��o e o terceiro n�mero dever� ser a soma dos dois anteriores.
    Crie a fun��o produto para calcular o produto destes tr�s n�meros.
    No interior da fun��o main verifique se o produto obtido for menor que 500, solicite novos dados.

*/


int vet[11]={0,1,2,3,4,5,6,7,8,9,10};

int *ptr, posicao, i, num=0, num2=0, num3=0, produto;
int VerificaNum (int num, int num2);
int CalcProd(int Num, int Num2, int Num3);


int VerificaNum (int num, int num2)
{
    /*
        Foi deifinido um vetor de 11 posi��es para garantir que os numeros estejam sempre nessa faixa de verifica��o
        Recebe o endere�o do vetor
       *ptr aponta para o primeiro conteudo do vetor e armazena na vari�vel posicao
       o if no for verifica se determinada posi��o existe comparando com a vari�vel num e num2

    */
    ptr = &vet[11];
    posicao = *ptr;

    for(i=0;i<11;i++)
    {
       if(posicao+i == num)
        {
            num = posicao+i;
        }

        if(posicao+i == num2)
        {
            num2 = posicao+i;
        }
    }
        if(num==0 || num2==0 || num<0 || num2<0 || num>10 || num2>10 )
        {
            return '1';
        }
        else
        {
            num3 = num + num2;
            return CalcProd(num, num2,num3);
        }
}


int CalcProd(int Num, int Num2, int Num3)
{
    produto = Num*Num2*Num3;
    return produto;

}

int main(){


    printf("\n\n");
    printf("VERIFICA QUAL EH O PRODUTO DE UM NUMERO");
    printf("\n\n");
    do
    {
    printf("\nDigite o numero: ");
    scanf("%d",&num);
    printf("\nDigite o numero: ");
    scanf("%d",&num2);

    if(VerificaNum (num, num2)== '1' )
    {
        printf("\n******NUMERO INVALIDO DIGITE NUMEROS DE 0 A 10*****");
        printf("\n\n");
    }
    else
    {
        printf("\n\n");
        printf("\n O Produto do Numero: %d\n",VerificaNum (num, num2));
    }

    }while (VerificaNum (num, num2) < 500);


    return 0;
}
