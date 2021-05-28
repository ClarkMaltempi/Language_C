#include <stdio.h>

typedef struct Data
{
	int dia;
	int mes;
	int ano;
} Data;

struct produto
{
	int codigo;
	char nome[51];
	float preco;
	int qtde;
	Data dtcadastro;
} prod;

int main()
{
  struct produto varprod1, varprod2;  
  struct produto vetprod[10];
  struct produto *prod;
   
  int num;
    
  printf("Nome do produto: ");
  scanf("%s",varprod1.nome);
  printf("Numero: ");
  scanf("%d",&varprod1.codigo);
  printf("Informe a data: ");
  scanf("%d/%d/%d", &varprod1.dtcadastro.dia,&varprod1.dtcadastro.mes,&varprod1.dtcadastro.ano);
  
  vetprod[0] =varprod1;  
  
  printf("\nNome: %s",varprod1.nome);
  printf("\nNumero: %d",varprod1.codigo);
  printf("\n%i/%i/%i",varprod1.dtcadastro.dia,varprod1.dtcadastro.mes,varprod1.dtcadastro.ano);
  
  printf("\nNome no vetor: %s",vetprod[0].nome);
  
  //ponteiro
  prod=&varprod1;
  
  printf("\nNome atraves de ponteiro: %s",prod->nome);
  
  
}