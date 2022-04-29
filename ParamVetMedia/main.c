#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <conio.h>
#define Ptr setlocale(LC_ALL,"Portuguese");

/*
    1.	Crie uma função chamada Notas para garantir o recebimento de cada uma das notas uma de cada vez. As notas deverão ser maiores ou iguais a
    zero e menores ou iguais a dez. Receba quatro valores referentes às notas escolares de um aluno. Crie uma função Média para calcular a média aritmética do aluno.
    Exiba a média e se o aluno foi aprovado ou não no interior da função main.
    Ele será aprovado se a média for maior ou igual a 6. Caso contrário informe que ele está reprovado.

*/



int ExibeMedia(int notas[4]);
int Notas(int notas[4]);

/*
    Função para garantir que as notas seja entre 0 e 10
*/
int Notas(int notas[4])
{
    int i;

    for(i=0;i<4;i++)
    {
        if(notas[i]>=0 && notas[i]<=10)
        {
            notas[i] = notas[i];
        }
        else
        {
            system("cls");
            printf("******Esse valor eh invalido, somente eh aceito Notas entre 0 e 10\n");
            printf("Digite Novamente");
            return main ();
        }
    }

    return ExibeMedia(notas);
}
/*
    Calcular Média -> recebe a função verificada pega cada posição e extrai a média
*/
int ExibeMedia(int notas[4])
{
    int media;
    int soma=0;
    int i;

    for(i=0;i<4;i++)
    {
        soma += notas[i];
    }
    media = soma/4;

    if(media>=6)
    {
        return printf("\n*******Aluno Aprovado!! Nota: %d *********",media);
    }
    else
    {
        return printf("\n*******Aluno Reprovado!! Nota: %d ********",media);
    }

}

int main (){

    int notaAluno,i=0;
    int nota[4];

    while(i<4){
        printf("Digite a nota do aluno: ");
        scanf("%d",&notaAluno);
        nota[i] = notaAluno;
        i++;
    }
    Notas(nota);

return 0;
}
