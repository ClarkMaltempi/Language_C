#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <conio.h>
#define Ptr setlocale(LC_ALL,"Portuguese");


/*
25.	Receba a quantidade de pesos de N pessoas. N representa essa quantidade e deve ser digitada pelo usuário.
    A variável P representa cada peso digitado. Calcule e mostre a média dos pesos superiores ou iguais a 70 quilos
    e inferiores ou iguais a 85,5 e a quantidade de pessoas que apresentam pesos superiores a 75 quilos. Exiba também o menor,
    a quantidade de vezes que o menor peso foi encontrado e o maior peso encontrado. Utilize o laço while para a entrada da quantidade N e um
    laço do while para efetuar os cálculos e as comparações solicitadas.

*/

float vet[1000];

float SalMinimo = 1192;


void VerificaNum(int n)
{
        if( n <= 0 )
        {
            system("cls");
            printf("\n\*******NUMERO INVALIDO!******\n");
            printf("*O PRIMEIRO TEM QUE SER MAIOR QUE O SEGUNDO!*\n");
            printf("****Digite outro numero!****\n\n");
            return main();
        }
}

float cadastroPes (int n)
{
    int i,cont=0, contPesMx=0, contPesMn=0;
    float peso, MaxPes=0, MinPes=300,calc,media;

    do
    {
        printf("\n*Cadastre o Peso!*\n De *%i* Funcionários \n", n);
        printf("\n*Quantidade Cadastrada : *%i*  \n", cont);
        printf("  \nDigite>>> ");
        scanf("%f", &peso);
        system("cls");

        vet[cont] = peso;
        if(peso > MaxPes)
        {
            MaxPes = peso;
            contPesMx+=1;
        }
        if(peso < MinPes)
        {
            MinPes = peso;
            contPesMn+=1;
        }
        cont+=1;
    }while(cont != n);


    /*Verifica condições*/
    for(i=0;i<n;i++)
    {
        if(vet[i]>= 70 && vet[i]<= 85.5)
        {
            calc += vet[i];
        }
        if(vet[i]> 75)
        {
            printf(" \n------------------------------------------------------------------- \n");
            printf("\n  Peso > 75 Kg:\n >> %.2f  \n\n", vet[i]);
        }
    }
        printf(" \n -------------------------------------------- \n");
        printf("\n Quantidade: %i Maior Peso cadastrado: %.2f  \n", contPesMx, MaxPes);
        printf(" Quantidade: %i Menor Peso cadastrado: %.2f  \n", contPesMn, MinPes);

        media = calc/n;
        printf(" \n -------------------------------------------- \n");
        printf("\n | Média | Peso > 70 E Pes < 85.5 Kg :\n  >> %.2f", media);
}

int main()
{
    Ptr;
    /*Salário Mínimo R$ 1.192,40*/
    int n, salario;

    do
    {
        printf("\n\n Digite a quantidade de Pessoas que deseja cadastrar\n");
        printf("\n Digite [0] para Sair\n\n");
        printf("  \n Digite>>> ");
        scanf("%i",&n);

        if(n != 0)
        {
            VerificaNum(n);
        }
        if(n > 0)
        {
            cadastroPes(n);
        }
        printf("\n");
        system("pause");


    }while(n != 0);


    return 0;
}

