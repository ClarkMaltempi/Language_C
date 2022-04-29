#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <conio.h>
#define Ptr setlocale(LC_ALL,"Portuguese");

/*
    4.	Crie uma função que garanta que um número é negativo. Receba dois números utilizando  esta função.
    Crie a função Verifcamultiplos e verifique se estes dois números são múltiplos ou não.
    Exiba se são múltiplos ou não no interior da função VerificaMultiplos. Pesquise na internet o que são múltiplos.


*/


int m,n,k;

/*
    VerificaMultiplos(a,b);
*/

int RecebaNumero(int a, int b)
{
    if(a<0 && b<0)
    {
        return VerificaMultiplos(a, b);
    }
    else
    {
        return printf("\n*****Numero invalido!! so sao aceitos numeros negativos");
    }

}

void VerificaMultiplos(int m, int n)
{

    k = m/n;
    if(k*n == m)
    {
        printf("\nEsses Dois Numeros sao multiplos! ");
    }
    else
    {
        printf("\nEsses Numeros nao sao multiplos! ");
    }

}

    int main()
{

    printf("\n\n");
    printf("\nDigite o numero: ");
    scanf("%d",&m);
    printf("\nDigite o numero: ");
    scanf("%d",&n);
    RecebaNumero(m, n);

}
