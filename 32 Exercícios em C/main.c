#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <conio.h>
#define Ptr setlocale(LC_ALL,"Portuguese");
#define exe34


/*


    30.	Uma empresa contratou a quantidade de funcion�rios representada pela vari�vel Y.
    Conforme o valor das vendas mensais, os funcion�rios adquirem pontos que determinar�o
    seus sal�rios ao final de cada m�s. Sabe-se que esses funcion�rios trabalhar�o nos meses
    de novembro a janeiro do ano subsequente. Utilize os la�os que desejar.

    a)	Leia as pontua��es nos tr�s meses de cada funcion�rio;
    b)	Calcule e mostre a pontua��o geral de cada funcion�rio nos tr�s meses.
    c)	Calcule e mostre a m�dia das pontua��es de cada funcion�rio nos tr�s meses.
    d)	Determine e mostre a maior pontua��o atingida entre todos os funcion�rios nos tr�s meses.


    31.	Solicite ao usu�rio a quantidade de n�meros de termos que ele deseja.
    Exiba a somat�ria dos valores da s�rie abaixo referente a quantidade determinada
    pelo usu�rio: Utilize os la�os que desejar.
    2,  7, 3, 4,  21, 12 , 8,  63,  48,  16,  189,  192,  32,   567,  768,  64, ...


    34.	Fa�a um programa que armazene num vetor 6 n�meros negativos.
    Calcule a soma dos seus quadrados; se a soma for inferior a 1000
    solicite novos dados. Mostre somente a soma que satisfaz a condi��o.

    40.	Leia o vetor A tipo vetor com 10 elementos positivos. Construa o vetor B de mesmo tipo,
      e cada elemento de B deve ser a metade de cada elemento de A.
      Exiba em que Vetor e em que posi��es apareceram valores superiores a 4

    37.	Leia o vetor A de uma dimens�o m�xima de 15 elementos.
    O usu�rio poder� digitar a quantidade desejada desde que o valor seja inferior ou igual a 15.
     Construir um vetor B de mesmo tipo, de modo que cada elemento do vetor B seja fatorial do elemento correspondente do vetor A.
     Apresentar o conte�do dos dois vetores.

     38.	O usu�rio poder� digitar a quantidade de n�meros que ele deseja armazenar no vetor
     A desde que esse valor seja superior a 4 e inferior ou igual a 20. Construa o vetor B da mesma dimens�o e com os mesmos elementos do vetor A.
     Observando que o primeiro elemento de A passa a ser o �ltimo de B, o segundo elemento de A passa a ser o pen�ltimo de B
     e a assim por diante. Exibir o conte�do dos dois vetores.




      42.	Receba a temperatura m�dia de cada m�s do ano e
      armazene essas temperaturas em um vetor;
      calcule e mostre a maior, a menor temperatura do ano e a m�dia das temperaturas.
      Mostre todas as temperaturas armazenadas.

      43.	Receba a nota de dez alunos e armazene essas notas em um vetor. Calcule e mostre:
        a)	A m�dia da classe;
        b)	A quantidade de alunos aprovados, isto �, com nota >=7;
        c)	A quantidade de alunos reprovados, isto �, com nota <7.

   44. Receba o peso e o n�mero de identifica��o gerado pelo programador contendo no m�ximo de 15 pessoas. A quantidade de indiv�duos
   ser� definida pelo usu�rio. Armazene esses dados em dois vetores, o primeiro contendo os pesos e o segundo contendo os n�meros de identifica��o. Calcule e mostre:
        a)	Quantas pessoas apresentaram peso superior ao menor peso.
        b)	Armazene os n�meros de identifica��o das pessoas que satisfazem essa condi��o. Mostre o conte�do desse vetor.
        c)	Armazene num outro vetor os pesos superiores a 55 quilos e menores ou igual a 80 quilos das pessoas. Mostre o conte�do desse vetor.

    45. Efetue a leitura de dez elementos para o vetor A.
    Construa o vetor B, observando a seguinte lei de forma��o: se o valor do �ndice do vetor for par,
    o valor do elemento deve ser multiplicado pelo valor 5; sendo o �ndice �mpar, dever� ser somado ao valor existente o valor 5. Mostre o conte�do dos dois vetores.


    46.	Efetue a leitura de dez elementos para o vetor A. No final,
    apresente a somat�ria de todos os elementos do vetor A que sejam �mpares.
     Armazene no vetor B a posi��o em que est�o armazenados os n�meros �mpares. Mostre o conte�do dos dois vetores.

     47.	Leia 12 elementos inteiros para o vetor A e construa o vetor B com a mesma dimens�o, observando a seguinte lei de forma��o:
     �Todo elemento do vetor A que for �mpar deve ser multiplicado por 2; caso contr�rio, o elemento do vetor A deve permanecer constante�.
     Exiba o conte�do dos dois vetores.

    48.	Receba o sal�rio e o n�mero de identifica��o gerado pelo programador contendo no m�ximo 13 pessoas.
    A quantidade de indiv�duos ser� definida pelo usu�rio. Armazene esses dados em dois vetores,
    o primeiro contendo os sal�rios e o segundo contendo os n�meros de identifica��o. Calcule e mostre:

    d)	Armazene em um vetor os n�meros de identifica��o de todas as pessoas que apresentam a maior sal�rio.
    e)	Armazene num outro vetor os n�meros de identifica��o de todas as pessoas que apresentam a menor sal�rio encontrado. Mostre o conte�do de todos os vetores.


    49.	Leia 8 elementos (valores inteiros) para os vetores A e B de uma dimens�o do tipo vetor. Construir vetores C e D de mesmo tipo e dimens�o.
     O vetor C deve ser formado pelos elementos de
    �ndice �mpar dos vetores A e B, e O vetor D deve ser formado pelos elementos de �ndice par dos vetores A e B.
    Apresente os conte�dos de todos os vetores.

    50.	Leia dois vetores A e B de uma dimens�o com 6 elementos. O vetor A deve aceitar apenas a
    entrada de valores pares, enquanto o vetor B deve aceitar apenas a entrada de valores �mpares.
    A entrada dos dois vetores deve ser validada pelo programa e n�o pelo usu�rio. Construir o vetor C
    que dever� ser a jun��o dos vetores A e B, de modo que seja armazenado
    um elemento do vetor A e em seguida um elemento do vetor B. O vetor C contenha 12 elementos.
    Exiba os conte�dos dos vetores A e B juntos e depois o conte�do do vetor C.


    51.	Crie a fun��o Categoria que receba da fun��o main um valor do tipo inteiro e maior que zero que representa a idade
    e que verifique a categoria baseada na tabela abaixo.
    Exiba na fun��o main o n�mero e a categoria de um grupo de K n�meros definidos pelo usu�rio e armazenado no vetor Idades.
    Essa quantidade K dever� ser maior ou igual a 3 e menor ou igual a 10.

*/
#ifdef exe24


/*
24.	Receba a quantidade de sal�rios de K indiv�duos. K representa essa quantidade e deve ser digitada pelo usu�rio.
    A vari�vel Sal�rio armazena cada uma dos K sal�rios digitados. Calcule e mostre a somat�ria dos sal�rios superiores a
    3 sal�rios-m�nimos e inferior ou igual a 7 sal�rios-m�nimos.
    Exiba tamb�m o maior e o menor sal�rio encontrado. Utilize o la�o while para a entrada da quantidade
    K e um la�o while para efetuar os c�lculos e as compara��es solicitadas.
*/


