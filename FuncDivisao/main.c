#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <conio.h>
#define Ptr setlocale(LC_ALL,"Portuguese");
#define M_PI 3.14


/*
    3.	Crie a função Divisão que receba da função main dois números diferentes de zero que possibilitem o cálculo da divisão do primeiro pelo segundo.
    Crie uma função para garantir que os números devem ser diferentes de zero.
    Exiba na função main os números e o resultado obtido na função Divisão.
*/


void Divisao (int a, int b);
int a,b;

void Divisao (int a, int b)
{
    int c;
    if(a==0 || b==0)
    {
        printf("Nao e possivel fazer divisao por 0");
        return main();
    }
    else
    {
        c = a / b;
        return printf("O valor da Divisao %d", c);
    }
}

int main()
{


    printf("\nDIVISAO\n\n");
    printf("Digite um numero para dividir: ");
    scanf("%d", &a);
    printf("Digite o segundo numero para quanto quer dividir: ");
    scanf("%d", &b);
    Divisao(a,b);


    return 0;
}

