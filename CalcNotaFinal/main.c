#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <conio.h>
#define Ptr setlocale(LC_ALL,"Portuguese");

/*
        A nota final de um exame é calculada a partir de três notas atribuídas respectivamente a um trabalho
        de laboratório, uma avaliação semestral e a um exame final. A média das três notas mencionadas anteriormente
        obedece aos pesos a seguir

        Trabalho de Laboratório         peso 2
        Avaliação Semestral             peso 3
        Exame final                     peso 5

        Mp = [(N1 x P1) + (N2 x P2) + (N3 x P3) + (N4 x P4)] ÷ (P1 + P2 + P3 + P4)
        Calculo da média ponderada
    */
int TrabLab,AvalSem,ExamFinal, Med, mediafinal;
char conc;

int Media()
    {

        Med = (TrabLab*2)+(AvalSem*3)+(ExamFinal*5);
        Med = Med/10;
        printf("\nNota da Média Final: %i", Med);


    }

char Conceito()
    {
        if(Med>=8 && Med<=10)
        {
            conc = 'A';
            printf("\nA nota conceitual é: %c", conc);

        }
        if(Med>=7 && Med<8)
        {
            conc = 'B';
            printf("\nA nota conceitual é: %c", conc);

        }
        if(Med>=6 && Med<7)
        {
            conc = 'C';
            printf("\nA nota conceitual é: %c", conc);

        }
        if(Med>=5 && Med<6)
        {
            conc = 'D';
            printf("\nA nota conceitual é: %c", conc);

        }
        if(Med>=0 && Med<5)
        {
            conc = 'E';
            printf("\nA nota conceitual é: %c", conc);
        }

    }


int main()
{

    setlocale(LC_ALL,"Portuguese");
    printf("Digite a nota do Trabalho de Laboratório: ");
    scanf("%i",&TrabLab);
    printf("Digite a nota do Avaliação Semestral: ");
    scanf("%i",&AvalSem);
    printf("Digite a nota do Exame final: ");
    scanf("%i",&ExamFinal);

    Media();
    Conceito();






    return 0;
}
