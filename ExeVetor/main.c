#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <conio.h>
#define Ptr setlocale(LC_ALL,"Portuguese");
/*
    33.	Leia oito elementos e armazene-os no vetor A. Construa o vetor B de mesma dimensão
    com os elementos do vetor A multiplicados por 3. Apresente o conteúdo dos dois vetores.
*/
int vetA[8];
int vetB[8];

int ExibaVet()
{
    int i;

    for(i=1;i<=8;i++)
    {
        printf("Conteúdo Vetor A: %i\n",vetA[i]);
    }
    printf("\n\n");
    for(i=1;i<=8;i++)
    {
        printf("Conteúdo Vetor B: %i\n",vetB[i]*3);
    }
}

int main(){

    Ptr;
    int opc, i=1;

    while(i <= 8)
    {
        printf("\n\nDigite 8 Elementos para Armazenar no Vetor\n ");
        printf("\nOu [0] para Sair\n ");
        printf("\nDigite>>> ");
        scanf("%i",&opc);
        vetA[i] = opc;
        vetB[i] = vetA[i];

        i++;
    }
    ExibaVet();

return 0;

}