float vet[1000];

float SalMinimo = 1192;


void VerificaNum(int k)
{
        if( k <= 0 )
        {
            system("cls");
            printf("\n\*******NUMERO INVALIDO!******\n");
            printf("*O PRIMEIRO TEM QUE SER MAIOR QUE O SEGUNDO!*\n");
            printf("****Digite outro numero!****\n\n");
            return main();
        }
}

float cadastroSal (int k)
{
    int i,cont=0;
    float sal, MaxSal=0, MinSal=3575,MinA, MinB;

    do
    {
        printf("\n*Cadastre o Salario!*\n De *%i* Funcion�rios \n", k);
        printf("\n*Quantidade Cadastrada : *%i*  \n", cont);
        printf("  \nDigite>>> ");
        scanf("%f", &sal);
        system("cls");

        vet[cont] = sal;
        if(sal > MaxSal)
        {
            MaxSal = sal;
        }
        if(sal < MinSal)
        {
            MinSal = sal;
        }
        cont+=1;
    }while(cont != k);
        MinA = SalMinimo*3;
        MinB = SalMinimo*7;

    /*Verifica condi��es*/
    for(i=0;i<k;i++)
    {
        if(vet[i]>= MinA && vet[i]<= MinB)
        {

            printf("\n  Sal�rio > 3 Sal�rio M�nimo Sal E Sal < 7 Sal�rio M�nimo:\n  >> %.2f", vet[i]);

        }
        if(vet[i]> MinB)
        {
            printf(" \n------------------------------------------------------------------- \n");
            printf("\n  Sal�rio > 7 Sal m�nimos: >> %.2f  \n\n", vet[i]);


        }
        if (vet[i] < MinA)
        {
            printf(" \n -------------------------------------------- \n");
            printf("\n  Sal�rio abaixo de 3 sal�rios m�nimos:\n  >> %.2f  \n\n", vet[i]);

        }
    }
        printf(" \n -------------------------------------------- \n");
        printf("\n  Maior Sal�rio cadastrado: %.2f  \n", MaxSal);
        printf("  Menor Sal�rio cadastrado: %.2f  \n", MinSal);
}

int main()
{
    Ptr;
    /*Sal�rio M�nimo R$ 1.192,40*/
    int k, salario;

    do
    {
        printf("\n\n Digite a quantidade de Funcionarios que deseja cadastrar\n");
        printf("\n Digite [0] para Sair\n\n");
        printf("  \n Digite>>> ");
        scanf("%i",&k);

        if(k != 0)
        {
            VerificaNum(k);
        }
        if(k > 0)
        {
            cadastroSal(k);
        }
        printf("\n");
        system("pause");


    }while(k != 0);


    return 0;
}

#endif // exe1

#ifdef exe25

/*
25.	Receba a quantidade de pesos de N pessoas. N representa essa quantidade e deve ser digitada pelo usu�rio.
    A vari�vel P representa cada peso digitado. Calcule e mostre a m�dia dos pesos superiores ou iguais a 70 quilos
    e inferiores ou iguais a 85,5 e a quantidade de pessoas que apresentam pesos superiores a 75 quilos. Exiba tamb�m o menor,
    a quantidade de vezes que o menor peso foi encontrado e o maior peso encontrado. Utilize o la�o while para a entrada da quantidade N e um
    la�o do while para efetuar os c�lculos e as compara��es solicitadas.

*/



float vet[1000];

float SalMinimo = 1192;


void VerificaNum(int n)
{
        if( n <= 0 )
        {
            system("cls");
            printf("\n\*******NUMERO INVALIDO!******\n");
            printf("*O PRIMEIRO TEM QUE SER MAIOR QUE O SEGUNDO!*\n");
            printf("****Digite outro numero!****\n\n");
            return main();
        }
}

float cadastroPes (int n)
{
    int i,cont=0, contPesMx=0, contPesMn=0;
    float peso, MaxPes=0, MinPes=300,calc,media;

    do
    {
        printf("\n*Cadastre o Peso!*\n De *%i* Funcion�rios \n", n);
        printf("\n*Quantidade Cadastrada : *%i*  \n", cont);
        printf("  \nDigite>>> ");
        scanf("%f", &peso);
        system("cls");

        vet[cont] = peso;
        if(peso > MaxPes)
        {
            MaxPes = peso;
            contPesMx+=1;
        }
        if(peso < MinPes)
        {
            MinPes = peso;
            contPesMn+=1;
        }
        cont+=1;
    }while(cont != n);


    /*Verifica condi��es*/
    for(i=0;i<n;i++)
    {
        if(vet[i]>= 70 && vet[i]<= 85.5)
        {
            calc += vet[i];
        }
        if(vet[i]> 75)
        {
            printf(" \n------------------------------------------------------------------- \n");
            printf("\n  Peso > 75 Kg:\n >> %.2f  \n\n", vet[i]);
        }
    }
        printf(" \n -------------------------------------------- \n");
        printf("\n Quantidade: %i Maior Peso cadastrado: %.2f  \n", contPesMx, MaxPes);
        printf(" Quantidade: %i Menor Peso cadastrado: %.2f  \n", contPesMn, MinPes);

        media = calc/n;
        printf(" \n -------------------------------------------- \n");
        printf("\n | M�dia | Peso > 70 E Pes < 85.5 Kg :\n  >> %.2f", media);
}

int main()
{
    Ptr;
    /*Sal�rio M�nimo R$ 1.192,40*/
    int n, salario;

    do
    {
        printf("\n\n Digite a quantidade de Pessoas que deseja cadastrar\n");
        printf("\n Digite [0] para Sair\n\n");
        printf("  \n Digite>>> ");
        scanf("%i",&n);

        if(n != 0)
        {
            VerificaNum(n);
        }
        if(n > 0)
        {
            cadastroPes(n);
        }
        printf("\n");
        system("pause");


    }while(n != 0);


    return 0;
}


#endif // exe25

#ifdef exe26

/*
26.	Em uma pesquisa de campo, uma editora solicitou os seguintes dados para os entrevistados: sexo,
    idade e quantidade de livros que leu no ano anterior.  Fa�a um programa que leia os dados digitados
    pelo usu�rio, sendo que dever�o ser solicitados dados at� que a idade digitada seja um valor negativo. Depois, calcule e imprima:

    a)	A quantidade total de livros lidos pelos entrevistados menores de 10 anos.
    b)	A quantidade de mulheres que leram 5 livros ou mais.
    c)   A m�dia de idade dos homens que leram menos que 5 livros.
    d) O percentual de pessoas que n�o leram LIVROS.
*/

/*
    Exemplo: como um vetor de registros pode ser representado.

     sexo       sexo     sexo      sexo
     idade      idade    idade     idade
     livros     livros   livros    livros
       0          1        2         N

    Cada posi��o do vetor armazena um conjunto de informa��es diferentes.

*/

typedef struct
{
    char sexo[200];
    int idade;
    int QtdLivros;

} Biblioteca;
Biblioteca Bibli[10];
/*Observe que a linha 406 � a que cria de fato o vetor.*/
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

    printf(" \nDeseja visualizar o que foi cadastrado: \n\n Sim [1]\n N�o [2]\n ");
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

        /*Uma fun��o chamada strcmp(string1, string2); da biblioteca de strings � utilizada para fazer a compara��o da primeira string com a segunda string. */
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
    printf("\nA m�dia de idade dos homens que leram menos que 5 livros");
    printf("\n[Total]: %i", homens);
    printf(" \n ------------------------------------------------------------------------\n");

    pessoas = pessoas/100*n;
    pessoas = pessoas*100;
    printf("\nO percentual de pessoas que n�o leram LIVROS");
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
        printf("Voc� optou por sair!!!!\n");
        system("pause");


    }while(n != 0);



    return 0;
}

