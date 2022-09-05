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
 
 
   
>Exe 1
   
 ```c  
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
   
 ```
   
 >Exe 2
                            
                            
    
 ```c                           
                            
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
                            
                            
                                                      
  ```                          
   
 >Exe 3
   
   
 ```c
                                                                                             
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
                                
                                                     
```        
                        
> Exe
   
```c
                        
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
                        
                       
 ```                   
>Exe 5                  
      
 ```c  
   
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
   
   
   
 ```
  
 >Exe 6
   
   
   
 ```c
   
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
   
   
  
   
 ```
   
 >Exe 7
   
 ```c
   
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
  
   

 ```

 >Exe 8
   
 ```c
   
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
   
   
   
   
 ```
   
 >Exe 9
   
   
 ```c
   
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
  
     
   
  ```
 
 >Exe 10                 
                            
 ```c
 
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
     
   
 ```
 
 >Exe 12
   
 ```c
   
   
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
   
   

   
 ```
   
 >Exe 13
 
   
   
   
   
   
   
 >Exe 24
  
 ```c
   
 /*
 24. Receba a quantidade de salários de K indivíduos. K representa essa quantidade e
deve ser digitada pelo usuário.
A variável Salário armazena cada uma dos K salários digitados. Calcule e mostre
a somatória dos salários superiores a 3 salários-mínimos e inferior ou igual a 7 salários-mínimos.
114 Exiba também o maior e o menor salário encontrado. Utilize o laço while para a
entrada da quantidade K e um laço while para efetuar os cálculos e as comparações solicitadas.
*/    
   
   
   
   
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


>Exe 25  
    
 ```c   
 
   
 /*
   
25.	Receba a quantidade de pesos de N pessoas. N representa essa quantidade e deve ser digitada pelo usuário.
    A variável P representa cada peso digitado. Calcule e mostre a média dos pesos superiores ou iguais a 70 quilos
    e inferiores ou iguais a 85,5 e a quantidade de pessoas que apresentam pesos superiores a 75 quilos. Exiba também o menor,
    a quantidade de vezes que o menor peso foi encontrado e o maior peso encontrado. Utilize o laço while para a entrada da quantidade N e um
    laço do while para efetuar os cálculos e as comparações solicitadas.
   
*/    
   
   
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
 
 
 
 



   >Exe 26

  ```c   
  
   /*
   
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
   
 
   */
   
   
   
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
                                                                                
                                                                                
  ```c
                                                                                
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

                                                                                
>Exe Mini Project                                                       
                                                                                
                                                                                
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
 
                                                                                
                                                                                                                                                              
 ```                                                                               
 
 >Exe Manipulação de Arquivo
   
   
 ```c
   
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
   
   
  ``` 
   
  >Suprimentos de TI
   
 ```c
   
   
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
   
   
 ```
   
   
  
 
