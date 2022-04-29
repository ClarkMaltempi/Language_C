#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <conio.h>
#define Ptr setlocale(LC_ALL,"Portuguese");

/*
    36.	Armazene no vetor A 10 elementos positivos. Construa o vetor B do mesmo tipo e dimensão.
        Cada elemento do vetor B deve ser o valor negativo do elemento correspondente do vetor A.
        Desta forma, se em A [1] estiver armazenado o elemento 8 deve estar em B [1] o valor –8,
        e assim por diante. Apresentar o conteúdo dos dois vetores.
*/
int vetA[6];
int vetB[6];


int ExibaVet(){

    int i;

    printf("\nValores nos vetores\n\n");

    for(i=1;i<=6;i++)
    {
        printf("Valor: %i posição: %i\n", vetA[i], i);
    }
    printf("\n\n");
    for(i=1;i<=6;i++)
    {
        printf("Valor: %i posição: %i\n", vetB[i], i);
    }
}


int main(){

    Ptr;
    int opc, i=1;

    while(i <= 6)
    {
        system("cls");
        printf("\n\nDigite 10 Numeros para Armazenar no Vetor [%i]\n ", i);
        printf("\nOu [0] para Sair\n ");
        printf("\nDigite>>> ");
        scanf("%i",&opc);
        vetA[i] = opc;
        vetB[i] = opc*(-1);

        i++;
    }
    ExibaVet();

return 0;

}

