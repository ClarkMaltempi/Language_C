#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <conio.h>
#define Ptr setlocale(LC_ALL,"Portuguese");
#define M_PI 3.14

/*
    2.	Crie a fun��o verifica para verificar e exibir no seu interior se o n�mero � positivo, negativo ou zero.
    O n�mero dever� ser do tipo inteiro e  dever� ser recebido  no interior  fun��o main...
*/

void VerificaNum(int num);
int num=0;

void VerificaNum(int num)
{
    if(num>0)
    {
      printf(" \nEste numero e POSITIVO\n ");
    }
    if(num==0)
    {
      printf(" \nVoce Digitou ZERO\n ");
    }
    if(num<0)
    {
      printf(" \nVoce Digitou NEGATIVO\n ");
    }

}

int main()
{

    printf("VERIFICA SE NUMERO E POSITIVO OU NEGATIVO\n\n");
    printf("Insira um Numero:  ");
    scanf(" %d", &num);
    VerificaNum(num);

    return 0;
}