#endif // exe26

#ifdef exe27

/*

    27.	Receba a quantidade K de n�meros quaisquer. K representa essa quantidade e deve
    ser digitada pelo usu�rio. A vari�vel num armazena cada uma dos K n�meros digitados.
    Calcule e mostre a quantidade de n�meros positivos divis�veis por 3, a m�dia dos n�meros negativos.
    Exiba tamb�m o maior n�mero encontrado e quantas vezes ele apareceu. Utilize o la�o do
    while para a entrada da quantidade K e um la�o for para efetuar os c�lculos e as compara��es solicitadas.



*/

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
        printf("Voc� optou por sair!!!!\n");
        system("pause");


    }while(n != 0);

    return 0;
}


#endif // exe27

#ifdef exeesp
/*
Escreva um programa que tem a estrutura de dados abaixo. O programa tem as seguintes op��es:

   1 � Entra dados do produto.
   2 � Lista todos os produtos na tela.
   3 � Pesquisar um produto pelo nome completo.
   4 � Pesquisar por fornecedor completo
   5 � Pesquisa produtos por faixa de pre�o.
   6 � Altera quantidade em estoque (entrada e sa�da) pesquisado pelo nome.
   7 � Altera pre�o de um produto pesquisado pelo nome completo
   8 � Altera produto pesquisado pelo nome completo.
   9 � Exclui produto pesquisado pelo nome completo.
   10 � Sa�da pelo usu�rio

Estrutura: produto, fornecedor, quantidade, pre�o.

A �nica estrutura de dados do programa deve ser uma vari�vel local na fun��o main(). Portanto a passagem da estrutura para as fun��es utiliza ponteiro.

Cada uma das op��es do menu � uma fun��o no programa.

Todas as opera��es devem ser feitas direto no arquivo. (utilize a fun��o fseek).

O programa tem um �nico arquivo de dados. N�o pode usar nenhum arquivo auxiliar.

O programa deve ser finalizado pelo usu�rio.

*/

/*
    Exemplo: como um vetor de registros pode ser representado.

     sexo       sexo     sexo      sexo
     idade      idade    idade     idade
     livros     livros   livros    livros
       0          1        2         N

    Cada posi��o do vetor armazena um conjunto de informa��es diferentes.

*/



/*
char palavra[20]
printf("Digite uma palavra");
scanf("%s",palavra);

int i=0;
while(palavra[i] != '\0'){
     alfabetico([i]);
     i++;
}

void alfabetico(char variavel)
{
   if((variavel >= 'a' && variavel <='z') || (variavel >= 'A' && VARIAVEL <='Z')){

	printf("� uma letra\n");
}else{
	printf("n�o � uma letra\n");

}

}
*/

int cont;
int ArmPos [10] = {0,0,0,0,0,0,0,0,0,0,0};

typedef struct
{
    char nome[200];
    float preco;
    int QtdEstoque;
    char fornecedor[200];

} Biblioteca;
Biblioteca Bibli[10];
/*Observe que a linha 406 � a que cria de fato o vetor.*/
char cadastro(int n)
{
    int i, opc,x;


/*Cadastra na Estrutura*/
    for(i=1; i<=n; i++)
    {
        for(x=1;x<=10;x++)
        {
            if(ArmPos[x] == 0)
            {
                    printf("Itens Cadastrados: [%d] no Total de: [%d]\n\n", i,n);

                    printf(" \nDigite Produto:\n ");
                    printf("  Digite>>> ");
                    scanf("%s%*c", &Bibli[x].nome);
                    printf(" \nDigite o pre�o:\n ");
                    printf("  Digite>>> ");
                    scanf("%f%*c", &Bibli[x].preco);

                    printf(" \nDigite a Quantidade itens Estoque:\n ");
                    printf("  Digite>>> ");
                    scanf("%d%*c", &Bibli[x].QtdEstoque);

                    printf(" \nDigite o Fornecedor:\n ");
                    printf("  Digite>>> ");
                    scanf("%s%*c", &Bibli[x].fornecedor);

                    ArmPos[x] = x;

                    printf("\nProdutos cadastrados com sucesso!\n");
                    break;
            }
        }
    }
}

char ListaDados(int n)
{
    int i;
    for(i=1; i<=10; i++)
        {
            if (Bibli[i].nome == "  ")
            {
                i++;
            }else{
                printf(" \n Produto: %s ", Bibli[i].nome);
                printf(" \n pre�o: %.2f ", Bibli[i].preco);
                printf(" \n Quantidade de itens: %i\n ", Bibli[i].QtdEstoque);
                printf("Fornecedor: %s\n ", Bibli[i].fornecedor);
                printf(" \n ------------------------------------------------------------------------\n");
            }
        }
}


void Busca()
{
    char nome[20];
    int i, retorno;

    printf(" \n Digite um nome: ");
    scanf("%s%*c",&nome);

    for(i=1; i<=10; i++)
    {
        retorno = strcmp(nome, Bibli[i].nome);

            if(retorno == 0)
            {
                printf("\n Registro encontrado!\n ");


                printf(" \n Produto: %s ", Bibli[i].nome);
                printf(" \n pre�o: %.2f ", Bibli[i].preco);
                printf(" \n Quantidade de itens: %i\n ", Bibli[i].QtdEstoque);
                printf("Fornecedor: %s\n ", Bibli[i].fornecedor);
                printf(" \n ------------------------------------------------------------------------\n");
                break;
            }
    }
}

void BuscaFornecedor()
{
    char Fornecedor[20];
    int i,ret;

    printf(" \n Digite o nome do fornecedor: ");
    scanf("%s%*c",&Fornecedor);

    for(i=1; i<=10; i++)
    {
        ret = strcmp(Fornecedor, Bibli[i].fornecedor);

            if(ret == 0)
            {
                printf("\n Registro encontrado!\n ");


                printf(" \n Produto: %s ", Bibli[i].nome);
                printf(" \n pre�o: %.2f ", Bibli[i].preco);
                printf(" \n Quantidade de itens: %i\n ", Bibli[i].QtdEstoque);
                printf("Fornecedor: %s\n ", Bibli[i].fornecedor);
                printf(" \n ------------------------------------------------------------------------\n");
                break;
            }
    }
}

void BuscaProduto()
{
    char nome[20], pos[10] = {0,0,0,0,0,0,0,0,0,0,0};
    int i,faixaIni, FaixaFim, cont;

    printf(" \n Digite a faixa de pre�o Entre (inicio) apartir De: ");
    scanf("%i",&faixaIni);

    printf(" \n Digite a faixa de pre�o (Final) At�: ");
    scanf("%i",&FaixaFim);

    for(i=1; i<=10; i++)
    {
        if(Bibli[i].preco >= faixaIni && Bibli[i].preco <= FaixaFim)
        {
                cont+=1;
                pos[i] = i;
        }
    }

    for(i=1; i<=10; i++)
    {
        if(pos[i] != 0)
        {
            printf("\n Registro encontrado!\n ");

            printf(" \n Produto: %s ", Bibli[i].nome);
            printf(" \n pre�o: %.2f ", Bibli[i].preco);
            printf(" \n Quantidade de itens: %i\n ", Bibli[i].QtdEstoque);
            printf("Fornecedor: %s\n ", Bibli[i].fornecedor);
            printf(" \n ------------------------------------------------------------------------\n");
        }
    }
}

