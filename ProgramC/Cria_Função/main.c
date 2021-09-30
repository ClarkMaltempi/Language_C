#include <stdio.h>
#include<locale.h>
#include <string.h>
#define exe4

#ifdef exe1

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

#endif

#ifdef exe2
int vet[11]={0,1,2,3,4,5,6,7,8,9,10};

int *ptr, posicao, i, num=0, num2=0, num3=0, produto;
int VerificaNum (int num, int num2);
int CalcProd(int Num, int Num2, int Num3);


int VerificaNum (int num, int num2)
{
    /*
        Foi deifinido um vetor de 11 posições para garantir que os numeros estejam sempre nessa faixa de verificação
        Recebe o endereço do vetor
       *ptr aponta para o primeiro conteudo do vetor e armazena na variável posicao
       o if no for verifica se determinada posição existe comparando com a variável num e num2

    */
    ptr = &vet[11];
    posicao = *ptr;

    for(i=0;i<11;i++)
    {
       if(posicao+i == num)
        {
            num = posicao+i;
        }

        if(posicao+i == num2)
        {
            num2 = posicao+i;
        }
    }
        if(num==0 || num2==0 || num<0 || num2<0 || num>10 || num2>10 )
        {
            return '1';
        }
        else
        {
            num3 = num + num2;
            return CalcProd(num, num2,num3);
        }
}


int CalcProd(int Num, int Num2, int Num3)
{
    produto = Num*Num2*Num3;
    return produto;

}

int main(){


    printf("\n\n");
    printf("VERIFICA QUAL EH O PRODUTO DE UM NUMERO");
    printf("\n\n");
    do
    {
    printf("\nDigite o numero: ");
    scanf("%d",&num);
    printf("\nDigite o numero: ");
    scanf("%d",&num2);

    if(VerificaNum (num, num2)== '1' )
    {
        printf("\n******NUMERO INVALIDO DIGITE NUMEROS DE 0 A 10*****");
        printf("\n\n");
    }
    else
    {
        printf("\n\n");
        printf("\n O Produto do Numero: %d\n",VerificaNum (num, num2));
    }

    }while (VerificaNum (num, num2) < 500);


    return 0;
}

#endif

#ifdef exe3


int a,b,c;
char condicao1, condicao2, condicao3, condicaofinal;

/*
        Só irá existir um triângulo se, somente se,
        os seus lados obedeceram à seguinte regra: um de seus lados deve ser maior que o valor absoluto (módulo)
        da diferença dos outros dois lados e menor que a soma dos outros dois lados.

        | b - c | < a < b + c
        | a - c | < b < a + c
        | a - b | < c < a + b
*/
int main(){

    printf("\n\n");


    printf("\n\tVERIFICA TRIANGULO");
    printf("\n\n");

    printf("DIGITE O LADO A: ");
    scanf("%d",&a);
    printf("DIGITE O LADO B: ");
    scanf("%d",&b);
    printf("DIGITE O LADO C: ");
    scanf("%d",&c);

    if (b - c  < a && a < b + c)
    {
        condicao1 = 'v';
    }
    else
    {
        condicao1 = 'n';
    }
    if (a - c < b && b < a + c)
    {
        condicao2 = 'v';
    }
    else
    {
        condicao2 = 'n';
    }
    if (a - b < c && c < a + b)
    {
        condicao3 = 'v';
    }
    else
    {
        condicao3 = 'n';
    }

    if(condicao1 == 'v' && condicao2 =='v' && condicao3 == 'v')
    {
        printf("\n\n");
        printf("Este eh um Triangulo!");
        condicaofinal = 'v';

    }
    if(condicao1 == 'n' || condicao2 == 'n' || condicao3 == 'n')
    {
        printf("\n\n");
        printf("Verifique os numeros digitados, eles nao representam valores que formam um triangulo");
        printf("\n\n");
    }


        if(condicaofinal == 'v')
        {
                if (a == b || c == b || a == c)
                {
                    printf("\n\n");
                    printf("\nDo tipo: Triangulo Isoceles");
                    printf("\n\n");
                }

                if (a == b && c == b && a == c)
                {
                    printf("\n\n");
                    printf("\nDo tipo: Triangulo Equilatero");
                    printf("\n\n");
                }

                if (a != b && c != b && a != c)
                {
                    printf("\n\n");
                    printf("\nDo tipo: Triangulo Escaleno");
                    printf("\n\n");
                }
        }
return 0;
}


#endif // exe3

#ifdef exe4
int m,n,k;

/*
    VerificaMultiplos(a,b);
*/

int RecebaNumero(int a, int b)
{
    if(a<0 && b<0)
    {
        return VerificaMultiplos(a, b);
    }
    else
    {
        return printf("\n*****Numero invalido!! so sao aceitos numeros negativos\n");
    }

}

void VerificaMultiplos(int m, int n)
{

    k = m/n;
    if(k*n == m)
    {
        printf("\nEsses Dois Numeros sao multiplos! ");
    }
    else
    {
        printf("\nEsses Numeros nao sao multiplos! ");
    }

}

    int main()
{

    printf("\n\n");
    printf("\nDigite o numero: ");
    scanf("%d",&m);
    printf("\nDigite o numero: ");
    scanf("%d",&n);
    RecebaNumero(m, n);

}

#endif // exe4


