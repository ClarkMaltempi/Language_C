#include <stdio.h>
#include <math.h>
# define M_PI 3.14159265358979323846

int Esfera(int raio);
int MaiorqZero(int num);
void VerificaNum(int num);
void Divisao (int a, int b);
int ExibeMedia(int n1, int n2, int n3, int n4);
void Notas(int n1, int n2, int n3, int n4);

int Esfera(int raio)
{
    float volume;
    raio = pow(raio,3);
    volume = 4.0 / 3.0*M_PI*raio;

    return printf("\n%.2f",volume);
}

int MaiorqZero(int num)
{
    if(num<=0)
    {
        printf("*******NUMERO INVALIDO!******\n");
        printf("****Digite outro numero!****\n\n");
        return main();
    }
    else
    {
        return Esfera(num);
    }

}

void VerificaNum(int num)
{
    if(num>0)
    {
      printf(" \nEste numero e POSITIVO\n ");
    }
    if(num==0)
    {
      printf(" \nVoce Digitou ZERO\n ");
    }
    if(num<0)
    {
      printf(" \nVoce Digitou NEGATIVO\n ");
    }

}

void Divisao (int a, int b)
{
    int c;
    if(a==0 || b==0)
    {
        printf("Nao e possivel fazer divisao por 0");
        return main();
    }
    else
    {
        c = a / b;
        return printf("O valor da Divisao %d", c);
    }
}


int ExibeMedia(int n1, int n2, int n3, int n4)
{
    int media;
    media = n1+n2+n3+n4/4;
    return media;
}

void Notas(int n1, int n2, int n3, int n4)
{
    for(int i=1;i<=4;i++)
    {
        if('n'+i>=0 || 'n'+i<=10 )
        {
            'n'+i='n'+i;

        }
        else
        {
          printf("Nota Inválida %d",'n'+i);
        }
    }

}

int main()
{
    char opc;
    int diametro=0;
    int num=0;
    int a,b;
    int nota;
/*
    CALCULA O VOLUME DE UMA ESFERA

*//*
    printf("CALCULA O VOLUME DE UMA ESFERA\n\n");


    printf("Insira o diametro da esfera:  ");
    scanf(" %d", &diametro);
    diametro = diametro/2;
    MaiorqZero(diametro);

    printf("\n\n");

/*
    VERIFICA SE NUMERO É POSITIVO OU NEGATIVO

*/
/*
    printf("VERIFICA SE NUMERO E POSITIVO OU NEGATIVO\n\n");
    printf("Insira um Numero:  ");
    scanf(" %d", &num);
    VerificaNum(num);


*/

/*
    DIVISAO

*/
/*
    printf("\nDIVISAO\n\n");
    printf("Digite um numero para dividir:\n");
    scanf("%d", &a);
    scanf("%d", &b);
    Divisao(a,b);

*/

for(int i=1;i<=4;i++)
{
    printf("Digite uma nota: ");
    scanf("%d", &ni);
    ni=ni;
    printf("%d", ni);
}

Notas(n1, n2, n3, n4);

ExibeMedia(n1, n2, n3, n4);



    return 0;
}
