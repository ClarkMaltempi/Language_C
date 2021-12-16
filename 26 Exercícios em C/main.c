#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <conio.h>
#define Ptr setlocale(LC_ALL,"Portuguese");
#define exe34


/*


    30.	Uma empresa contratou a quantidade de funcionários representada pela variável Y.
    Conforme o valor das vendas mensais, os funcionários adquirem pontos que determinarão
    seus salários ao final de cada mês. Sabe-se que esses funcionários trabalharão nos meses
    de novembro a janeiro do ano subsequente. Utilize os laços que desejar.

    a)	Leia as pontuações nos três meses de cada funcionário;
    b)	Calcule e mostre a pontuação geral de cada funcionário nos três meses.
    c)	Calcule e mostre a média das pontuações de cada funcionário nos três meses.
    d)	Determine e mostre a maior pontuação atingida entre todos os funcionários nos três meses.


    31.	Solicite ao usuário a quantidade de números de termos que ele deseja.
    Exiba a somatória dos valores da série abaixo referente a quantidade determinada
    pelo usuário: Utilize os laços que desejar.
    2,  7, 3, 4,  21, 12 , 8,  63,  48,  16,  189,  192,  32,   567,  768,  64, ...


    34.	Faça um programa que armazene num vetor 6 números negativos.
    Calcule a soma dos seus quadrados; se a soma for inferior a 1000
    solicite novos dados. Mostre somente a soma que satisfaz a condição.

    40.	Leia o vetor A tipo vetor com 10 elementos positivos. Construa o vetor B de mesmo tipo,
      e cada elemento de B deve ser a metade de cada elemento de A.
      Exiba em que Vetor e em que posições apareceram valores superiores a 4

    37.	Leia o vetor A de uma dimensão máxima de 15 elementos.
    O usuário poderá digitar a quantidade desejada desde que o valor seja inferior ou igual a 15.
     Construir um vetor B de mesmo tipo, de modo que cada elemento do vetor B seja fatorial do elemento correspondente do vetor A.
     Apresentar o conteúdo dos dois vetores.

     38.	O usuário poderá digitar a quantidade de números que ele deseja armazenar no vetor
     A desde que esse valor seja superior a 4 e inferior ou igual a 20. Construa o vetor B da mesma dimensão e com os mesmos elementos do vetor A.
     Observando que o primeiro elemento de A passa a ser o último de B, o segundo elemento de A passa a ser o penúltimo de B
     e a assim por diante. Exibir o conteúdo dos dois vetores.




      42.	Receba a temperatura média de cada mês do ano e
      armazene essas temperaturas em um vetor;
      calcule e mostre a maior, a menor temperatura do ano e a média das temperaturas.
      Mostre todas as temperaturas armazenadas.

      43.	Receba a nota de dez alunos e armazene essas notas em um vetor. Calcule e mostre:
        a)	A média da classe;
        b)	A quantidade de alunos aprovados, isto é, com nota >=7;
        c)	A quantidade de alunos reprovados, isto é, com nota <7.

   44. Receba o peso e o número de identificação gerado pelo programador contendo no máximo de 15 pessoas. A quantidade de indivíduos
   será definida pelo usuário. Armazene esses dados em dois vetores, o primeiro contendo os pesos e o segundo contendo os números de identificação. Calcule e mostre:
        a)	Quantas pessoas apresentaram peso superior ao menor peso.
        b)	Armazene os números de identificação das pessoas que satisfazem essa condição. Mostre o conteúdo desse vetor.
        c)	Armazene num outro vetor os pesos superiores a 55 quilos e menores ou igual a 80 quilos das pessoas. Mostre o conteúdo desse vetor.

    45. Efetue a leitura de dez elementos para o vetor A.
    Construa o vetor B, observando a seguinte lei de formação: se o valor do índice do vetor for par,
    o valor do elemento deve ser multiplicado pelo valor 5; sendo o índice ímpar, deverá ser somado ao valor existente o valor 5. Mostre o conteúdo dos dois vetores.


    46.	Efetue a leitura de dez elementos para o vetor A. No final,
    apresente a somatória de todos os elementos do vetor A que sejam ímpares.
     Armazene no vetor B a posição em que estão armazenados os números ímpares. Mostre o conteúdo dos dois vetores.

     47.	Leia 12 elementos inteiros para o vetor A e construa o vetor B com a mesma dimensão, observando a seguinte lei de formação:
     “Todo elemento do vetor A que for ímpar deve ser multiplicado por 2; caso contrário, o elemento do vetor A deve permanecer constante”.
     Exiba o conteúdo dos dois vetores.

    48.	Receba o salário e o número de identificação gerado pelo programador contendo no máximo 13 pessoas.
    A quantidade de indivíduos será definida pelo usuário. Armazene esses dados em dois vetores,
    o primeiro contendo os salários e o segundo contendo os números de identificação. Calcule e mostre:

    d)	Armazene em um vetor os números de identificação de todas as pessoas que apresentam a maior salário.
    e)	Armazene num outro vetor os números de identificação de todas as pessoas que apresentam a menor salário encontrado. Mostre o conteúdo de todos os vetores.


    49.	Leia 8 elementos (valores inteiros) para os vetores A e B de uma dimensão do tipo vetor. Construir vetores C e D de mesmo tipo e dimensão.
     O vetor C deve ser formado pelos elementos de
    índice ímpar dos vetores A e B, e O vetor D deve ser formado pelos elementos de índice par dos vetores A e B.
    Apresente os conteúdos de todos os vetores.

    50.	Leia dois vetores A e B de uma dimensão com 6 elementos. O vetor A deve aceitar apenas a
    entrada de valores pares, enquanto o vetor B deve aceitar apenas a entrada de valores ímpares.
    A entrada dos dois vetores deve ser validada pelo programa e não pelo usuário. Construir o vetor C
    que deverá ser a junção dos vetores A e B, de modo que seja armazenado
    um elemento do vetor A e em seguida um elemento do vetor B. O vetor C contenha 12 elementos.
    Exiba os conteúdos dos vetores A e B juntos e depois o conteúdo do vetor C.


    51.	Crie a função Categoria que receba da função main um valor do tipo inteiro e maior que zero que representa a idade
    e que verifique a categoria baseada na tabela abaixo.
    Exiba na função main o número e a categoria de um grupo de K números definidos pelo usuário e armazenado no vetor Idades.
    Essa quantidade K deverá ser maior ou igual a 3 e menor ou igual a 10.

*/
#ifdef exe24


