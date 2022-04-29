#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <conio.h>
#define Ptr setlocale(LC_ALL,"Portuguese");

/*
    35. Armazene num vetor dez números positivos. Exiba o conteúdo do vetor.
    Mostre o maior número, quantas vezes ele foi digitado e em que posições ele apareceu dentro do vetor.
*/
int vet[10];

void ExibaVet()
{
    int i, MaiorNumero=0, cont=0;
    printf("\nDados do Vetor\n\n");
    for(i=1;i<=10;i++)
    {
        printf("vetor: %i\n",vet[i]);
        if(vet[i]>MaiorNumero)
        {
            MaiorNumero = vet[i];
        }
    }
    for(i=1;i<=10;i++)
    {
        if(vet[i] == MaiorNumero)
        {
            cont +=1;
        }
    }
    printf("\n");
    printf("Maior Numero: %i\n", MaiorNumero);
    printf("Numero de vezes que foi Digitado: %i\n", cont);
    printf("\n");
    for(i=1;i<=10;i++)
    {
        if(vet[i] == MaiorNumero)
        {
            printf("posição: %i\n", i);
        }
    }
    printf("\n\n");
}


int main(){

    Ptr;
    int opc, i=1;

    while(i <= 10)
    {
        system("cls");
        printf("\n\nDigite 10 Numeros para Armazenar no Vetor [%i]\n ", i);
        printf("\nOu [0] para Sair\n ");
        printf("\nDigite>>> ");
        scanf("%i",&opc);
        vet[i] = opc;

        i++;
    }
    ExibaVet();

return 0;

}