void AlteraProduto()
{
    char Prod[20];
    int i, Estoque,opc, retorno;

    printf(" \n Digite o nome do Produto para Alterar: ");
    scanf("%s%*c",&Prod);

    for(i=1; i<=10; i++)
    {
        retorno = strcmp(Prod, Bibli[i].nome);

            if(retorno == 0)
            {
                printf("\n Registro encontrado!\n ");


                printf(" \n Produto: %s ", Bibli[i].nome);
                printf(" \n pre�o: %.2f ", Bibli[i].preco);
                printf(" \n Quantidade de itens: %i\n ", Bibli[i].QtdEstoque);
                printf("Fornecedor: %s\n ", Bibli[i].fornecedor);
                printf(" \n ------------------------------------------------------------------------\n");

                printf(" \n Altera Estoque:\n ");
                printf("\n\n [1] Entrada\n");
                printf("[2] Sa�da\n");
                printf("  \n Digite>>> ");
                scanf("%i",&opc);

                if(opc == 1)
                {
                    printf(" \n Digite o valor de Entrada:\n ");
                    scanf("%i",&Estoque);
                    Bibli[i].QtdEstoque += Estoque;
                }
                if(opc == 2)
                {
                    printf(" \n Digite o valor de Sa�da:\n ");
                    scanf("%i",&Estoque);
                    Bibli[i].QtdEstoque -= Estoque;
                }

                printf(" \n Produto: %s ", Bibli[i].nome);
                printf(" \n pre�o: %.2f ", Bibli[i].preco);
                printf(" \n Quantidade de itens: %i\n ", Bibli[i].QtdEstoque);
                printf("Fornecedor: %s\n ", Bibli[i].fornecedor);
                printf(" \n ------------------------------------------------------------------------\n");
                break;

            }else{

                printf("\n Registro n�o encontrado!\n ");
                break;
            }
    }

}

void AlteraPreco()
{
    char Prod[20];
    int i, retorno;
    float preco;

    printf(" \n Digite o nome do Produto para Alterar: ");
    scanf("%s%*c",&Prod);

    for(i=1; i<=10; i++)
    {
        retorno = strcmp(Prod, Bibli[i].nome);

            if(retorno == 0)
            {
                printf("\n Registro encontrado!\n ");


                printf(" \n Produto: %s ", Bibli[i].nome);
                printf(" \n pre�o: %.2f ", Bibli[i].preco);
                printf(" \n Quantidade de itens: %i\n ", Bibli[i].QtdEstoque);
                printf("Fornecedor: %s\n ", Bibli[i].fornecedor);
                printf(" \n ------------------------------------------------------------------------\n");

                printf(" \n Altera Pre�o:\n ");
                printf(" \n Digite o preco que deseja alterar:\n ");
                printf("  \n Digite>>> ");
                scanf("%f",&preco);
                Bibli[i].preco = preco;



                printf(" \n\n Produto: %s ", Bibli[i].nome);
                printf(" \n pre�o: %.2f ", Bibli[i].preco);
                printf(" \n Quantidade de itens: %i\n ", Bibli[i].QtdEstoque);
                printf("Fornecedor: %s\n ", Bibli[i].fornecedor);
                printf(" \n ------------------------------------------------------------------------\n");
                break;

            }else{

                printf("\n Registro n�o encontrado!\n ");
                break;
            }
    }

}


void AlteraNomeProduto()
{
    char Prod[20];
    int i,pos, retorno;


    printf(" \n Digite o nome do Produto para Alterar: ");
    scanf("%s%*c",&Prod);

    for(i=1; i<=10; i++)
    {
        retorno = strcmp(Prod, Bibli[i].nome);

            if(retorno == 0)
            {
                printf("\n Registro encontrado!\n ");


                printf(" \n Produto: %s ", Bibli[i].nome);
                printf(" \n pre�o: %.2f ", Bibli[i].preco);
                printf(" \n Quantidade de itens: %i\n ", Bibli[i].QtdEstoque);
                printf("Fornecedor: %s\n ", Bibli[i].fornecedor);
                printf(" \n ------------------------------------------------------------------------\n");
                pos = i;

                printf(" \n Alterar Produto:\n ");
                printf(" \n Digite o novo nome do Produto:\n ");
                printf("  \n Digite>>> ");
                scanf("%s%*c",&Bibli[pos].nome);



                printf(" \n\n Produto: %s ", Bibli[i].nome);
                printf(" \n pre�o: %.2f ", Bibli[i].preco);
                printf(" \n Quantidade de itens: %i\n ", Bibli[i].QtdEstoque);
                printf("Fornecedor: %s\n ", Bibli[i].fornecedor);
                printf(" \n ------------------------------------------------------------------------\n");
                break;

            }else{

                printf("\n Registro n�o encontrado!\n ");
                break;
            }
    }

}


void ExcluirProduto()
{
    char Prod[20];
    int i,pos, retorno, ex;


    printf(" \n Digite o nome do Produto para Alterar: ");
    scanf("%s%*c",&Prod);

    for(i=1; i<=10; i++)
    {
        retorno = strcmp(Prod, Bibli[i].nome);

            if(retorno == 0)
            {
                printf("\n Registro encontrado!\n ");


                printf(" \n Produto: %s ", Bibli[i].nome);
                printf(" \n pre�o: %.2f ", Bibli[i].preco);
                printf(" \n Quantidade de itens: %i\n ", Bibli[i].QtdEstoque);
                printf("Fornecedor: %s\n ", Bibli[i].fornecedor);
                printf(" \n ------------------------------------------------------------------------\n");
                pos = i;

                printf(" \n Excluir Produto:\n ");
                printf(" \n Deseja realmente Excluir? Para Excluir Digite [1] ou [2] Para Sair: ");
                printf("  \n Digite>>> ");
                scanf("%i", &ex);
                if(ex == 1)
                {
                    strcpy(Bibli[pos].nome, " ");
                    Bibli[pos].preco = 0;
                    Bibli[pos].QtdEstoque = 0;
                    strcpy(Bibli[pos].fornecedor, " ");

                }else{
                    break;
                }
                break;

            }else{

                printf("\n Registro n�o encontrado!\n ");
                break;
            }
    }

}