/*
24.	Receba a quantidade de salários de K indivíduos. K representa essa quantidade e deve ser digitada pelo usuário.
    A variável Salário armazena cada uma dos K salários digitados. Calcule e mostre a somatória dos salários superiores a
    3 salários-mínimos e inferior ou igual a 7 salários-mínimos.
    Exiba também o maior e o menor salário encontrado. Utilize o laço while para a entrada da quantidade
    K e um laço while para efetuar os cálculos e as comparações solicitadas.
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
        printf("\n*Cadastre o Salario!*\n De *%i* Funcionários \n", k);
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

    /*Verifica condições*/
    for(i=0;i<k;i++)
    {
        if(vet[i]>= MinA && vet[i]<= MinB)
        {

            printf("\n  Salário > 3 Salário Mínimo Sal E Sal < 7 Salário Mínimo:\n  >> %.2f", vet[i]);

        }
        if(vet[i]> MinB)
        {
            printf(" \n------------------------------------------------------------------- \n");
            printf("\n  Salário > 7 Sal mínimos: >> %.2f  \n\n", vet[i]);


        }
        if (vet[i] < MinA)
        {
            printf(" \n -------------------------------------------- \n");
            printf("\n  Salário abaixo de 3 salários mínimos:\n  >> %.2f  \n\n", vet[i]);

        }
    }
        printf(" \n -------------------------------------------- \n");
        printf("\n  Maior Salário cadastrado: %.2f  \n", MaxSal);
        printf("  Menor Salário cadastrado: %.2f  \n", MinSal);
}

int main()
{
    Ptr;
    /*Salário Mínimo R$ 1.192,40*/
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
25.	Receba a quantidade de pesos de N pessoas. N representa essa quantidade e deve ser digitada pelo usuário.
    A variável P representa cada peso digitado. Calcule e mostre a média dos pesos superiores ou iguais a 70 quilos
    e inferiores ou iguais a 85,5 e a quantidade de pessoas que apresentam pesos superiores a 75 quilos. Exiba também o menor,
    a quantidade de vezes que o menor peso foi encontrado e o maior peso encontrado. Utilize o laço while para a entrada da quantidade N e um
    laço do while para efetuar os cálculos e as comparações solicitadas.

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
        printf("\n*Cadastre o Peso!*\n De *%i* Funcionários \n", n);
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


    /*Verifica condições*/
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
        printf("\n | Média | Peso > 70 E Pes < 85.5 Kg :\n  >> %.2f", media);
}

