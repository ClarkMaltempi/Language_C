#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <conio.h>
#define Ptr setlocale(LC_ALL,"Portuguese");

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

