#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define Ptr setlocale(LC_ALL,"Portuguese");
/*
    41.	Elabore um programa que efetue o cálculo de uma tabuada de um número
          qualquer e armazene os resultados no vetor A de uma dimensão para 10 elementos.
          O usuário deverá digitar o número e o programa deverá construir e exibir a tabuada correspondente.

*/

vet[10];

int CalcTabuada(int num)
{
    int i;
    for(i=0;i<=10;i++)
    {
        vet[i] = num*i;
    }

    printf("\n\n");

    for(i=0;i<=10;i++)
    {

        printf("| %i X %i = %i\n", num, i, vet[i]);
    }
    printf("\n\n");
    system("pause");
}

void mostra()
{
     printf(" **************************************************\n");
     printf("                     TABUADA                    \n");
     printf(" **************************************************\n");

}

int main(){
Ptr;

    int opc, i=1;

    do
    {
        system("cls");
        mostra();
        printf("\n Digite o Numero da Tabuada que você Quer saber\n ");
        printf("\n Ou [0] para Sair\n ");
        printf("\n Digite>>> ");
        scanf("%i",&opc);

        if(opc != 0){
            CalcTabuada(opc);
        }else{

        printf("\n\n");
        printf("Você optou por Sair!");
        printf("\n\n");

        }

    }while(opc > 0);

return 0;

}