int main()
{
    Ptr;
    /*Salário Mínimo R$ 1.192,40*/
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
    idade e quantidade de livros que leu no ano anterior.  Faça um programa que leia os dados digitados
    pelo usuário, sendo que deverão ser solicitados dados até que a idade digitada seja um valor negativo. Depois, calcule e imprima:

    a)	A quantidade total de livros lidos pelos entrevistados menores de 10 anos.
    b)	A quantidade de mulheres que leram 5 livros ou mais.
    c)   A média de idade dos homens que leram menos que 5 livros.
    d) O percentual de pessoas que não leram LIVROS.
*/

/*
    Exemplo: como um vetor de registros pode ser representado.

     sexo       sexo     sexo      sexo
     idade      idade    idade     idade
     livros     livros   livros    livros
       0          1        2         N

    Cada posição do vetor armazena um conjunto de informações diferentes.

*/

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

#endif // exe26

#ifdef exe27

/*

    27.	Receba a quantidade K de números quaisquer. K representa essa quantidade e deve
    ser digitada pelo usuário. A variável num armazena cada uma dos K números digitados.
    Calcule e mostre a quantidade de números positivos divisíveis por 3, a média dos números negativos.
    Exiba também o maior número encontrado e quantas vezes ele apareceu. Utilize o laço do
    while para a entrada da quantidade K e um laço for para efetuar os cálculos e as comparações solicitadas.



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
        printf("Você optou por sair!!!!\n");
        system("pause");


    }while(n != 0);

    return 0;
}


#endif // exe27

#ifdef exeesp
/*
Escreva um programa que tem a estrutura de dados abaixo. O programa tem as seguintes opções:

   1 – Entra dados do produto.
   2 – Lista todos os produtos na tela.
   3 – Pesquisar um produto pelo nome completo.
   4 – Pesquisar por fornecedor completo
   5 – Pesquisa produtos por faixa de preço.
   6 – Altera quantidade em estoque (entrada e saída) pesquisado pelo nome.
   7 – Altera preço de um produto pesquisado pelo nome completo
   8 – Altera produto pesquisado pelo nome completo.
   9 – Exclui produto pesquisado pelo nome completo.
   10 – Saída pelo usuário

Estrutura: produto, fornecedor, quantidade, preço.

A única estrutura de dados do programa deve ser uma variável local na função main(). Portanto a passagem da estrutura para as funções utiliza ponteiro.

Cada uma das opções do menu é uma função no programa.

Todas as operações devem ser feitas direto no arquivo. (utilize a função fseek).

O programa tem um único arquivo de dados. Não pode usar nenhum arquivo auxiliar.

O programa deve ser finalizado pelo usuário.

*/

