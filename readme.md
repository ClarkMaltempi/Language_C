# Language C

> Script e resolução de exercícios na Linguagem C, aplicando os conhecimentos e soluções propostas pela linguagem.

<h2>Indice</h2></br>
<a href="#Sobre">Sobre</a></br>






# Sobre

<p>Estrutura padrão para a implementação dos scripts
 
```c
  
 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
 #include <locale.h>
 #include <conio.h>
 #define Ptr setlocale(LC_ALL,"Portuguese");
 #define exe34
  

 ```
  
 <p> Ao definir o exercício utilizamos um trecho do código na implementação alterando o "#define exe34"
 
 
 
 
 
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