int main(void)
{
    Ptr;
    int n, opc,i;

    do
    {
            system("cls");
            printf("\n\n [1] Entra Dados do Produto\n");
            printf(" [2] Listar todos os Produtos\n");
            printf(" [3] Busca por Nome de Produtos\n");
            printf(" [4] Busca por Nome de Fornecedor\n");
            printf(" [5] Pesquisa Produto por faixa de pre�o\n");
            printf(" [6] Alterar Estoque do Produto \n");
            printf(" [7] Altera pre�o de um produto pesquisado pelo nome completo\n");
            printf(" [8] Altera produto pesquisado pelo nome\n");
            printf(" [9] Excluir Produto\n");
            printf(" [10] Sair\n");
            printf("  \n Digite>>> ");
            scanf("%i",&opc);


            switch(opc)
            {

                case 1:
                    printf("\n\n Digite a quantidade de Pessoas que deseja cadastrar\n");
                    printf("\n Digite [0] para Sair\n\n");
                    printf("  \n Digite>>> ");
                    scanf("%i",&n);


                    cadastro(n);
                break;

                case 2:
                    if(n !=0)
                    {
                        ListaDados(n);
                    }else{
                        printf("Voc� n�o inseriu dados");
                    }
                break;

                case 3:
                    if(n !=0)
                    {
                        Busca();
                    }else{
                        printf("Voc� n�o inseriu dados");
                    }
                break;

                case 4:
                    if(n !=0)
                    {
                        BuscaFornecedor();
                    }else{
                        printf("Voc� n�o inseriu dados");
                    }
                break;

                case 5:
                    if(n !=0)
                    {
                        BuscaProduto();
                    }else{
                        printf("Voc� n�o inseriu dados");
                    }
                break;

                case 6:
                    if(n !=0)
                    {
                        AlteraProduto();
                    }else{
                        printf("Voc� n�o inseriu dados");
                    }
                break;

                case 7:
                    if(n !=0)
                    {
                        AlteraPreco();
                    }else{
                        printf("Voc� n�o inseriu dados");
                    }
                break;

                case 8:
                    if(n !=0)
                    {
                        AlteraNomeProduto();
                    }else{
                        printf("Voc� n�o inseriu dados");
                    }
                break;

                case 9:
                    if(n !=0)
                    {
                      ExcluirProduto();
                    }else{
                        printf("Voc� n�o inseriu dados");
                    }
                break;

                default:

                    if(opc == 0)
                    {
                        printf("\n\n Numero Inv�lido\n");
                    }

                break;

        }

        system("pause");

    }while(opc != 10);



    return 0;
}

#endif

#ifdef Arquivo


int main(void)
{
    Ptr;

   FILE *arq;
   char palavra[20];

   /*abrindo o arquivo com o tipo de abertura w*/
   arq = fopen("arquivo.txt", "a");

   if(arq == NULL)
   {
       printf("Erro na abertura do arquivo!");
       return 1;
   }else{

       printf("Escreva uma palavra para testar grava��o de arquivo: ");
       scanf("%s%*c",palavra);

       /*usando fprintf para armazenar a string no arquivo*/
       fprintf(arq,"%s\n", palavra);
       fprintf(arq,"%s\n", palavra);

       /*usando fclose para fechar o arquivo*/
       fclose(arq);

       printf("Dados gravados com sucesso!");
   }
    return 0;
}

/*
    do{

        fflush(stdin);
        printf("Digite o nome:  ");
        gets();

    }while(getche == 's');


    fwrite(&ctt, sizeof(CONTATO),1, arquivo);
*/
#endif

#ifdef Suprimentos

/*
    listar()
    abrir o arquivo

    arquivo = fopen("arquivo.txt", "rb"); //fun��o de leitura

    //Contato - Tamanho exato da estrutura
    //Se encontrar a linha ele lista

    while(fread(&ctt, sizeof(Contato),1, arquivo) == 1){
        printf(Nome %s\n", ctt.nome);
        printf(Nome %s\n", ctt.fone);
        system("pause");

    }

    fechar o arquivo

    pesquisar(){
        Contato ctt;
        char nome[30];

        abrir o arquivo
        arquivo = fopen("arquivo.txt", "rb"); //fun��o de leitura

        fflush(stdin); //limpar caracetr buffer
        printf("Digite o nome a pesquisar: ");
        gets(nome);

        while(fread()){}


        fclose(arquivo);
        fechar arquivo

    }

    -------------------------------------------
    Ler while(!feof(arq)) //Enquanto n�o chegar no final do arquivo leia
    {
        fgets(texto,255,arq);
        printf("%s", texto);

    }

*/


void Inserir()
{
    FILE *arq;
    char nome[200];
    char serie[200];
    char departamento[200];
    char ip[200];
    char TipoCartucho[100];
    int QtdEstoque;
    int QtdIdeal;
    char pedido[100];

    int opc;
   /*abrindo o arquivo com o tipo de abertura w*/
   arq = fopen("Impressoras.txt", "a");

   if(arq == NULL)
   {
       printf("Erro na abertura do arquivo!");
       return 1;
   }else{

        do{
            printf("\n\n Digite a quantidade de Impressoras que deseja cadastrar\n");
            printf("\n Digite [0] para Sair ou [1] Para continuar\n\n");
            printf("  \n Digite>>> ");
            scanf("%i",&opc);

        if(opc != 0)
        {
            system("cls");
            fflush(stdin);
            printf("\n\nDigite o nome:  ");
            scanf("%s%*c",&nome);
            fprintf(arq,"Nome: %s\n", nome);

            fflush(stdin);
            printf("Digite a s�rie:  ");
            scanf("%s%*c",&serie);
            fprintf(arq,"Serie: %s\n", serie);

            printf("Digite o departamento:  ");
            scanf("%s%*c",departamento);
            fprintf(arq,"Departamento: %s\n", departamento);

            printf("Digite o ip: ");
            printf(" ");
            scanf("%s%*c",&ip);
            fprintf(arq,"IP: %s\n", ip);

            printf("Digite o Tipo Cartucho: ");
            scanf("%s%*c",&TipoCartucho);
            fprintf(arq,"Tipo: %s\n", TipoCartucho);

            printf("Quantidade em Estoque: ");
            scanf("%i",&QtdEstoque);
            fprintf(arq,"Qtd Estoque: %i\n", QtdEstoque);

            printf("Quantidade Ideal:  ");
            scanf("%i",&QtdIdeal);
            fprintf(arq,"QtdIdeal %i\n", QtdIdeal);

            printf("Possu� Pedido:  ");
            scanf("%s%*c",&pedido);
            fprintf(arq,"Pedido: %s\n",pedido);
            fprintf(arq,"\n-------------------------------------------------\n\n");
        }
        }while(opc != 0);

   }

    fclose(arq);
    printf("\nDados gravados com sucesso!");
}

void Listar()
{
    char texto[1000];
    int cont = 0;

    fflush(stdin);
    FILE *arq;
    arq = fopen("Impressoras.txt", "r");

   if(arq == NULL)
   {
       printf("Erro na abertura do arquivo!");
       return 1;
   }else{

    /*while(fread(&ctt,sizeof(Biblioteca),1, arq) != NULL){*/
    /*while(fgets(&ctt,sizeof(Biblioteca),arq)!= NULL)*/
    /*while(fread(&ctt,sizeof(Biblioteca),1, arq) == 1)*/


    while(!feof(arq))
    {

        fgets(texto,1000,arq);
        printf("%s", texto);
    }

   }

    fclose(arq);
}


void ler()
{

    FILE *arq;
    char Linha[1000];
    char ch;
    int i, retorno;

    arq = fopen("Impressoras.txt", "rt");
    if (arq == NULL)
    {
    printf("Problemas na abertura do arquivo\n");
    return;
    }else{
    i = 1;


    do{
    ch = fgetc(arq);

    if(ch == "PO_ADMI_R02")
    {
        printf("%c", ch);

    }






    /*i++;*/



    }while (!feof(arq));
    }



    fclose(arq);

}



int main()
{
    Ptr;
    /*Inserir();*/
    /*Listar();*/

   ler();











return 0;

}

#endif

/*Fun��o Parte 4*/

#ifdef exe1

/*
    1.	Fa�a um programa que exiba os n�meros �mpares de 50 at� 150.Utilize o la�o for.

*/
int main()
{
    int i,x;

        for(i=50;i<=150;i++)
        {
            x = i%2;
            if(x != 0)
            {
                 printf("%i\n",i);
            }
        }

    return 0;
}
#endif