/*
    Exemplo: como um vetor de registros pode ser representado.

     sexo       sexo     sexo      sexo
     idade      idade    idade     idade
     livros     livros   livros    livros
       0          1        2         N

    Cada posição do vetor armazena um conjunto de informações diferentes.

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

	printf("É uma letra\n");
}else{
	printf("não é uma letra\n");

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
/*Observe que a linha 406 é a que cria de fato o vetor.*/
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
                    printf(" \nDigite o preço:\n ");
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
                printf(" \n preço: %.2f ", Bibli[i].preco);
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
                printf(" \n preço: %.2f ", Bibli[i].preco);
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
                printf(" \n preço: %.2f ", Bibli[i].preco);
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

    printf(" \n Digite a faixa de preço Entre (inicio) apartir De: ");
    scanf("%i",&faixaIni);

    printf(" \n Digite a faixa de preço (Final) Até: ");
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
            printf(" \n preço: %.2f ", Bibli[i].preco);
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
                printf(" \n preço: %.2f ", Bibli[i].preco);
                printf(" \n Quantidade de itens: %i\n ", Bibli[i].QtdEstoque);
                printf("Fornecedor: %s\n ", Bibli[i].fornecedor);
                printf(" \n ------------------------------------------------------------------------\n");

                printf(" \n Altera Estoque:\n ");
                printf("\n\n [1] Entrada\n");
                printf("[2] Saída\n");
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
                    printf(" \n Digite o valor de Saída:\n ");
                    scanf("%i",&Estoque);
                    Bibli[i].QtdEstoque -= Estoque;
                }

                printf(" \n Produto: %s ", Bibli[i].nome);
                printf(" \n preço: %.2f ", Bibli[i].preco);
                printf(" \n Quantidade de itens: %i\n ", Bibli[i].QtdEstoque);
                printf("Fornecedor: %s\n ", Bibli[i].fornecedor);
                printf(" \n ------------------------------------------------------------------------\n");
                break;

            }else{

                printf("\n Registro não encontrado!\n ");
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
                printf(" \n preço: %.2f ", Bibli[i].preco);
                printf(" \n Quantidade de itens: %i\n ", Bibli[i].QtdEstoque);
                printf("Fornecedor: %s\n ", Bibli[i].fornecedor);
                printf(" \n ------------------------------------------------------------------------\n");

                printf(" \n Altera Preço:\n ");
                printf(" \n Digite o preco que deseja alterar:\n ");
                printf("  \n Digite>>> ");
                scanf("%f",&preco);
                Bibli[i].preco = preco;



                printf(" \n\n Produto: %s ", Bibli[i].nome);
                printf(" \n preço: %.2f ", Bibli[i].preco);
                printf(" \n Quantidade de itens: %i\n ", Bibli[i].QtdEstoque);
                printf("Fornecedor: %s\n ", Bibli[i].fornecedor);
                printf(" \n ------------------------------------------------------------------------\n");
                break;

            }else{

                printf("\n Registro não encontrado!\n ");
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
                printf(" \n preço: %.2f ", Bibli[i].preco);
                printf(" \n Quantidade de itens: %i\n ", Bibli[i].QtdEstoque);
                printf("Fornecedor: %s\n ", Bibli[i].fornecedor);
                printf(" \n ------------------------------------------------------------------------\n");
                pos = i;

                printf(" \n Alterar Produto:\n ");
                printf(" \n Digite o novo nome do Produto:\n ");
                printf("  \n Digite>>> ");
                scanf("%s%*c",&Bibli[pos].nome);



                printf(" \n\n Produto: %s ", Bibli[i].nome);
                printf(" \n preço: %.2f ", Bibli[i].preco);
                printf(" \n Quantidade de itens: %i\n ", Bibli[i].QtdEstoque);
                printf("Fornecedor: %s\n ", Bibli[i].fornecedor);
                printf(" \n ------------------------------------------------------------------------\n");
                break;

            }else{

                printf("\n Registro não encontrado!\n ");
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
                printf(" \n preço: %.2f ", Bibli[i].preco);
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

                printf("\n Registro não encontrado!\n ");
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
            printf(" [5] Pesquisa Produto por faixa de preço\n");
            printf(" [6] Alterar Estoque do Produto \n");
            printf(" [7] Altera preço de um produto pesquisado pelo nome completo\n");
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
                        printf("Você não inseriu dados");
                    }
                break;

                case 3:
                    if(n !=0)
                    {
                        Busca();
                    }else{
                        printf("Você não inseriu dados");
                    }
                break;

                case 4:
                    if(n !=0)
                    {
                        BuscaFornecedor();
                    }else{
                        printf("Você não inseriu dados");
                    }
                break;

                case 5:
                    if(n !=0)
                    {
                        BuscaProduto();
                    }else{
                        printf("Você não inseriu dados");
                    }
                break;

                case 6:
                    if(n !=0)
                    {
                        AlteraProduto();
                    }else{
                        printf("Você não inseriu dados");
                    }
                break;

                case 7:
                    if(n !=0)
                    {
                        AlteraPreco();
                    }else{
                        printf("Você não inseriu dados");
                    }
                break;

                case 8:
                    if(n !=0)
                    {
                        AlteraNomeProduto();
                    }else{
                        printf("Você não inseriu dados");
                    }
                break;

                case 9:
                    if(n !=0)
                    {
                      ExcluirProduto();
                    }else{
                        printf("Você não inseriu dados");
                    }
                break;

                default:

                    if(opc == 0)
                    {
                        printf("\n\n Numero Inválido\n");
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

       printf("Escreva uma palavra para testar gravação de arquivo: ");
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

    arquivo = fopen("arquivo.txt", "rb"); //função de leitura

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
        arquivo = fopen("arquivo.txt", "rb"); //função de leitura

        fflush(stdin); //limpar caracetr buffer
        printf("Digite o nome a pesquisar: ");
        gets(nome);

        while(fread()){}


        fclose(arquivo);
        fechar arquivo

    }

    -------------------------------------------
    Ler while(!feof(arq)) //Enquanto não chegar no final do arquivo leia
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
            printf("Digite a série:  ");
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

            printf("Possuí Pedido:  ");
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

/*Função Parte 4*/

#ifdef exe1

