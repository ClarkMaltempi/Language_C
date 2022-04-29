#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <conio.h>
#define Ptr setlocale(LC_ALL,"Portuguese");

/*


    3.	Crie uma função que garanta que cada lado deve ser maior que zero. Receba três números que representam os lados de um triângulo.
    Garanta no interior da função main a existência de um triângulo. Informe ao usuário se o triângulo é isóscele, equilátero ou escaleno.

    Observações:

    a.	Garantir que cada lado é menor que a soma dos outros dois lados.
    b.	O triângulo é equilátero quando todos os lados são iguais.
    c.	O triângulo é isóscele quando apenas dois lados são iguais.
    d.	O triângulo é escaleno quando todos os lados são diferentes



*/




int a,b,c;
char condicao1, condicao2, condicao3, condicaofinal;

/*
        Só irá existir um triângulo se, somente se,
        os seus lados obedeceram à seguinte regra: um de seus lados deve ser maior que o valor absoluto (módulo)
        da diferença dos outros dois lados e menor que a soma dos outros dois lados.

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
