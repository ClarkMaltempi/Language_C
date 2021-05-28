#include<stdio.h>


int main() {

    int ValSaque, Notas, cont;

    cont =0;
    ValSaque =0;
    Notas = 0;
    printf("Digite o valor para saque: ");
    scanf("%d",&ValSaque);


    if (ValSaque>1000) {
        printf("Valor acima do saque máximo permitido de R$ 1000,00\n\n");
    }
    if (ValSaque % 2 != 0 || ValSaque % 10 != 0){
        printf("Valor de saque nao permitido para notas de 50 e de 20 reais\n\n");
    }
    if (ValSaque % 50 == 0 && ValSaque<=1000 && ValSaque % 2 == 0 && ValSaque % 10 == 0)
    {
        Notas = ValSaque / 50;
        printf("%d nota(s) de 50\n", Notas);
        ValSaque = ValSaque-Notas*50;
    }


    if (ValSaque % 50 != 0 && ValSaque > 80 && ValSaque > 50 && ValSaque % 2 == 0 && ValSaque<=1000 && ValSaque % 10==0)
    {

        while (ValSaque > 40) {

            ValSaque = ValSaque-50;
            cont = cont + 1;

            if (ValSaque <= 60) {

                printf("%d nota(s) de 50\n", cont);
                cont = 0;
                while (ValSaque > 0){


                    ValSaque = ValSaque-20;
                    cont = cont + 1;

        }
            Notas = cont;
            printf("%i nota(s) de 20\n", Notas);
            Notas = 0;
            }


    }
            if (Notas != 0) {

                Notas = cont;
                printf("%i nota(s) de 50\n", Notas);
                cont = 0;
            }
    }

    if (ValSaque != 0 && ValSaque % 2 == 0 && ValSaque<=1000 && ValSaque % 10 == 0)
    {
        if (ValSaque % 20 == 0)
        {
            if (Notas == 0){
            printf("%d nota(s) de 50\n", Notas);

            Notas = ValSaque / 20;
            printf("%d nota(s) de 20\n", Notas);
            Notas = 0;
            }
        }
    }

    if (ValSaque % 20 != 0 && ValSaque <= 80 && ValSaque % 2 == 0 && ValSaque<=1000 && ValSaque % 10 == 0)
        {
            while (ValSaque > 0)
            {
                ValSaque = ValSaque-20;
                cont = cont + 1;
            }

        }
    if (Notas != 0)
        {

            Notas = cont;
            printf("%d nota(s) de 20\n", Notas);

        }



 return 0;
}
