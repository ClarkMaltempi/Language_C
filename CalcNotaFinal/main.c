#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <conio.h>
#define Ptr setlocale(LC_ALL,"Portuguese");

/*
        A nota final de um exame � calculada a partir de tr�s notas atribu�das respectivamente a um trabalho
        de laborat�rio, uma avalia��o semestral e a um exame final. A m�dia das tr�s notas mencionadas anteriormente
        obedece aos pesos a seguir

        Trabalho de Laborat�rio         peso 2
        Avalia��o Semestral             peso 3
        Exame final                     peso 5

        Mp = [(N1 x P1) + (N2 x P2) + (N3 x P3) + (N4 x P4)] � (P1 + P2 + P3 + P4)
        Calculo da m�dia ponderada
    */
int TrabLab,AvalSem,ExamFinal, Med, mediafinal;
char conc;

int Media()
    {

        Med = (TrabLab*2)+(AvalSem*3)+(ExamFinal*5);
        Med = Med/10;
        printf("\nNota da M�dia Final: %i", Med);


    }

char Conceito()
    {
        if(Med>=8 && Med<=10)
        {
            conc = 'A';
            printf("\nA nota conceitual �: %c", conc);

        }
        if(Med>=7 && Med<8)
        {
            conc = 'B';
            printf("\nA nota conceitual �: %c", conc);

        }
        if(Med>=6 && Med<7)
        {
            conc = 'C';
            printf("\nA nota conceitual �: %c", conc);

        }
        if(Med>=5 && Med<6)
        {
            conc = 'D';
            printf("\nA nota conceitual �: %c", conc);

        }
        if(Med>=0 && Med<5)
        {
            conc = 'E';
            printf("\nA nota conceitual �: %c", conc);
        }

    }


int main()
{

    setlocale(LC_ALL,"Portuguese");
    printf("Digite a nota do Trabalho de Laborat�rio: ");
    scanf("%i",&TrabLab);
    printf("Digite a nota do Avalia��o Semestral: ");
    scanf("%i",&AvalSem);
    printf("Digite a nota do Exame final: ");
    scanf("%i",&ExamFinal);

    Media();
    Conceito();






    return 0;
}
