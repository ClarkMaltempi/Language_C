#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <conio.h>
#define Ptr setlocale(LC_ALL,"Portuguese");

/*
    Fa�a um programa que receba tr�s notas de um aluno, calcule e mostre a m�dia aritm�tica
    e a mensagem que segue a tabela abaixo. Para alunos de exame, calcule e mostre a nota que
    dever� ser tirada no exame para aprova��o, considerando a m�dia no exame � 6.0.


*/



int i,nota,Med=0,exame;
int v[3];


int Media()
    {
        int nota1=0, nota2=0, nota3=0;
        nota1 = v[0];
        nota2 = v[1];
        nota3 = v[2];

        Med = (nota1+nota2+nota3)/3;
        printf("\nNota da M�dia Final: %i\n\n\n", Med);


    }

void VerificaNota ()
{
    if(nota<0 || nota>10)
            {
                printf(" Voc� Digitou um valor inv�lido %i\n Digite valores entre 0 e 10 ", nota);
                system("pause");
                return main();
            }
            else
            {
                printf("  Voc� Digitou a nota:%i\n",i+1);
                v[i] = nota;
            }
}
void VerificaMedia()
{
    if(Med>=0 && Med<3)
    {
        printf("\n****Aluno Reprovado!");
    }
    if(Med>=3 && Med<7)
    {
        printf("\n****Aluno vai para Exame!\n");
        printf("\nDigite Nota da Prova do Exame: ");
        scanf("%i",&exame);
        VerificaNota();

        if(exame>5)
        {
            printf("\nAluno Aprovado no Exame!");
        }
        else
        {
            printf("\n****Aluno Reprovado!");
        }
    }
    if(Med>=7 && Med<10)
    {
        printf("\n****Aluno Aprovado!");
    }

}


int main()
    {

        setlocale(LC_ALL,"Portuguese");
        for(i=0;i<3;i++)
        {
            v[i]=0;
            printf("  \n\nDigite 3 notas");
            printf("\nDigite: ");scanf("%i",&nota);
            VerificaNota ();
        }
        Media();
        VerificaMedia();




    return 0;

    }
