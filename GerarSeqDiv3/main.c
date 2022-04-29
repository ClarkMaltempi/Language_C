#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <conio.h>
#define Ptr setlocale(LC_ALL,"Portuguese");
#define M_PI 3.14
/*

 28.	Gere a seguinte sequência abaixo para K termos.
    K representa a quantidade de números que o usuário gostaria quer
     fosse exibida dessa sequência. Mostre também a somatória apenas dos números divisíveis por
     3 dessa sequência. Utilize o laço do while para a entrada da quantidade K e um laço for para
     efetuar os cálculos solicitados.

		1, 1, 2, 3, 5, 8, 13, 21,.....
*/



int ExibaSeq(int num)
{
   int i, vet[num];
   int t1 = 0, t2 = 1;
   int nextTerm = t1 + t2;

   printf("\nSequência Escolhida: \n");
   printf("%d ", t2);

   for (i = 3; i <= num+1; ++i)
    {
        printf(", %d ", nextTerm);
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
        vet[i] = nextTerm;
    }
    ExibeDivTres(vet, num);
}

int ExibeDivTres(int vet[], int num)
{
    int i;
    printf("\n\n\nDivisivel por Três: \n");
    for (i = 1; i <= num; ++i)
    {

        vet[1] = 1;
        vet[2] = 1;
        if(vet[i]%3 == 0){
            printf(" %d, ", vet[i]);
        }
    }
    printf("\n\n");
    system("pause");
}

int main(){

    Ptr;
    int opc;

    do
    {
        system("cls");
        printf("\n\nDigite a quantidade de Termos que deseja exibir\n ");
        printf("\nOu [0] para Sair\n ");
        printf("\nDigite>>> ");
        scanf("%i",&opc);
        if(opc != 0)
        {
            ExibaSeq(opc);

        }else{
            printf("\nVocê optou por sair!");
            printf("\n\n");
        }

    }while(opc != 0);



return 0;

}