/*
    1.	Faça um programa que exiba os números ímpares de 50 até 150.Utilize o laço for.

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
    2.	Faça um programa que exiba os números pares entre -10 e 50. Utilize o. Utilize o laço do while.

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
    3.	Faça um programa que exiba os números que são múltiplos de 5 entre 1 e 100. Utilize o laço while.

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
    4.	Faça um programa que exiba os números que são múltiplos de 3 e são ímpares.
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
    5.	Faça um programa em C que solicite ao usuário a quantidade de termos que ele deseja exibir da seguinte sequência:3, 6, 9, 12, 15,...
		Obs.: Crie uma função para garantir que essa quantidade deve ser deve ser maior que zero e representada pela variável K.

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
    6.	Faça um programa em C que solicite ao usuário a quantidade de termos que ele deseja exibir da seguinte sequência: 1/4, 1/8, 1/12, 1/16, 1/20,...
    Obs.: Crie uma função para garantir que essa quantidade deve ser deve ser maior que zero e representada pela variável K.
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
        printf("Digite a quantidade>0 da seguência: 1/4, 1/8, 1/12, 1/16, 1/20,...\n");
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
    7.	Faça um programa em C que solicite ao usuário a quantidade de termos que ele deseja exibir da seguinte sequência: 2/5, 4/10, 6/15, 8/20, 10/25, 12/30,...
    Obs.: Crie uma função para garantir que essa quantidade deve ser deve ser maior que zero e representada pela variável K.
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
        printf("Digite a quantidade>0 da seguência: 2/5, 4/10, 6/15, 8/20, 10/25, 12/30,...\n");
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
    8.	Faça um programa em C que solicite ao usuário a quantidade de termos representada pela variável X
        que representa a quantidade de termos que o usuário deseja. H representa cada um desses números, calcule o produto dos X números.
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
        printf(" %iº numero = %i\n\n",cont,h);

        prod *=h;
    }
    printf(" \n\n**O Produto dos numeros: %i\n",prod);



    return 0;

}


#endif // exe8


#ifdef exe9

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
#endif

/*
    Faça um programa que receba três notas de um aluno, calcule e mostre a média aritmética
    e a mensagem que segue a tabela abaixo. Para alunos de exame, calcule e mostre a nota que
    deverá ser tirada no exame para aprovação, considerando a média no exame é 6.0.


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
        printf("\nNota da Média Final: %i\n\n\n", Med);


    }

void VerificaNota ()
{
    if(nota<0 || nota>10)
            {
                printf(" Você Digitou um valor inválido %i\n Digite valores entre 0 e 10 ", nota);
                system("pause");
                return main();
            }
            else
            {
                printf("  Você Digitou a nota:%i\n",i+1);
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
    3.	Faça um programa que mostre o menu de opções a seguir, receba a opção do usuário e os dados necessários para executar cada operação.
    Menu de opções:
    1.	Somar dois números
    2.	Raiz quadrada de um número
    3.	Divisão do primeiro pelo segundo número
    4.	Um número positivo elevado ao quadrado.
    5.	Encerrar o programa.
    Digite a opção desejada:
    Obs:Garante que só sejam válidos  os números de 1 até 5.As opções de 1 até 4 devem garantir o retorno ao menu de opções  para uma nova escolha.

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
        printf("\nDigite uma opção: ");scanf("%d",&opc);

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
                printf("Opção Inválida!");
            break;
        }




    return 0;
}

#endif // exe1

/*
    1.	Crie uma função chamada Notas para garantir o recebimento de cada uma das notas uma de cada vez. As notas deverão ser maiores ou iguais a
    zero e menores ou iguais a dez. Receba quatro valores referentes às notas escolares de um aluno. Crie uma função Média para calcular a média aritmética do aluno.
    Exiba a média e se o aluno foi aprovado ou não no interior da função main.
    Ele será aprovado se a média for maior ou igual a 6. Caso contrário informe que ele está reprovado.

*/

#ifdef exe13

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

/*
    2.	Crie uma função que garanta o recebimento de números maiores que zero e menores ou iguais a 10.
    Receba dois números utilizando está função e o terceiro número deverá ser a soma dos dois anteriores.
    Crie a função produto para calcular o produto destes três números.
    No interior da função main verifique se o produto obtido for menor que 500, solicite novos dados.

*/


#ifdef exe14
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

