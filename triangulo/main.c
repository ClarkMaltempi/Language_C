#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <conio.h>
#define Ptr setlocale(LC_ALL,"Portuguese");

/*


    3.	Crie uma fun��o que garanta que cada lado deve ser maior que zero. Receba tr�s n�meros que representam os lados de um tri�ngulo.
    Garanta no interior da fun��o main a exist�ncia de um tri�ngulo. Informe ao usu�rio se o tri�ngulo � is�scele, equil�tero ou escaleno.

    Observa��es:

    a.	Garantir que cada lado � menor que a soma dos outros dois lados.
    b.	O tri�ngulo � equil�tero quando todos os lados s�o iguais.
    c.	O tri�ngulo � is�scele quando apenas dois lados s�o iguais.
    d.	O tri�ngulo � escaleno quando todos os lados s�o diferentes



*/




int a,b,c;
char condicao1, condicao2, condicao3, condicaofinal;

/*
        S� ir� existir um tri�ngulo se, somente se,
        os seus lados obedeceram � seguinte regra: um de seus lados deve ser maior que o valor absoluto (m�dulo)
        da diferen�a dos outros dois lados e menor que a soma dos outros dois lados.

        | b - c | < a < b + c
        | a - c | < b < a + c
        | a - b | < c < a + b
*/
int main(){

    printf("\n\n");


    printf("\n\tVERIFICA TRIANGULO");
    printf("\n\n");

    printf("DIGITE O LADO A: ");
    scanf("%d",&a);
    printf("DIGITE O LADO B: ");
    scanf("%d",&b);
    printf("DIGITE O LADO C: ");
    scanf("%d",&c);

    if (b - c  < a && a < b + c)
    {
        condicao1 = 'v';
    }
    else
    {
        condicao1 = 'n';
    }
    if (a - c < b && b < a + c)
    {
        condicao2 = 'v';
    }
    else
    {
        condicao2 = 'n';
    }
    if (a - b < c && c < a + b)
    {
        condicao3 = 'v';
    }
    else
    {
        condicao3 = 'n';
    }

    if(condicao1 == 'v' && condicao2 =='v' && condicao3 == 'v')
    {
        printf("\n\n");
        printf("Este eh um Triangulo!");
        condicaofinal = 'v';

    }
    if(condicao1 == 'n' || condicao2 == 'n' || condicao3 == 'n')
    {
        printf("\n\n");
        printf("Verifique os numeros digitados, eles nao representam valores que formam um triangulo");
        printf("\n\n");
    }


        if(condicaofinal == 'v')
        {
                if (a == b || c == b || a == c)
                {
                    printf("\n\n");
                    printf("\nDo tipo: Triangulo Isoceles");
                    printf("\n\n");
                }

                if (a == b && c == b && a == c)
                {
                    printf("\n\n");
                    printf("\nDo tipo: Triangulo Equilatero");
                    printf("\n\n");
                }

                if (a != b && c != b && a != c)
                {
                    printf("\n\n");
                    printf("\nDo tipo: Triangulo Escaleno");
                    printf("\n\n");
                }
        }
return 0;
}