#ifdef exe2

/*
    2.	Fa�a um programa que exiba os n�meros pares entre -10 e 50. Utilize o. Utilize o la�o do while.

*/

int main()
{
    int i=-11,x;

        do
        {
            i+=1;
            x = i%2;
            if(x == 0)
            {
                 printf("%i\n",i);
            }

        }while(i>=-11 && i<51);


    return 0;
}

#endif // exe2

#ifdef exe3

/*
    3.	Fa�a um programa que exiba os n�meros que s�o m�ltiplos de 5 entre 1 e 100. Utilize o la�o while.

*/

int main()
{
    int cont;

    cont=0;
    do
    {
        cont+=5;
        printf("num=%d\n",cont);

    } while (cont<100);

    return 0;
}

#endif // exe3

#ifdef exe4
/*
    4.	Fa�a um programa que exiba os n�meros que s�o m�ltiplos de 3 e s�o �mpares.
*/

int main()
{
    int cont,x;

    cont=0;
    do
    {
        cont+=3;
        x = cont%2;
        if(x!=0)
        {
            printf("num=%d\n",cont);
        }

    } while (cont<100);

    return 0;
}

#endif // exe4

#ifdef exe5
/*
    5.	Fa�a um programa em C que solicite ao usu�rio a quantidade de termos que ele deseja exibir da seguinte sequ�ncia:3, 6, 9, 12, 15,...
		Obs.: Crie uma fun��o para garantir que essa quantidade deve ser deve ser maior que zero e representada pela vari�vel K.

*/
int k,num,cont;

void Mzero()
{
    if(k<0)
    {
        printf("Quantidade deve ser maior que zero\n");
        system("pause");
        system("cls");
        return main();
    }
}

main()
{

    printf("Digite a quantidade >0 3, 6, 9, 12, 15,...\n");
    scanf("%i",&k);
    Mzero();
    for(cont=1;cont<=k;cont+=1)
    {
        num+=3;
        printf("numero digitado = %d\n",num);
    }

}



#endif // exe5

#ifdef exe6

/*
    6.	Fa�a um programa em C que solicite ao usu�rio a quantidade de termos que ele deseja exibir da seguinte sequ�ncia: 1/4, 1/8, 1/12, 1/16, 1/20,...
    Obs.: Crie uma fun��o para garantir que essa quantidade deve ser deve ser maior que zero e representada pela vari�vel K.
*/
int k,cont,num=1,den=0;

void Mzero()
{
    if(k<0)
    {
        printf("Quantidade deve ser maior que zero\n");
        system("pause");
        system("cls");
        return main();
    }
}


main()
{
    setlocale(LC_ALL,"");
    do{
        printf("Digite a quantidade>0 da segu�ncia: 1/4, 1/8, 1/12, 1/16, 1/20,...\n");
        scanf("%i",&k);
        Mzero();

    }while(k<=0);
    for(cont=1;cont<=k;cont+=1)
    {
        num=1;
        den+=4;
        printf("%d/%d\n",num,den);
    }
}


#endif // exe6

#ifdef exe7

/*
    7.	Fa�a um programa em C que solicite ao usu�rio a quantidade de termos que ele deseja exibir da seguinte sequ�ncia: 2/5, 4/10, 6/15, 8/20, 10/25, 12/30,...
    Obs.: Crie uma fun��o para garantir que essa quantidade deve ser deve ser maior que zero e representada pela vari�vel K.
.
*/
int k,cont,num,den=0;

void Mzero()
{
    if(k<0)
    {
        printf("Quantidade deve ser maior que zero\n");
        system("pause");
        system("cls");
        return main();
    }
}


main()
{
    setlocale(LC_ALL,"");
    do{
        printf("Digite a quantidade>0 da segu�ncia: 2/5, 4/10, 6/15, 8/20, 10/25, 12/30,...\n");
        scanf("%i",&k);
        Mzero();

    }while(k<=0);
    for(cont=1;cont<=k;cont+=1)
    {
        num+=2;
        den+=5;
        printf("%d/%d\n",num,den);
    }
}

#endif // exe7

#ifdef exe8

/*
    8.	Fa�a um programa em C que solicite ao usu�rio a quantidade de termos representada pela vari�vel X
        que representa a quantidade de termos que o usu�rio deseja. H representa cada um desses n�meros, calcule o produto dos X n�meros.
        OBS: H deve ser maior ou igual a 15.
*/


int x,h,cont,prod=1;


void Mzero()
{
    if(x<=0)
    {
        printf("Quantidade deve ser maior que 0\n");
        system("pause");
        system("cls");
        return main();
    }
}

void Mquinze()
{
    if(h<15)
    {
        printf(" Numero deve ser maior que 15\n");
        system("pause");
        system("cls");
        return main();
    }
}


main()
{
    setlocale(LC_ALL,"");

        printf(" Digite a quantidade que deseja: ");
        scanf("%i",&x);
        Mzero();

    for(cont=1;cont<=x;cont++)
    {
        printf(" Digite o numero: ");
        scanf("%i",&h);
        Mquinze();
        printf(" %i� numero = %i\n\n",cont,h);

        prod *=h;
    }
    printf(" \n\n**O Produto dos numeros: %i\n",prod);



    return 0;

}


#endif // exe8


#ifdef exe9

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
#endif

/*
    Fa�a um programa que receba tr�s notas de um aluno, calcule e mostre a m�dia aritm�tica
    e a mensagem que segue a tabela abaixo. Para alunos de exame, calcule e mostre a nota que
    dever� ser tirada no exame para aprova��o, considerando a m�dia no exame � 6.0.


*/

#ifdef exe10

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

#endif
/*
    3.	Fa�a um programa que mostre o menu de op��es a seguir, receba a op��o do usu�rio e os dados necess�rios para executar cada opera��o.
    Menu de op��es:
    1.	Somar dois n�meros
    2.	Raiz quadrada de um n�mero
    3.	Divis�o do primeiro pelo segundo n�mero
    4.	Um n�mero positivo elevado ao quadrado.
    5.	Encerrar o programa.
    Digite a op��o desejada:
    Obs:Garante que s� sejam v�lidos  os n�meros de 1 at� 5.As op��es de 1 at� 4 devem garantir o retorno ao menu de op��es  para uma nova escolha.

*/


#ifdef exe12
int opc,a,b,c;

int Soma()
{
    c = a+b;
    printf("\nValor da soma: %i",c);
}

int Raiz()
{

    b = (int)sqrt( a );
    printf("\nValor da raiz: %i",b);
}


int main()
{
        setlocale(LC_ALL,"Portuguese");



        printf(" \n[1] Somar dois Numeros ");
        printf(" \n[2] Raiz quadrada de um numero ");
        printf(" \n[9] Para Sair\n");
        printf("\nDigite uma op��o: ");scanf("%d",&opc);

        switch(opc)
        {
            case 1:
                printf("\nDigite um numero para somar:");
                scanf("%i",&a);
                printf("\nDigite um numero para somar:");
                scanf("%i",&b);
                Soma();
            break;

            case 2:
                printf("\nDigite um numero para calcular a raiz:");
                scanf("%i",&a);
                Raiz();
            break;

            case 9:
                system("exit");
            break;

            default:
                printf("Op��o Inv�lida!");
            break;
        }




    return 0;
}

#endif // exe1