/*


    3.	Crie uma função que garanta que cada lado deve ser maior que zero. Receba três números que representam os lados de um triângulo.
    Garanta no interior da função main a existência de um triângulo. Informe ao usuário se o triângulo é isóscele, equilátero ou escaleno.

    Observações:

    a.	Garantir que cada lado é menor que a soma dos outros dois lados.
    b.	O triângulo é equilátero quando todos os lados são iguais.
    c.	O triângulo é isóscele quando apenas dois lados são iguais.
    d.	O triângulo é escaleno quando todos os lados são diferentes



*/

#ifdef exe15


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

#endif

/*
    4.	Crie uma função que garanta que um número é negativo. Receba dois números utilizando  esta função.
    Crie a função Verifcamultiplos e verifique se estes dois números são múltiplos ou não.
    Exiba se são múltiplos ou não no interior da função VerificaMultiplos. Pesquise na internet o que são múltiplos.


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
    Crie a função Esfera que receba da função main o valor do raio e calcule o volume da esfera o seu volume v =(4*Pi*R3)/3.
    Crie também uma função para garantir que o raio deve ser maior que zero.
    Exiba o  volume  da esfera no interior da função main.

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
Verifica se o numero é maior que zero e passa o valor para a função esfera que calcula o valor
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
    2.	Crie a função verifica para verificar e exibir no seu interior se o número é positivo, negativo ou zero.
    O número deverá ser do tipo inteiro e  deverá ser recebido  no interior  função main...
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
    3.	Crie a função Divisão que receba da função main dois números diferentes de zero que possibilitem o cálculo da divisão do primeiro pelo segundo.
    Crie uma função para garantir que os números devem ser diferentes de zero.
    Exiba na função main os números e o resultado obtido na função Divisão.
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

 28.	Gere a seguinte sequência abaixo para K termos.
    K representa a quantidade de números que o usuário gostaria quer
     fosse exibida dessa sequência. Mostre também a somatória apenas dos números divisíveis por
     3 dessa sequência. Utilize o laço do while para a entrada da quantidade K e um laço for para
     efetuar os cálculos solicitados.

		1, 1, 2, 3, 5, 8, 13, 21,.....
*/



int ExibaSeq(int num)
{
   int i, vet[num];
   int t1 = 0, t2 = 1;
   int nextTerm = t1 + t2;

   printf("\nSequência Escolhida: \n");
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
    printf("\n\n\nDivisivel por Três: \n");
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
            printf("\nVocê optou por sair!");
            printf("\n\n");
        }

    }while(opc != 0);



return 0;

}

#endif // exe

#ifdef exe29
/*
32.	Receba doze números positivos e armazene no vetor A.
    Após a alimentação de todos os números mostre apenas os
    números maiores que 121 que estão armazenados no vetor.
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
    33.	Leia oito elementos e armazene-os no vetor A. Construa o vetor B de mesma dimensão
    com os elementos do vetor A multiplicados por 3. Apresente o conteúdo dos dois vetores.
*/
int vetA[8];
int vetB[8];

int ExibaVet()
{
    int i;

    for(i=1;i<=8;i++)
    {
        printf("Conteúdo Vetor A: %i\n",vetA[i]);
    }
    printf("\n\n");
    for(i=1;i<=8;i++)
    {
        printf("Conteúdo Vetor B: %i\n",vetB[i]*3);
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
    35. Armazene num vetor dez números positivos. Exiba o conteúdo do vetor.
    Mostre o maior número, quantas vezes ele foi digitado e em que posições ele apareceu dentro do vetor.
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
            printf("posição: %i\n", i);
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

#endif // exe32

#ifdef exe33

/*
    39.	Leia três vetores (A, B e C) de uma dimensão com 5 elementos cada.
        Construa o vetor D, sendo este a junção dos três outros vetores. Armazene no vetor D o primeiro elemento do vetor
        A depois do B e do C e assim sucessivamente.  Apresentar o conteúdo de todos os vetores.
        Exiba quantas vezes apareceram números negativos no vetor D.
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
    41.	Elabore um programa que efetue o cálculo de uma tabuada de um número
          qualquer e armazene os resultados no vetor A de uma dimensão para 10 elementos.
          O usuário deverá digitar o número e o programa deverá construir e exibir a tabuada correspondente.

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
        printf("\n Digite o Numero da Tabuada que você Quer saber\n ");
        printf("\n Ou [0] para Sair\n ");
        printf("\n Digite>>> ");
        scanf("%i",&opc);

        if(opc != 0){
            CalcTabuada(opc);
        }else{

        printf("\n\n");
        printf("Você optou por Sair!");
        printf("\n\n");

        }

    }while(opc > 0);

return 0;

}
#endif // exe34

