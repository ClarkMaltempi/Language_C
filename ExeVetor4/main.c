#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <conio.h>
#define Ptr setlocale(LC_ALL,"Portuguese");

/*
    39.	Leia três vetores (A, B e C) de uma dimensão com 5 elementos cada.
        Construa o vetor D, sendo este a junção dos três outros vetores. Armazene no vetor D o primeiro elemento do vetor
        A depois do B e do C e assim sucessivamente.  Apresentar o conteúdo de todos os vetores.
        Exiba quantas vezes apareceram números negativos no vetor D.
*/


int vetA[5];
int vetB[5];
int vetC[5];
int vetD[15];

void OrdenaVet(int vet[], int n)
{
    int i, j, aux;

  for (i=0; i<n; i++)
    for (j=0; j<n-i-1; j++)
    if (vet[j]>vet[j+1])
    {
        aux = vet[j];
        vet[j] = vet[j+1];
        vet[j+1] = aux;
    }

    printf("\n");
    for(i=0; i<n; i++)
    {
        printf("Vetor Ordenado [%i]: %i\n ", i, vet[i]);
    }
}

int ExibaVet(){

    int i;

    printf("\nValores nos vetores\n\n");

    for(i=0;i<5;i++)
    {
        vetA[i] = i;
        printf("Valor: %i\n", vetA[i]);
    }

    printf("\n");

    for(i=0;i<5;i++)
    {
        vetB[i] = i+11;
        printf("Valor: %i\n", vetB[i]);

    }
    printf("\n");

    for(i=0;i<5;i++)
    {
        vetC[i] = i+82;
        printf("Valor: %i\n", vetC[i]);

    }
    printf("\n");

    for(i=0;i<5;i++)
    {
        vetD[i*3] = vetA[i];
    }

    for(i=0;i<5;i++)
    {
        vetD[i*3+1] = vetB[i];
    }

    for(i=0;i<5;i++)
    {
        vetD[i*3+2] = vetC[i];
    }


    for(i=0;i<15;i++)
    {
        printf("Vetor D [%i] : %i \n", i, vetD[i]);
    }

    OrdenaVet(vetD, 15);

}


int main(){

    Ptr;

    ExibaVet();

return 0;

}
