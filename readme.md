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

 printf("\n Salário > 3 Salário Mínimo Sal E Sal < 7 Salário Mínimo:\n
>> %.2f", vet[i]);

}
 if(vet[i]> MinB)
 {
 printf("
\n-------------------------------------------------------------------
\n");
 printf("\n Salário > 7 Sal mínimos: >> %.2f \n\n", vet[i]);


 }
179 if (vet[i] < MinA)
180 {
181 printf(" \n -------------------------------------------- \n");
182 printf("\n Salário abaixo de 3 salários mínimos:\n >> %.2f \n\n",
vet[i]);
183
184 }
185 }
186 printf(" \n -------------------------------------------- \n");
187 printf("\n Maior Salário cadastrado: %.2f \n", MaxSal);
188 printf(" Menor Salário cadastrado: %.2f \n", MinSal);
189 }
190
191 int main()
192 {
193 Ptr;
194 /*Salário Mínimo R$ 1.192,40*/
195 int k, salario;
196
197 do
198 {
199 printf("\n\n Digite a quantidade de Funcionarios que deseja cadastrar\n");
200 printf("\n Digite [0] para Sair\n\n");
201 printf(" \n Digite>>> ");
202 scanf("%i",&k);
203
204 if(k != 0)
205 {
206 VerificaNum(k);
207 }
208 if(k > 0)
209 {
210 cadastroSal(k);
211 }
212 printf("\n");
213 system("pause");
214
215
216 }while(k != 0);
217
218
219 return 0;
220 }
221
222 #endif // exe1
 
```
