#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <conio.h>
#define Ptr setlocale(LC_ALL,"Portuguese");

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
