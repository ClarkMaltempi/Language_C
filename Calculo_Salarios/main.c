#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <conio.h>
#define Ptr setlocale(LC_ALL,"Portuguese");

/*
24.	Receba a quantidade de sal�rios de K indiv�duos. K representa essa quantidade e deve ser digitada pelo usu�rio.
    A vari�vel Sal�rio armazena cada uma dos K sal�rios digitados. Calcule e mostre a somat�ria dos sal�rios superiores a
    3 sal�rios-m�nimos e inferior ou igual a 7 sal�rios-m�nimos.
    Exiba tamb�m o maior e o menor sal�rio encontrado. Utilize o la�o while para a entrada da quantidade
    K e um la�o while para efetuar os c�lculos e as compara��es solicitadas.
*/

float vet[1000];

float SalMinimo = 1192;


void VerificaNum(int k)
{
        if( k <= 0 )
        {
            system("cls");
            printf("\n\*******NUMERO INVALIDO!******\n");
            printf("*O PRIMEIRO TEM QUE SER MAIOR QUE O SEGUNDO!*\n");
            printf("****Digite outro numero!****\n\n");
            return main();
        }
}

float cadastroSal (int k)
{
    int i,cont=0;
    float sal, MaxSal=0, MinSal=3575,MinA, MinB;

    do
    {
        printf("\n*Cadastre o Salario!*\n De *%i* Funcion�rios \n", k);
        printf("\n*Quantidade Cadastrada : *%i*  \n", cont);
        printf("  \nDigite>>> ");
        scanf("%f", &sal);
        system("cls");

        vet[cont] = sal;
        if(sal > MaxSal)
        {
            MaxSal = sal;
        }
        if(sal < MinSal)
        {
            MinSal = sal;
        }
        cont+=1;
    }while(cont != k);
        MinA = SalMinimo*3;
        MinB = SalMinimo*7;

    /*Verifica condi��es*/
    for(i=0;i<k;i++)
    {
        if(vet[i]>= MinA && vet[i]<= MinB)
        {

            printf("\n  Sal�rio > 3 Sal�rio M�nimo Sal E Sal < 7 Sal�rio M�nimo:\n  >> %.2f", vet[i]);

        }
        if(vet[i]> MinB)
        {
            printf(" \n------------------------------------------------------------------- \n");
            printf("\n  Sal�rio > 7 Sal m�nimos: >> %.2f  \n\n", vet[i]);


        }
        if (vet[i] < MinA)
        {
            printf(" \n -------------------------------------------- \n");
            printf("\n  Sal�rio abaixo de 3 sal�rios m�nimos:\n  >> %.2f  \n\n", vet[i]);

        }
    }
        printf(" \n -------------------------------------------- \n");
        printf("\n  Maior Sal�rio cadastrado: %.2f  \n", MaxSal);
        printf("  Menor Sal�rio cadastrado: %.2f  \n", MinSal);
}

int main()
{
    Ptr;
    /*Sal�rio M�nimo R$ 1.192,40*/
    int k, salario;

    do
    {
        printf("\n\n Digite a quantidade de Funcionarios que deseja cadastrar\n");
        printf("\n Digite [0] para Sair\n\n");
        printf("  \n Digite>>> ");
        scanf("%i",&k);

        if(k != 0)
        {
            VerificaNum(k);
        }
        if(k > 0)
        {
            cadastroSal(k);
        }
        printf("\n");
        system("pause");


    }while(k != 0);


    return 0;
}
