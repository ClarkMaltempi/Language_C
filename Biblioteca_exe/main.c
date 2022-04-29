#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <conio.h>
#define Ptr setlocale(LC_ALL,"Portuguese");

typedef struct
{
    char sexo[200];
    int idade;
    int QtdLivros;

} Biblioteca;
Biblioteca Bibli[10];
/*Observe que a linha 406 é a que cria de fato o vetor.*/
char cadastro(int n)
{
    int i, opc;

/*Preenche o vetor com valores nulos*/
    for(i=0; i<n; i++)
    {
        strcpy(Bibli[i].sexo, "NULL");
        Bibli[i].idade = 0;
        Bibli[i].QtdLivros = 0;
    }
/*Cadastra na Estrutura*/
    for(i=0; i<n; i++)
    {
        system("cls");
        printf("Itens Cadastrados: [%d] no Total de: [%d]\n\n", i,n);

        printf(" \nDigite o sexo:\n ");
        printf("  Digite>>> ");
        scanf("%s%*c", &Bibli[i].sexo);
        printf(" \nDigite a idade:\n ");
        printf("  Digite>>> ");
        scanf("%d%*c", &Bibli[i].idade);

        printf(" \nDigite a Quantidade de livros:\n ");
        printf("  \nDigite>>> ");
        scanf("%d%*c", &Bibli[i].QtdLivros);
    }

    printf(" \nDeseja visualizar o que foi cadastrado: \n\n Sim [1]\n Não [2]\n ");
    printf("  \nDigite>>> ");
    scanf("%d",&opc);

    if(opc == 1)
    {
        for(i=0; i<n; i++)
        {
            printf(" \n sexo: %s ", Bibli[i].sexo);
            printf(" \n Idade: %d ", Bibli[i].idade);
            printf(" \n Quantidade de Livros: %i\n ", Bibli[i].QtdLivros);
            printf(" \n ------------------------------------------------------------------------\n");
        }
    }
    else
    {
        Imprimir(n);
        system("pause");
        return main();
    }
}

void Imprimir(n)
{
    int livros=0,i, Mulheres=0, homens=0;
    char sexo;
    float mediaIdade=0, pessoas=0;

    for(i=0; i<n; i++)
    {
        if(Bibli[i].idade<10)
        {
           livros = livros + Bibli[i].QtdLivros;
        }

        /*Uma função chamada strcmp(string1, string2); da biblioteca de strings é utilizada para fazer a comparação da primeira string com a segunda string. */
        if((strcmp("feminino",Bibli[i].sexo) == 0) && (Bibli[i].QtdLivros >=5))
        {
            Mulheres++;
        }

        if((strcmp("masculino",Bibli[i].sexo) == 0) && (Bibli[i].QtdLivros <5))
        {
           mediaIdade = mediaIdade + Bibli[i].idade;
           homens++;
        }

        if(Bibli[i].QtdLivros == 0)
        {
           pessoas++;
        }

    }

    printf("\nTotal de livros lidos pelos entrevistados menores de 10 anos");
    printf("\n[Total]: %i", livros);
    printf(" \n ------------------------------------------------------------------------\n");

    printf("\nA quantidade de mulheres que leram 5 livros ou mais");
    printf("\n[Total]: %i", Mulheres);
    printf(" \n ------------------------------------------------------------------------\n");

    homens = mediaIdade/homens;
    printf("\nA média de idade dos homens que leram menos que 5 livros");
    printf("\n[Total]: %i", homens);
    printf(" \n ------------------------------------------------------------------------\n");

    pessoas = pessoas/100*n;
    pessoas = pessoas*100;
    printf("\nO percentual de pessoas que não leram LIVROS");
    printf("\n[Total]: %.2f%%", pessoas);
    printf(" \n ------------------------------------------------------------------------\n");

}


int main(void)
{
    Ptr;
    int n;

    do
    {
        system("cls");
        printf("\n\n Digite a quantidade de Pessoas que deseja cadastrar\n");
        printf("\n Digite [0] para Sair\n\n");
        printf("  \n Digite>>> ");
        scanf("%i",&n);

        if(n != 0)
        {
            cadastro(n);
            Imprimir(n);
        }

        printf("\n");
        printf("Você optou por sair!!!!\n");
        system("pause");


    }while(n != 0);



    return 0;
}