/*
    1.	Crie uma fun��o chamada Notas para garantir o recebimento de cada uma das notas uma de cada vez. As notas dever�o ser maiores ou iguais a
    zero e menores ou iguais a dez. Receba quatro valores referentes �s notas escolares de um aluno. Crie uma fun��o M�dia para calcular a m�dia aritm�tica do aluno.
    Exiba a m�dia e se o aluno foi aprovado ou n�o no interior da fun��o main.
    Ele ser� aprovado se a m�dia for maior ou igual a 6. Caso contr�rio informe que ele est� reprovado.

*/

#ifdef exe13

int ExibeMedia(int notas[4]);
int Notas(int notas[4]);

/*
    Fun��o para garantir que as notas seja entre 0 e 10
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
    Calcular M�dia -> recebe a fun��o verificada pega cada posi��o e extrai a m�dia
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

/*
    2.	Crie uma fun��o que garanta o recebimento de n�meros maiores que zero e menores ou iguais a 10.
    Receba dois n�meros utilizando est� fun��o e o terceiro n�mero dever� ser a soma dos dois anteriores.
    Crie a fun��o produto para calcular o produto destes tr�s n�meros.
    No interior da fun��o main verifique se o produto obtido for menor que 500, solicite novos dados.

*/


#ifdef exe14
int vet[11]={0,1,2,3,4,5,6,7,8,9,10};

int *ptr, posicao, i, num=0, num2=0, num3=0, produto;
int VerificaNum (int num, int num2);
int CalcProd(int Num, int Num2, int Num3);


