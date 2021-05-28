#include <stdio.h>

typedef struct svenda
{
int pecas;
float preco;
} Venda;

// Protótipo da função
Venda TotalVendas(Venda c, Venda d);

int main() 
{ 
	Venda a, b, total; 
	printf("Venda A\n=========\n"); 
	printf("Insira o numero de pecas: "); 
	scanf("%i",&a.pecas); 
	printf("Insira o preco :"); 
	scanf("%f",&a.preco); 
	printf("Venda B\n=========\n"); 
	printf("Insira o numero de pecas: "); 
	scanf("%i",&b.pecas); 
	printf("Insira o preco :"); 
	scanf("%f",&b.preco); 
	total=TotalVendas(a,b); // estruturas como argumento e retorno 
	printf("\n\n Venda Total\n=========\n"); 
	printf("\nTotal de Pecas: %i",total.pecas); 
	printf("\nPreco total : %.2f\n",total.preco); 
	return 0; 
}

Venda TotalVendas(Venda c, Venda d) 
{ 
    Venda t; 
	t.pecas=c.pecas+d.pecas; 
	t.preco=c.preco+d.preco; 
	return t; 
}
