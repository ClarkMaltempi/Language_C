# Language C

> Script e resolução de exercícios na Linguagem C, aplicando os conhecimentos e soluções propostas pela linguagem.

<h2>Indice</h2></br>
<a href="#Sobre">Sobre</a></br>
<a href="#Exercicios_Resolvidos">Exercicios Resolvidos</a></br>





# Sobre

<p>Estrutura padrão para a implementação dos scripts

#Exercicios_Resolvidos

```c
  
 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
 #include <locale.h>
 #include <conio.h>
 #define Ptr setlocale(LC_ALL,"Portuguese");
 #define exe34
  

 ```
  
 <p> Ao definir o exercício utilizamos um trecho do código na implementação alterando o "#define exe" acrescentando o numero do exercício, sendo atribuído a um unico Doc.
 
 
 
 
 24. Receba a quantidade de salários de K indivíduos. K representa essa quantidade e
deve ser digitada pelo usuário.
A variável Salário armazena cada uma dos K salários digitados. Calcule e mostre
a somatória dos salários superiores a 3 salários-mínimos e inferior ou igual a 7 salários-mínimos.
114 Exiba também o maior e o menor salário encontrado. Utilize o laço while para a
entrada da quantidade K e um laço while para efetuar os cálculos e as comparações solicitadas.
 ```c
 #ifdef exe24
 
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
    printf("\n*Quantidade Cadastrada : *%i* \n", cont);
    printf(" \nDigite>>> ");
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

         printf("\n Salário > 3 Salário Mínimo Sal E Sal < 7 Salário Mínimo:\n>> %.2f", vet[i]);

     }
                                         
    if(vet[i]> MinB)
    {
    
      printf("\n-------------------------------------------------------------------\n");
      printf("\n Salário > 7 Sal mínimos: >> %.2f \n\n", vet[i]);
    }
  
    if (vet[i] < MinA)
    {
       
      printf(" \n -------------------------------------------- \n");
      printf("\n Salário abaixo de 3 salários mínimos:\n >> %.2f \n\n",
      vet[i]);

    }
 }
 
    printf(" \n -------------------------------------------- \n");
    printf("\n Maior Salário cadastrado: %.2f \n", MaxSal);
    printf(" Menor Salário cadastrado: %.2f \n", MinSal);
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
      printf(" \n Digite>>> ");
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
 
```



25.	Receba a quantidade de pesos de N pessoas. N representa essa quantidade e deve ser digitada pelo usuário.
    A variável P representa cada peso digitado. Calcule e mostre a média dos pesos superiores ou iguais a 70 quilos
    e inferiores ou iguais a 85,5 e a quantidade de pessoas que apresentam pesos superiores a 75 quilos. Exiba também o menor,
    a quantidade de vezes que o menor peso foi encontrado e o maior peso encontrado. Utilize o laço while para a entrada da quantidade N e um
    laço do while para efetuar os cálculos e as comparações solicitadas.
    
    
 ```c   
 
 #ifdef exe25
 
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
 
 
 ```
 
 
 
 
26.	Em uma pesquisa de campo, uma editora solicitou os seguintes dados para os entrevistados: sexo,
    idade e quantidade de livros que leu no ano anterior.  Faça um programa que leia os dados digitados
    pelo usuário, sendo que deverão ser solicitados dados até que a idade digitada seja um valor negativo. Depois, calcule e imprima:
    a)	A quantidade total de livros lidos pelos entrevistados menores de 10 anos.
    b)	A quantidade de mulheres que leram 5 livros ou mais.
    c)   A média de idade dos homens que leram menos que 5 livros.
    d) O percentual de pessoas que não leram LIVROS.


    Exemplo: como um vetor de registros pode ser representado.
     sexo       sexo     sexo      sexo
     idade      idade    idade     idade
     livros     livros   livros    livros
       0          1        2         N
       
    Cada posição do vetor armazena um conjunto de informações diferentes.


  ```c   
  
  #ifdef exe26
  
  
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

  
  ```
 
 
 