int VerificaNum (int num, int num2)
{
    /*
        Foi deifinido um vetor de 11 posi��es para garantir que os numeros estejam sempre nessa faixa de verifica��o
        Recebe o endere�o do vetor
       *ptr aponta para o primeiro conteudo do vetor e armazena na vari�vel posicao
       o if no for verifica se determinada posi��o existe comparando com a vari�vel num e num2

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

/*


    3.	Crie uma fun��o que garanta que cada lado deve ser maior que zero. Receba tr�s n�meros que representam os lados de um tri�ngulo.
    Garanta no interior da fun��o main a exist�ncia de um tri�ngulo. Informe ao usu�rio se o tri�ngulo � is�scele, equil�tero ou escaleno.

    Observa��es:

    a.	Garantir que cada lado � menor que a soma dos outros dois lados.
    b.	O tri�ngulo � equil�tero quando todos os lados s�o iguais.
    c.	O tri�ngulo � is�scele quando apenas dois lados s�o iguais.
    d.	O tri�ngulo � escaleno quando todos os lados s�o diferentes



*/

#ifdef exe15


int a,b,c;
char condicao1, condicao2, condicao3, condicaofinal;

/*
        S� ir� existir um tri�ngulo se, somente se,
        os seus lados obedeceram � seguinte regra: um de seus lados deve ser maior que o valor absoluto (m�dulo)
        da diferen�a dos outros dois lados e menor que a soma dos outros dois lados.

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

#endif

/*
    4.	Crie uma fun��o que garanta que um n�mero � negativo. Receba dois n�meros utilizando  esta fun��o.
    Crie a fun��o Verifcamultiplos e verifique se estes dois n�meros s�o m�ltiplos ou n�o.
    Exiba se s�o m�ltiplos ou n�o no interior da fun��o VerificaMultiplos. Pesquise na internet o que s�o m�ltiplos.


*/

#ifdef exe16
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
        return printf("\n*****Numero invalido!! so sao aceitos numeros negativos");
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

/*
    Crie a fun��o Esfera que receba da fun��o main o valor do raio e calcule o volume da esfera o seu volume v =(4*Pi*R3)/3.
    Crie tamb�m uma fun��o para garantir que o raio deve ser maior que zero.
    Exiba o  volume  da esfera no interior da fun��o main.

*/

#ifdef exe17
/*
    CALCULA O VOLUME DE UMA ESFERA

*/
int raio=0;
int num=0;

int Esfera(int raio);
int MaiorqZero(int num);

int Esfera(int raio)
{
    float volume;
    raio = pow(raio,3);
    volume = 4.0 / 3.0*M_PI*raio;

    return printf("\n%.2f",volume);
}

/*
Verifica se o numero � maior que zero e passa o valor para a fun��o esfera que calcula o valor
*/
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

int main()
{


    printf("CALCULA O VOLUME DE UMA ESFERA\n\n");


    printf("Insira o valor do raio da esfera:  ");
    scanf(" %d", &raio);
    MaiorqZero(raio);

    printf("\n\n");

    return 0;
}

#endif

/*
    2.	Crie a fun��o verifica para verificar e exibir no seu interior se o n�mero � positivo, negativo ou zero.
    O n�mero dever� ser do tipo inteiro e  dever� ser recebido  no interior  fun��o main...
*/

#ifdef exe18
void VerificaNum(int num);
int num=0;

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

int main()
{

    printf("VERIFICA SE NUMERO E POSITIVO OU NEGATIVO\n\n");
    printf("Insira um Numero:  ");
    scanf(" %d", &num);
    VerificaNum(num);

    return 0;
}
#endif
/*
    3.	Crie a fun��o Divis�o que receba da fun��o main dois n�meros diferentes de zero que possibilitem o c�lculo da divis�o do primeiro pelo segundo.
    Crie uma fun��o para garantir que os n�meros devem ser diferentes de zero.
    Exiba na fun��o main os n�meros e o resultado obtido na fun��o Divis�o.
*/
#ifdef exe19

void Divisao (int a, int b);
int a,b;

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

int main()
{


    printf("\nDIVISAO\n\n");
    printf("Digite um numero para dividir: ");
    scanf("%d", &a);
    printf("Digite o segundo numero para quanto quer dividir: ");
    scanf("%d", &b);
    Divisao(a,b);


    return 0;
}


#endif

#ifdef exe28

/*

 28.	Gere a seguinte sequ�ncia abaixo para K termos.
    K representa a quantidade de n�meros que o usu�rio gostaria quer
     fosse exibida dessa sequ�ncia. Mostre tamb�m a somat�ria apenas dos n�meros divis�veis por
     3 dessa sequ�ncia. Utilize o la�o do while para a entrada da quantidade K e um la�o for para
     efetuar os c�lculos solicitados.

		1, 1, 2, 3, 5, 8, 13, 21,.....
*/



int ExibaSeq(int num)
{
   int i, vet[num];
   int t1 = 0, t2 = 1;
   int nextTerm = t1 + t2;

   printf("\nSequ�ncia Escolhida: \n");
   printf("%d ", t2);

   for (i = 3; i <= num+1; ++i)
    {
        printf(", %d ", nextTerm);
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
        vet[i] = nextTerm;
    }
    ExibeDivTres(vet, num);
}

int ExibeDivTres(int vet[], int num)
{
    int i;
    printf("\n\n\nDivisivel por Tr�s: \n");
    for (i = 1; i <= num; ++i)
    {

        vet[1] = 1;
        vet[2] = 1;
        if(vet[i]%3 == 0){
            printf(" %d, ", vet[i]);
        }
    }
    printf("\n\n");
    system("pause");
}

int main(){

    Ptr;
    int opc;

    do
    {
        system("cls");
        printf("\n\nDigite a quantidade de Termos que deseja exibir\n ");
        printf("\nOu [0] para Sair\n ");
        printf("\nDigite>>> ");
        scanf("%i",&opc);
        if(opc != 0)
        {
            ExibaSeq(opc);

        }else{
            printf("\nVoc� optou por sair!");
            printf("\n\n");
        }

    }while(opc != 0);



return 0;

}

#endif // exe

#ifdef exe29
/*
32.	Receba doze n�meros positivos e armazene no vetor A.
    Ap�s a alimenta��o de todos os n�meros mostre apenas os
    n�meros maiores que 121 que est�o armazenados no vetor.
*/

int ExibaVet(int opc)
{
    int vet[8];
    int i;

    for(i=0;i<=8;i++)
    {
        vet[i] = opc;
        if(vet[i]>121){
            printf("Numero Maior que 121: %i", vet[i]);
            break;
        }
        else{
            break;
        }
    }
}

int main(){

    Ptr;
    int opc, i=1;

    while(i <= 8)
    {
        printf("\n\nDigite a quantidade de Termos que deseja exibir\n ");
        printf("\nOu [0] para Sair\n ");
        printf("\nDigite>>> ");
        scanf("%i",&opc);

        ExibaVet(opc);
        i++;
    }

return 0;

}

#endif

#ifdef exe30

/*
    33.	Leia oito elementos e armazene-os no vetor A. Construa o vetor B de mesma dimens�o
    com os elementos do vetor A multiplicados por 3. Apresente o conte�do dos dois vetores.
*/
int vetA[8];
int vetB[8];

int ExibaVet()
{
    int i;

    for(i=1;i<=8;i++)
    {
        printf("Conte�do Vetor A: %i\n",vetA[i]);
    }
    printf("\n\n");
    for(i=1;i<=8;i++)
    {
        printf("Conte�do Vetor B: %i\n",vetB[i]*3);
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

#endif // exe29

#ifdef exe31

/*
    35. Armazene num vetor dez n�meros positivos. Exiba o conte�do do vetor.
    Mostre o maior n�mero, quantas vezes ele foi digitado e em que posi��es ele apareceu dentro do vetor.
*/
int vet[10];

void ExibaVet()
{
    int i, MaiorNumero=0, cont=0;
    printf("\nDados do Vetor\n\n");
    for(i=1;i<=10;i++)
    {
        printf("vetor: %i\n",vet[i]);
        if(vet[i]>MaiorNumero)
        {
            MaiorNumero = vet[i];
        }
    }
    for(i=1;i<=10;i++)
    {
        if(vet[i] == MaiorNumero)
        {
            cont +=1;
        }
    }
    printf("\n");
    printf("Maior Numero: %i\n", MaiorNumero);
    printf("Numero de vezes que foi Digitado: %i\n", cont);
    printf("\n");
    for(i=1;i<=10;i++)
    {
        if(vet[i] == MaiorNumero)
        {
            printf("posi��o: %i\n", i);
        }
    }
    printf("\n\n");
}


int main(){

    Ptr;
    int opc, i=1;

    while(i <= 10)
    {
        system("cls");
        printf("\n\nDigite 10 Numeros para Armazenar no Vetor [%i]\n ", i);
        printf("\nOu [0] para Sair\n ");
        printf("\nDigite>>> ");
        scanf("%i",&opc);
        vet[i] = opc;

        i++;
    }
    ExibaVet();

return 0;

}

#endif // exe31

#ifdef exe32
/*
    36.	Armazene no vetor A 10 elementos positivos. Construa o vetor B do mesmo tipo e dimens�o.
        Cada elemento do vetor B deve ser o valor negativo do elemento correspondente do vetor A.
        Desta forma, se em A [1] estiver armazenado o elemento 8 deve estar em B [1] o valor �8,
        e assim por diante. Apresentar o conte�do dos dois vetores.
*/
int vetA[6];
int vetB[6];


int ExibaVet(){

    int i;

    printf("\nValores nos vetores\n\n");

    for(i=1;i<=6;i++)
    {
        printf("Valor: %i posi��o: %i\n", vetA[i], i);
    }
    printf("\n\n");
    for(i=1;i<=6;i++)
    {
        printf("Valor: %i posi��o: %i\n", vetB[i], i);
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

#endif // exe32

#ifdef exe33

/*
    39.	Leia tr�s vetores (A, B e C) de uma dimens�o com 5 elementos cada.
        Construa o vetor D, sendo este a jun��o dos tr�s outros vetores. Armazene no vetor D o primeiro elemento do vetor
        A depois do B e do C e assim sucessivamente.  Apresentar o conte�do de todos os vetores.
        Exiba quantas vezes apareceram n�meros negativos no vetor D.
*/


int vetA[5];
int vetB[5];
int vetC[5];
int vetD[15];

void OrdenaVet(int vet[], int n)
{
    int i, j, aux;

  for (i=0; i<n; i++)
    for (j=0; j<n-i-1; j++)
    if (vet[j]>vet[j+1])
    {
        aux = vet[j];
        vet[j] = vet[j+1];
        vet[j+1] = aux;
    }

    printf("\n");
    for(i=0; i<n; i++)
    {
        printf("Vetor Ordenado [%i]: %i\n ", i, vet[i]);
    }
}

int ExibaVet(){

    int i;

    printf("\nValores nos vetores\n\n");

    for(i=0;i<5;i++)
    {
        vetA[i] = i;
        printf("Valor: %i\n", vetA[i]);
    }

    printf("\n");

    for(i=0;i<5;i++)
    {
        vetB[i] = i+11;
        printf("Valor: %i\n", vetB[i]);

    }
    printf("\n");

    for(i=0;i<5;i++)
    {
        vetC[i] = i+82;
        printf("Valor: %i\n", vetC[i]);

    }
    printf("\n");

    for(i=0;i<5;i++)
    {
        vetD[i*3] = vetA[i];
    }

    for(i=0;i<5;i++)
    {
        vetD[i*3+1] = vetB[i];
    }

    for(i=0;i<5;i++)
    {
        vetD[i*3+2] = vetC[i];
    }


    for(i=0;i<15;i++)
    {
        printf("Vetor D [%i] : %i \n", i, vetD[i]);
    }

    OrdenaVet(vetD, 15);

}


int main(){

    Ptr;

    ExibaVet();

return 0;

}

#endif // exe33

#ifdef exe34
/*
    41.	Elabore um programa que efetue o c�lculo de uma tabuada de um n�mero
          qualquer e armazene os resultados no vetor A de uma dimens�o para 10 elementos.
          O usu�rio dever� digitar o n�mero e o programa dever� construir e exibir a tabuada correspondente.

*/

vet[10];

int CalcTabuada(int num)
{
    int i;
    for(i=0;i<=10;i++)
    {
        vet[i] = num*i;
    }

    printf("\n\n");

    for(i=0;i<=10;i++)
    {

        printf("| %i X %i = %i\n", num, i, vet[i]);
    }
    printf("\n\n");
    system("pause");
}

void mostra()
{
     printf(" **************************************************\n");
     printf("                     TABUADA                    \n");
     printf(" **************************************************\n");

}

int main(){
Ptr;

    int opc, i=1;

    do
    {
        system("cls");
        mostra();
        printf("\n Digite o Numero da Tabuada que voc� Quer saber\n ");
        printf("\n Ou [0] para Sair\n ");
        printf("\n Digite>>> ");
        scanf("%i",&opc);

        if(opc != 0){
            CalcTabuada(opc);
        }else{

        printf("\n\n");
        printf("Voc� optou por Sair!");
        printf("\n\n");

        }

    }while(opc > 0);

return 0;

}
#endif // exe34

