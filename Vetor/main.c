#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <conio.h>
#define Ptr setlocale(LC_ALL,"Portuguese");

/*
32.	Receba doze números positivos e armazene no vetor A.
    Após a alimentação de todos os números mostre apenas os
    números maiores que 121 que estão armazenados no vetor.
*/

int ExibaVet(int opc)
{
    int vet[8];
    int i;

    for(i=0;i<=8;i++)
    {
        vet[i] = opc;
        if(vet[i]>121){
            printf("Numero Maior que 121: %i", vet[i]);
            break;
        }
        else{
            break;
        }
    }
}

int main(){

    Ptr;
    int opc, i=1;

    while(i <= 8)
    {
        printf("\n\nDigite a quantidade de Termos que deseja exibir\n ");
        printf("\nOu [0] para Sair\n ");
        printf("\nDigite>>> ");
        scanf("%i",&opc);

        ExibaVet(opc);
        i++;
    }

return 0;

}
