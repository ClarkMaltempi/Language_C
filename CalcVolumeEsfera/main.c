#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <conio.h>
#define Ptr setlocale(LC_ALL,"Portuguese");
#define M_PI 3.14


/*
    Crie a função Esfera que receba da função main o valor do raio e calcule o volume da esfera o seu volume v =(4*Pi*R3)/3.
    Crie também uma função para garantir que o raio deve ser maior que zero.
    Exiba o  volume  da esfera no interior da função main.

*/


/*
    CALCULA O VOLUME DE UMA ESFERA

*/
int raio=0;
int num=0;

int Esfera(int raio);
int MaiorqZero(int num);

int Esfera(int raio)
{
    float volume;
    raio = pow(raio,3);
    volume = 4.0 / 3.0*M_PI*raio;

    return printf("\n%.2f",volume);
}

/*
Verifica se o numero é maior que zero e passa o valor para a função esfera que calcula o valor
*/
int MaiorqZero(int num)
{
    if(num<=0)
    {
        printf("*******NUMERO INVALIDO!******\n");
        printf("****Digite outro numero!****\n\n");
        return main();
    }
    else
    {
        return Esfera(num);
    }

}

int main()
{


    printf("CALCULA O VOLUME DE UMA ESFERA\n\n");


    printf("Insira o valor do raio da esfera:  ");
    scanf(" %d", &raio);
    MaiorqZero(raio);

    printf("\n\n");

    return 0;
}
