# Linguagem-C Project


1 #include <stdio.h>
2 #include <stdlib.h>
3 #include <string.h>
4 #include <locale.h>
5 #include <conio.h>
6 #define Ptr setlocale(LC_ALL,"Portuguese");
7 #define exe34
8
9
10 /*
11
12
13 30. Uma empresa contratou a quantidade de funcionários representada pela
variável Y.
14 Conforme o valor das vendas mensais, os funcionários adquirem pontos que
determinarão
15 seus salários ao final de cada mês. Sabe-se que esses funcionários trabalharão
nos meses
16 de novembro a janeiro do ano subsequente. Utilize os laços que desejar.
17
18 a) Leia as pontuações nos três meses de cada funcionário;
19 b) Calcule e mostre a pontuação geral de cada funcionário nos três meses.
20 c) Calcule e mostre a média das pontuações de cada funcionário nos três meses.
21 d) Determine e mostre a maior pontuação atingida entre todos os funcionários
nos três meses.
22
23
24 31. Solicite ao usuário a quantidade de números de termos que ele deseja.
25 Exiba a somatória dos valores da série abaixo referente a quantidade determinada
26 pelo usuário: Utilize os laços que desejar.
27 2, 7, 3, 4, 21, 12 , 8, 63, 48, 16, 189, 192, 32, 567, 768, 64, ...
28
29
30 34. Faça um programa que armazene num vetor 6 números negativos.
31 Calcule a soma dos seus quadrados; se a soma for inferior a 1000
32 solicite novos dados. Mostre somente a soma que satisfaz a condição.
33
34 40. Leia o vetor A tipo vetor com 10 elementos positivos. Construa o vetor B de
mesmo tipo,
35 e cada elemento de B deve ser a metade de cada elemento de A.
36 Exiba em que Vetor e em que posições apareceram valores superiores a 4
37
38 37. Leia o vetor A de uma dimensão máxima de 15 elementos.
39 O usuário poderá digitar a quantidade desejada desde que o valor seja inferior
ou igual a 15.
40 Construir um vetor B de mesmo tipo, de modo que cada elemento do vetor B seja
fatorial do elemento correspondente do vetor A.
41 Apresentar o conteúdo dos dois vetores.
42
43 38. O usuário poderá digitar a quantidade de números que ele deseja
armazenar no vetor
44 A desde que esse valor seja superior a 4 e inferior ou igual a 20. Construa o
vetor B da mesma dimensão e com os mesmos elementos do vetor A.
45 Observando que o primeiro elemento de A passa a ser o último de B, o segundo
elemento de A passa a ser o penúltimo de B
46 e a assim por diante. Exibir o conteúdo dos dois vetores.
47
48
49
50
51 42. Receba a temperatura média de cada mês do ano e
52 armazene essas temperaturas em um vetor;
53 calcule e mostre a maior, a menor temperatura do ano e a média das temperaturas.
54 Mostre todas as temperaturas armazenadas.
55
56 43. Receba a nota de dez alunos e armazene essas notas em um vetor. Calcule
e mostre:
57 a) A média da classe;
58 b) A quantidade de alunos aprovados, isto é, com nota >=7;
59 c) A quantidade de alunos reprovados, isto é, com nota <7.
60
61 44. Receba o peso e o número de identificação gerado pelo programador contendo no
máximo de 15 pessoas. A quantidade de indivíduos
62 será definida pelo usuário. Armazene esses dados em dois vetores, o primeiro
contendo os pesos e o segundo contendo os números de identificação. Calcule e
mostre:
63 a) Quantas pessoas apresentaram peso superior ao menor peso.
64 b) Armazene os números de identificação das pessoas que satisfazem essa
condição. Mostre o conteúdo desse vetor.
65 c) Armazene num outro vetor os pesos superiores a 55 quilos e menores ou
igual a 80 quilos das pessoas. Mostre o conteúdo desse vetor.
66
67 45. Efetue a leitura de dez elementos para o vetor A.
68 Construa o vetor B, observando a seguinte lei de formação: se o valor do índice
do vetor for par,
69 o valor do elemento deve ser multiplicado pelo valor 5; sendo o índice ímpar,
deverá ser somado ao valor existente o valor 5. Mostre o conteúdo dos dois
vetores.
70
71
72 46. Efetue a leitura de dez elementos para o vetor A. No final,
73 apresente a somatória de todos os elementos do vetor A que sejam ímpares.
74 Armazene no vetor B a posição em que estão armazenados os números ímpares.
Mostre o conteúdo dos dois vetores.
75
76 47. Leia 12 elementos inteiros para o vetor A e construa o vetor B com a
mesma dimensão, observando a seguinte lei de formação:
77 “Todo elemento do vetor A que for ímpar deve ser multiplicado por 2; caso
contrário, o elemento do vetor A deve permanecer constante”.
78 Exiba o conteúdo dos dois vetores.
79
80 48. Receba o salário e o número de identificação gerado pelo programador
contendo no máximo 13 pessoas.
81 A quantidade de indivíduos será definida pelo usuário. Armazene esses dados em
dois vetores,
82 o primeiro contendo os salários e o segundo contendo os números de
identificação. Calcule e mostre:
83
84 d) Armazene em um vetor os números de identificação de todas as pessoas que
apresentam a maior salário.
85 e) Armazene num outro vetor os números de identificação de todas as pessoas que
apresentam a menor salário encontrado. Mostre o conteúdo de todos os vetores.
86
87
88 49. Leia 8 elementos (valores inteiros) para os vetores A e B de uma dimensão do
tipo vetor. Construir vetores C e D de mesmo tipo e dimensão.
89 O vetor C deve ser formado pelos elementos de
90 índice ímpar dos vetores A e B, e O vetor D deve ser formado pelos elementos de
índice par dos vetores A e B.
91 Apresente os conteúdos de todos os vetores.
92
93 50. Leia dois vetores A e B de uma dimensão com 6 elementos. O vetor A deve
aceitar apenas a
94 entrada de valores pares, enquanto o vetor B deve aceitar apenas a entrada de
valores ímpares.
95 A entrada dos dois vetores deve ser validada pelo programa e não pelo usuário.
Construir o vetor C
96 que deverá ser a junção dos vetores A e B, de modo que seja armazenado
97 um elemento do vetor A e em seguida um elemento do vetor B. O vetor C contenha
12 elementos.
98 Exiba os conteúdos dos vetores A e B juntos e depois o conteúdo do vetor C.
99
100
101 51. Crie a função Categoria que receba da função main um valor do tipo inteiro e
maior que zero que representa a idade
102 e que verifique a categoria baseada na tabela abaixo.
103 Exiba na função main o número e a categoria de um grupo de K números definidos
pelo usuário e armazenado no vetor Idades.
104 Essa quantidade K deverá ser maior ou igual a 3 e menor ou igual a 10.
105
106 */
107 #ifdef exe24
108
109
110 /*
111 24. Receba a quantidade de salários de K indivíduos. K representa essa quantidade e
deve ser digitada pelo usuário.
112 A variável Salário armazena cada uma dos K salários digitados. Calcule e mostre
a somatória dos salários superiores a
113 3 salários-mínimos e inferior ou igual a 7 salários-mínimos.
114 Exiba também o maior e o menor salário encontrado. Utilize o laço while para a
entrada da quantidade
115 K e um laço while para efetuar os cálculos e as comparações solicitadas.
116 */
117
118
119 float vet[1000];
120
121 float SalMinimo = 1192;
122
123
124 void VerificaNum(int k)
125 {
126 if( k <= 0 )
127 {
128 system("cls");
129 printf("\n\*******NUMERO INVALIDO!******\n");
130 printf("*O PRIMEIRO TEM QUE SER MAIOR QUE O SEGUNDO!*\n");
131 printf("****Digite outro numero!****\n\n");
132 return main();
133 }
134 }
135
136 float cadastroSal (int k)
137 {
138 int i,cont=0;
139 float sal, MaxSal=0, MinSal=3575,MinA, MinB;
140
141 do
142 {
143 printf("\n*Cadastre o Salario!*\n De *%i* Funcionários \n", k);
144 printf("\n*Quantidade Cadastrada : *%i* \n", cont);
145 printf(" \nDigite>>> ");
146 scanf("%f", &sal);
147 system("cls");
148
149 vet[cont] = sal;
150 if(sal > MaxSal)
151 {
152 MaxSal = sal;
153 }
154 if(sal < MinSal)
155 {
156 MinSal = sal;
157 }
158 cont+=1;
159 }while(cont != k);
160 MinA = SalMinimo*3;
161 MinB = SalMinimo*7;
162
163 /*Verifica condições*/
164 for(i=0;i<k;i++)
165 {
166 if(vet[i]>= MinA && vet[i]<= MinB)
167 {
168
169 printf("\n Salário > 3 Salário Mínimo Sal E Sal < 7 Salário Mínimo:\n
>> %.2f", vet[i]);
170
171 }
172 if(vet[i]> MinB)
173 {
174 printf("
\n-------------------------------------------------------------------
\n");
175 printf("\n Salário > 7 Sal mínimos: >> %.2f \n\n", vet[i]);
176
177
178 }
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
223
224 #ifdef exe25
225
226 /*
227 25. Receba a quantidade de pesos de N pessoas. N representa essa quantidade e deve
ser digitada pelo usuário.
228 A variável P representa cada peso digitado. Calcule e mostre a média dos pesos
superiores ou iguais a 70 quilos
229 e inferiores ou iguais a 85,5 e a quantidade de pessoas que apresentam pesos
superiores a 75 quilos. Exiba também o menor,
230 a quantidade de vezes que o menor peso foi encontrado e o maior peso encontrado.
Utilize o laço while para a entrada da quantidade N e um
231 laço do while para efetuar os cálculos e as comparações solicitadas.
232
233 */
234
235
236
237 float vet[1000];
238
239 float SalMinimo = 1192;
240
241
242 void VerificaNum(int n)
243 {
244 if( n <= 0 )
245 {
246 system("cls");
247 printf("\n\*******NUMERO INVALIDO!******\n");
248 printf("*O PRIMEIRO TEM QUE SER MAIOR QUE O SEGUNDO!*\n");
249 printf("****Digite outro numero!****\n\n");
250 return main();
251 }
252 }
253
254 float cadastroPes (int n)
255 {
256 int i,cont=0, contPesMx=0, contPesMn=0;
257 float peso, MaxPes=0, MinPes=300,calc,media;
258
259 do
260 {
261 printf("\n*Cadastre o Peso!*\n De *%i* Funcionários \n", n);
262 printf("\n*Quantidade Cadastrada : *%i* \n", cont);
263 printf(" \nDigite>>> ");
264 scanf("%f", &peso);
265 system("cls");
266
267 vet[cont] = peso;
268 if(peso > MaxPes)
269 {
270 MaxPes = peso;
271 contPesMx+=1;
272 }
273 if(peso < MinPes)
274 {
275 MinPes = peso;
276 contPesMn+=1;
277 }
278 cont+=1;
279 }while(cont != n);
280
281
282 /*Verifica condições*/
283 for(i=0;i<n;i++)
284 {
285 if(vet[i]>= 70 && vet[i]<= 85.5)
286 {
287 calc += vet[i];
288 }
289 if(vet[i]> 75)
290 {
291 printf("
\n-------------------------------------------------------------------
\n");
292 printf("\n Peso > 75 Kg:\n >> %.2f \n\n", vet[i]);
293 }
294 }
295 printf(" \n -------------------------------------------- \n");
296 printf("\n Quantidade: %i Maior Peso cadastrado: %.2f \n", contPesMx,
MaxPes);
297 printf(" Quantidade: %i Menor Peso cadastrado: %.2f \n", contPesMn, MinPes);
298
299 media = calc/n;
300 printf(" \n -------------------------------------------- \n");
301 printf("\n | Média | Peso > 70 E Pes < 85.5 Kg :\n >> %.2f", media);
302 }
303
304 int main()
305 {
306 Ptr;
307 /*Salário Mínimo R$ 1.192,40*/
308 int n, salario;
309
310 do
311 {
312 printf("\n\n Digite a quantidade de Pessoas que deseja cadastrar\n");
313 printf("\n Digite [0] para Sair\n\n");
314 printf(" \n Digite>>> ");
315 scanf("%i",&n);
316
317 if(n != 0)
318 {
319 VerificaNum(n);
320 }
321 if(n > 0)
322 {
323 cadastroPes(n);
324 }
325 printf("\n");
326 system("pause");
327
328
329 }while(n != 0);
330
331
332 return 0;
333 }
334
335
336 #endif // exe25
337
338 #ifdef exe26
339
340 /*
341 26. Em uma pesquisa de campo, uma editora solicitou os seguintes dados para os
entrevistados: sexo,
342 idade e quantidade de livros que leu no ano anterior. Faça um programa que leia
os dados digitados
343 pelo usuário, sendo que deverão ser solicitados dados até que a idade digitada
seja um valor negativo. Depois, calcule e imprima:
344
345 a) A quantidade total de livros lidos pelos entrevistados menores de 10 anos.
346 b) A quantidade de mulheres que leram 5 livros ou mais.
347 c) A média de idade dos homens que leram menos que 5 livros.
348 d) O percentual de pessoas que não leram LIVROS.
349 */
350
351 /*
352 Exemplo: como um vetor de registros pode ser representado.
353
354 sexo sexo sexo sexo
355 idade idade idade idade
356 livros livros livros livros
357 0 1 2 N
358
359 Cada posição do vetor armazena um conjunto de informações diferentes.
360
361 */
362
363 typedef struct
364 {
365 char sexo[200];
366 int idade;
367 int QtdLivros;
368
369 } Biblioteca;
370 Biblioteca Bibli[10];
371 /*Observe que a linha 406 é a que cria de fato o vetor.*/
372 char cadastro(int n)
373 {
374 int i, opc;
375
376 /*Preenche o vetor com valores nulos*/
377 for(i=0; i<n; i++)
378 {
379 strcpy(Bibli[i].sexo, "NULL");
380 Bibli[i].idade = 0;
381 Bibli[i].QtdLivros = 0;
382 }
383 /*Cadastra na Estrutura*/
384 for(i=0; i<n; i++)
385 {
386 system("cls");
387 printf("Itens Cadastrados: [%d] no Total de: [%d]\n\n", i,n);
388
389 printf(" \nDigite o sexo:\n ");
390 printf(" Digite>>> ");
391 scanf("%s%*c", &Bibli[i].sexo);
392 printf(" \nDigite a idade:\n ");
393 printf(" Digite>>> ");
394 scanf("%d%*c", &Bibli[i].idade);
395
396 printf(" \nDigite a Quantidade de livros:\n ");
397 printf(" \nDigite>>> ");
398 scanf("%d%*c", &Bibli[i].QtdLivros);
399 }
400
401 printf(" \nDeseja visualizar o que foi cadastrado: \n\n Sim [1]\n Não [2]\n ");
402 printf(" \nDigite>>> ");
403 scanf("%d",&opc);
404
405 if(opc == 1)
406 {
407 for(i=0; i<n; i++)
408 {
409 printf(" \n sexo: %s ", Bibli[i].sexo);
410 printf(" \n Idade: %d ", Bibli[i].idade);
411 printf(" \n Quantidade de Livros: %i\n ", Bibli[i].QtdLivros);
412 printf(" \n
------------------------------------------------------------------------\n
");
413 }
414 }
415 else
416 {
417 Imprimir(n);
418 system("pause");
419 return main();
420 }
421 }
422
423 void Imprimir(n)
424 {
425 int livros=0,i, Mulheres=0, homens=0;
426 char sexo;
427 float mediaIdade=0, pessoas=0;
428
429 for(i=0; i<n; i++)
430 {
431 if(Bibli[i].idade<10)
432 {
433 livros = livros + Bibli[i].QtdLivros;
434 }
435
436 /*Uma função chamada strcmp(string1, string2); da biblioteca de strings é
utilizada para fazer a comparação da primeira string com a segunda string. */
437 if((strcmp("feminino",Bibli[i].sexo) == 0) && (Bibli[i].QtdLivros >=5))
438 {
439 Mulheres++;
440 }
441
442 if((strcmp("masculino",Bibli[i].sexo) == 0) && (Bibli[i].QtdLivros <5))
443 {
444 mediaIdade = mediaIdade + Bibli[i].idade;
445 homens++;
446 }
447
448 if(Bibli[i].QtdLivros == 0)
449 {
450 pessoas++;
451 }
452
453 }
454
455 printf("\nTotal de livros lidos pelos entrevistados menores de 10 anos");
456 printf("\n[Total]: %i", livros);
457 printf(" \n
------------------------------------------------------------------------\n");
458
459 printf("\nA quantidade de mulheres que leram 5 livros ou mais");
460 printf("\n[Total]: %i", Mulheres);
461 printf(" \n
------------------------------------------------------------------------\n");
462
463 homens = mediaIdade/homens;
464 printf("\nA média de idade dos homens que leram menos que 5 livros");
465 printf("\n[Total]: %i", homens);
466 printf(" \n
------------------------------------------------------------------------\n");
467
468 pessoas = pessoas/100*n;
469 pessoas = pessoas*100;
470 printf("\nO percentual de pessoas que não leram LIVROS");
471 printf("\n[Total]: %.2f%%", pessoas);
472 printf(" \n
------------------------------------------------------------------------\n");
473
474 }
475
476
477 int main(void)
478 {
479 Ptr;
480 int n;
481
482 do
483 {
484 system("cls");
485 printf("\n\n Digite a quantidade de Pessoas que deseja cadastrar\n");
486 printf("\n Digite [0] para Sair\n\n");
487 printf(" \n Digite>>> ");
488 scanf("%i",&n);
489
490 if(n != 0)
491 {
492 cadastro(n);
493 Imprimir(n);
494 }
495
496 printf("\n");
497 printf("Você optou por sair!!!!\n");
498 system("pause");
499
500
501 }while(n != 0);
502
503
504
505 return 0;
506 }
507
508 #endif // exe26
509
510 #ifdef exe27
511
512 /*
513
514 27. Receba a quantidade K de números quaisquer. K representa essa quantidade e
deve
515 ser digitada pelo usuário. A variável num armazena cada uma dos K números
digitados.
516 Calcule e mostre a quantidade de números positivos divisíveis por 3, a média dos
números negativos.
517 Exiba também o maior número encontrado e quantas vezes ele apareceu. Utilize o
laço do
518 while para a entrada da quantidade K e um laço for para efetuar os cálculos e as
comparações solicitadas.
519
520
521
522 */
523
524 int main(void)
525 {
526 Ptr;
527 int n;
528
529 do
530 {
531 system("cls");
532 printf("\n\n Digite a quantidade de Pessoas que deseja cadastrar\n");
533 printf("\n Digite [0] para Sair\n\n");
534 printf(" \n Digite>>> ");
535 scanf("%i",&n);
536
537 if(n != 0)
538 {
539 cadastro(n);
540 Imprimir(n);
541 }
542
543 printf("\n");
544 printf("Você optou por sair!!!!\n");
545 system("pause");
546
547
548 }while(n != 0);
549
550 return 0;
551 }
552
553
554 #endif // exe27
555
556 #ifdef exeesp
557 /*
558 Escreva um programa que tem a estrutura de dados abaixo. O programa tem as seguintes
opções:
559
560 1 – Entra dados do produto.
561 2 – Lista todos os produtos na tela.
562 3 – Pesquisar um produto pelo nome completo.
563 4 – Pesquisar por fornecedor completo
564 5 – Pesquisa produtos por faixa de preço.
565 6 – Altera quantidade em estoque (entrada e saída) pesquisado pelo nome.
566 7 – Altera preço de um produto pesquisado pelo nome completo
567 8 – Altera produto pesquisado pelo nome completo.
568 9 – Exclui produto pesquisado pelo nome completo.
569 10 – Saída pelo usuário
570
571 Estrutura: produto, fornecedor, quantidade, preço.
572
573 A única estrutura de dados do programa deve ser uma variável local na função main().
Portanto a passagem da estrutura para as funções utiliza ponteiro.
574
575 Cada uma das opções do menu é uma função no programa.
576
577 Todas as operações devem ser feitas direto no arquivo. (utilize a função fseek).
578
579 O programa tem um único arquivo de dados. Não pode usar nenhum arquivo auxiliar.
580
581 O programa deve ser finalizado pelo usuário.
582
583 */
584
585 /*
586 Exemplo: como um vetor de registros pode ser representado.
587
588 sexo sexo sexo sexo
589 idade idade idade idade
590 livros livros livros livros
591 0 1 2 N
592
593 Cada posição do vetor armazena um conjunto de informações diferentes.
594
595 */
596
597
598
599 /*
600 char palavra[20]
601 printf("Digite uma palavra");
602 scanf("%s",palavra);
603
604 int i=0;
605 while(palavra[i] != '\0'){
606 alfabetico([i]);
607 i++;
608 }
609
610 void alfabetico(char variavel)
611 {
612 if((variavel >= 'a' && variavel <='z') || (variavel >= 'A' && VARIAVEL <='Z')){
613
614 printf("É uma letra\n");
615 }else{
616 printf("não é uma letra\n");
617
618 }
619
620 }
621 */
622
623 int cont;
624 int ArmPos [10] = {0,0,0,0,0,0,0,0,0,0,0};
625
626 typedef struct
627 {
628 char nome[200];
629 float preco;
630 int QtdEstoque;
631 char fornecedor[200];
632
633 } Biblioteca;
634 Biblioteca Bibli[10];
635 /*Observe que a linha 406 é a que cria de fato o vetor.*/
636 char cadastro(int n)
637 {
638 int i, opc,x;
639
640
641 /*Cadastra na Estrutura*/
642 for(i=1; i<=n; i++)
643 {
644 for(x=1;x<=10;x++)
645 {
646 if(ArmPos[x] == 0)
647 {
648 printf("Itens Cadastrados: [%d] no Total de: [%d]\n\n", i,n);
649
650 printf(" \nDigite Produto:\n ");
651 printf(" Digite>>> ");
652 scanf("%s%*c", &Bibli[x].nome);
653 printf(" \nDigite o preço:\n ");
654 printf(" Digite>>> ");
655 scanf("%f%*c", &Bibli[x].preco);
656
657 printf(" \nDigite a Quantidade itens Estoque:\n ");
658 printf(" Digite>>> ");
659 scanf("%d%*c", &Bibli[x].QtdEstoque);
660
661 printf(" \nDigite o Fornecedor:\n ");
662 printf(" Digite>>> ");
663 scanf("%s%*c", &Bibli[x].fornecedor);
664
665 ArmPos[x] = x;
666
667 printf("\nProdutos cadastrados com sucesso!\n");
668 break;
669 }
670 }
671 }
672 }
673
674 char ListaDados(int n)
675 {
676 int i;
677 for(i=1; i<=10; i++)
678 {
679 if (Bibli[i].nome == " ")
680 {
681 i++;
682 }else{
683 printf(" \n Produto: %s ", Bibli[i].nome);
684 printf(" \n preço: %.2f ", Bibli[i].preco);
685 printf(" \n Quantidade de itens: %i\n ", Bibli[i].QtdEstoque);
686 printf("Fornecedor: %s\n ", Bibli[i].fornecedor);
687 printf(" \n
----------------------------------------------------------------------
--\n");
688 }
689 }
690 }
691
692
693 void Busca()
694 {
695 char nome[20];
696 int i, retorno;
697
698 printf(" \n Digite um nome: ");
699 scanf("%s%*c",&nome);
700
701 for(i=1; i<=10; i++)
702 {
703 retorno = strcmp(nome, Bibli[i].nome);
704
705 if(retorno == 0)
706 {
707 printf("\n Registro encontrado!\n ");
708
709
710 printf(" \n Produto: %s ", Bibli[i].nome);
711 printf(" \n preço: %.2f ", Bibli[i].preco);
712 printf(" \n Quantidade de itens: %i\n ", Bibli[i].QtdEstoque);
713 printf("Fornecedor: %s\n ", Bibli[i].fornecedor);
714 printf(" \n
----------------------------------------------------------------------
--\n");
715 break;
716 }
717 }
718 }
719
720 void BuscaFornecedor()
721 {
722 char Fornecedor[20];
723 int i,ret;
724
725 printf(" \n Digite o nome do fornecedor: ");
726 scanf("%s%*c",&Fornecedor);
727
728 for(i=1; i<=10; i++)
729 {
730 ret = strcmp(Fornecedor, Bibli[i].fornecedor);
731
732 if(ret == 0)
733 {
734 printf("\n Registro encontrado!\n ");
735
736
737 printf(" \n Produto: %s ", Bibli[i].nome);
738 printf(" \n preço: %.2f ", Bibli[i].preco);
739 printf(" \n Quantidade de itens: %i\n ", Bibli[i].QtdEstoque);
740 printf("Fornecedor: %s\n ", Bibli[i].fornecedor);
741 printf(" \n
----------------------------------------------------------------------
--\n");
742 break;
743 }
744 }
745 }
746
747 void BuscaProduto()
748 {
749 char nome[20], pos[10] = {0,0,0,0,0,0,0,0,0,0,0};
750 int i,faixaIni, FaixaFim, cont;
751
752 printf(" \n Digite a faixa de preço Entre (inicio) apartir De: ");
753 scanf("%i",&faixaIni);
754
755 printf(" \n Digite a faixa de preço (Final) Até: ");
756 scanf("%i",&FaixaFim);
757
758 for(i=1; i<=10; i++)
759 {
760 if(Bibli[i].preco >= faixaIni && Bibli[i].preco <= FaixaFim)
761 {
762 cont+=1;
763 pos[i] = i;
764 }
765 }
766
767 for(i=1; i<=10; i++)
768 {
769 if(pos[i] != 0)
770 {
771 printf("\n Registro encontrado!\n ");
772
773 printf(" \n Produto: %s ", Bibli[i].nome);
774 printf(" \n preço: %.2f ", Bibli[i].preco);
775 printf(" \n Quantidade de itens: %i\n ", Bibli[i].QtdEstoque);
776 printf("Fornecedor: %s\n ", Bibli[i].fornecedor);
777 printf(" \n
------------------------------------------------------------------------\n
");
778 }
779 }
780 }
781
782 void AlteraProduto()
783 {
784 char Prod[20];
785 int i, Estoque,opc, retorno;
786
787 printf(" \n Digite o nome do Produto para Alterar: ");
788 scanf("%s%*c",&Prod);
789
790 for(i=1; i<=10; i++)
791 {
792 retorno = strcmp(Prod, Bibli[i].nome);
793
794 if(retorno == 0)
795 {
796 printf("\n Registro encontrado!\n ");
797
798
799 printf(" \n Produto: %s ", Bibli[i].nome);
800 printf(" \n preço: %.2f ", Bibli[i].preco);
801 printf(" \n Quantidade de itens: %i\n ", Bibli[i].QtdEstoque);
802 printf("Fornecedor: %s\n ", Bibli[i].fornecedor);
803 printf(" \n
----------------------------------------------------------------------
--\n");
804
805 printf(" \n Altera Estoque:\n ");
806 printf("\n\n [1] Entrada\n");
807 printf("[2] Saída\n");
808 printf(" \n Digite>>> ");
809 scanf("%i",&opc);
810
811 if(opc == 1)
812 {
813 printf(" \n Digite o valor de Entrada:\n ");
814 scanf("%i",&Estoque);
815 Bibli[i].QtdEstoque += Estoque;
816 }
817 if(opc == 2)
818 {
819 printf(" \n Digite o valor de Saída:\n ");
820 scanf("%i",&Estoque);
821 Bibli[i].QtdEstoque -= Estoque;
822 }
823
824 printf(" \n Produto: %s ", Bibli[i].nome);
825 printf(" \n preço: %.2f ", Bibli[i].preco);
826 printf(" \n Quantidade de itens: %i\n ", Bibli[i].QtdEstoque);
827 printf("Fornecedor: %s\n ", Bibli[i].fornecedor);
828 printf(" \n
----------------------------------------------------------------------
--\n");
829 break;
830
831 }else{
832
833 printf("\n Registro não encontrado!\n ");
834 break;
835 }
836 }
837
838 }
839
840 void AlteraPreco()
841 {
842 char Prod[20];
843 int i, retorno;
844 float preco;
845
846 printf(" \n Digite o nome do Produto para Alterar: ");
847 scanf("%s%*c",&Prod);
848
849 for(i=1; i<=10; i++)
850 {
851 retorno = strcmp(Prod, Bibli[i].nome);
852
853 if(retorno == 0)
854 {
855 printf("\n Registro encontrado!\n ");
856
857
858 printf(" \n Produto: %s ", Bibli[i].nome);
859 printf(" \n preço: %.2f ", Bibli[i].preco);
860 printf(" \n Quantidade de itens: %i\n ", Bibli[i].QtdEstoque);
861 printf("Fornecedor: %s\n ", Bibli[i].fornecedor);
862 printf(" \n
----------------------------------------------------------------------
--\n");
863
864 printf(" \n Altera Preço:\n ");
865 printf(" \n Digite o preco que deseja alterar:\n ");
866 printf(" \n Digite>>> ");
867 scanf("%f",&preco);
868 Bibli[i].preco = preco;
869
870
871
872 printf(" \n\n Produto: %s ", Bibli[i].nome);
873 printf(" \n preço: %.2f ", Bibli[i].preco);
874 printf(" \n Quantidade de itens: %i\n ", Bibli[i].QtdEstoque);
875 printf("Fornecedor: %s\n ", Bibli[i].fornecedor);
876 printf(" \n
----------------------------------------------------------------------
--\n");
877 break;
878
879 }else{
880
881 printf("\n Registro não encontrado!\n ");
882 break;
883 }
884 }
885
886 }
887
888
889 void AlteraNomeProduto()
890 {
891 char Prod[20];
892 int i,pos, retorno;
893
894
895 printf(" \n Digite o nome do Produto para Alterar: ");
896 scanf("%s%*c",&Prod);
897
898 for(i=1; i<=10; i++)
899 {
900 retorno = strcmp(Prod, Bibli[i].nome);
901
902 if(retorno == 0)
903 {
904 printf("\n Registro encontrado!\n ");
905
906
907 printf(" \n Produto: %s ", Bibli[i].nome);
908 printf(" \n preço: %.2f ", Bibli[i].preco);
909 printf(" \n Quantidade de itens: %i\n ", Bibli[i].QtdEstoque);
910 printf("Fornecedor: %s\n ", Bibli[i].fornecedor);
911 printf(" \n
----------------------------------------------------------------------
--\n");
912 pos = i;
913
914 printf(" \n Alterar Produto:\n ");
915 printf(" \n Digite o novo nome do Produto:\n ");
916 printf(" \n Digite>>> ");
917 scanf("%s%*c",&Bibli[pos].nome);
918
919
920
921 printf(" \n\n Produto: %s ", Bibli[i].nome);
922 printf(" \n preço: %.2f ", Bibli[i].preco);
923 printf(" \n Quantidade de itens: %i\n ", Bibli[i].QtdEstoque);
924 printf("Fornecedor: %s\n ", Bibli[i].fornecedor);
925 printf(" \n
----------------------------------------------------------------------
--\n");
926 break;
927
928 }else{
929
930 printf("\n Registro não encontrado!\n ");
931 break;
932 }
933 }
934
935 }
936
937
938 void ExcluirProduto()
939 {
940 char Prod[20];
941 int i,pos, retorno, ex;
942
943
944 printf(" \n Digite o nome do Produto para Alterar: ");
945 scanf("%s%*c",&Prod);
946
947 for(i=1; i<=10; i++)
948 {
949 retorno = strcmp(Prod, Bibli[i].nome);
950
951 if(retorno == 0)
952 {
953 printf("\n Registro encontrado!\n ");
954
955
956 printf(" \n Produto: %s ", Bibli[i].nome);
957 printf(" \n preço: %.2f ", Bibli[i].preco);
958 printf(" \n Quantidade de itens: %i\n ", Bibli[i].QtdEstoque);
959 printf("Fornecedor: %s\n ", Bibli[i].fornecedor);
960 printf(" \n
----------------------------------------------------------------------
--\n");
961 pos = i;
962
963 printf(" \n Excluir Produto:\n ");
964 printf(" \n Deseja realmente Excluir? Para Excluir Digite [1] ou [2]
Para Sair: ");
965 printf(" \n Digite>>> ");
966 scanf("%i", &ex);
967 if(ex == 1)
968 {
969 strcpy(Bibli[pos].nome, " ");
970 Bibli[pos].preco = 0;
971 Bibli[pos].QtdEstoque = 0;
972 strcpy(Bibli[pos].fornecedor, " ");
973
974 }else{
975 break;
976 }
977 break;
978
979 }else{
980
981 printf("\n Registro não encontrado!\n ");
982 break;
983 }
984 }
985
986 }
987
988
989
990 int main(void)
991 {
992 Ptr;
993 int n, opc,i;
994
995 do
996 {
997 system("cls");
998 printf("\n\n [1] Entra Dados do Produto\n");
999 printf(" [2] Listar todos os Produtos\n");
1000 printf(" [3] Busca por Nome de Produtos\n");
1001 printf(" [4] Busca por Nome de Fornecedor\n");
1002 printf(" [5] Pesquisa Produto por faixa de preço\n");
1003 printf(" [6] Alterar Estoque do Produto \n");
1004 printf(" [7] Altera preço de um produto pesquisado pelo nome completo\n");
1005 printf(" [8] Altera produto pesquisado pelo nome\n");
1006 printf(" [9] Excluir Produto\n");
1007 printf(" [10] Sair\n");
1008 printf(" \n Digite>>> ");
1009 scanf("%i",&opc);
1010
1011
1012 switch(opc)
1013 {
1014
1015 case 1:
1016 printf("\n\n Digite a quantidade de Pessoas que deseja
cadastrar\n");
1017 printf("\n Digite [0] para Sair\n\n");
1018 printf(" \n Digite>>> ");
1019 scanf("%i",&n);
1020
1021
1022 cadastro(n);
1023 break;
1024
1025 case 2:
1026 if(n !=0)
1027 {
1028 ListaDados(n);
1029 }else{
1030 printf("Você não inseriu dados");
1031 }
1032 break;
1033
1034 case 3:
1035 if(n !=0)
1036 {
1037 Busca();
1038 }else{
1039 printf("Você não inseriu dados");
1040 }
1041 break;
1042
1043 case 4:
1044 if(n !=0)
1045 {
1046 BuscaFornecedor();
1047 }else{
1048 printf("Você não inseriu dados");
1049 }
1050 break;
1051
1052 case 5:
1053 if(n !=0)
1054 {
1055 BuscaProduto();
1056 }else{
1057 printf("Você não inseriu dados");
1058 }
1059 break;
1060
1061 case 6:
1062 if(n !=0)
1063 {
1064 AlteraProduto();
1065 }else{
1066 printf("Você não inseriu dados");
1067 }
1068 break;
1069
1070 case 7:
1071 if(n !=0)
1072 {
1073 AlteraPreco();
1074 }else{
1075 printf("Você não inseriu dados");
1076 }
1077 break;
1078
1079 case 8:
1080 if(n !=0)
1081 {
1082 AlteraNomeProduto();
1083 }else{
1084 printf("Você não inseriu dados");
1085 }
1086 break;
1087
1088 case 9:
1089 if(n !=0)
1090 {
1091 ExcluirProduto();
1092 }else{
1093 printf("Você não inseriu dados");
1094 }
1095 break;
1096
1097 default:
1098
1099 if(opc == 0)
1100 {
1101 printf("\n\n Numero Inválido\n");
1102 }
1103
1104 break;
1105
1106 }
1107
1108 system("pause");
1109
1110 }while(opc != 10);
1111
1112
1113
1114 return 0;
1115 }
1116
1117 #endif
1118
1119 #ifdef Arquivo
1120
1121
1122 int main(void)
1123 {
1124 Ptr;
1125
1126 FILE *arq;
1127 char palavra[20];
1128
1129 /*abrindo o arquivo com o tipo de abertura w*/
1130 arq = fopen("arquivo.txt", "a");
1131
1132 if(arq == NULL)
1133 {
1134 printf("Erro na abertura do arquivo!");
1135 return 1;
1136 }else{
1137
1138 printf("Escreva uma palavra para testar gravação de arquivo: ");
1139 scanf("%s%*c",palavra);
1140
1141 /*usando fprintf para armazenar a string no arquivo*/
1142 fprintf(arq,"%s\n", palavra);
1143 fprintf(arq,"%s\n", palavra);
1144
1145 /*usando fclose para fechar o arquivo*/
1146 fclose(arq);
1147
1148 printf("Dados gravados com sucesso!");
1149 }
1150 return 0;
1151 }
1152
1153 /*
1154 do{
1155
1156 fflush(stdin);
1157 printf("Digite o nome: ");
1158 gets();
1159
1160 }while(getche == 's');
1161
1162
1163 fwrite(&ctt, sizeof(CONTATO),1, arquivo);
1164 */
1165 #endif
1166
1167 #ifdef Suprimentos
1168
1169 /*
1170 listar()
1171 abrir o arquivo
1172
1173 arquivo = fopen("arquivo.txt", "rb"); //função de leitura
1174
1175 //Contato - Tamanho exato da estrutura
1176 //Se encontrar a linha ele lista
1177
1178 while(fread(&ctt, sizeof(Contato),1, arquivo) == 1){
1179 printf(Nome %s\n", ctt.nome);
1180 printf(Nome %s\n", ctt.fone);
1181 system("pause");
1182
1183 }
1184
1185 fechar o arquivo
1186
1187 pesquisar(){
1188 Contato ctt;
1189 char nome[30];
1190
1191 abrir o arquivo
1192 arquivo = fopen("arquivo.txt", "rb"); //função de leitura
1193
1194 fflush(stdin); //limpar caracetr buffer
1195 printf("Digite o nome a pesquisar: ");
1196 gets(nome);
1197
1198 while(fread()){}
1199
1200
1201 fclose(arquivo);
1202 fechar arquivo
1203
1204 }
1205
1206 -------------------------------------------
1207 Ler while(!feof(arq)) //Enquanto não chegar no final do arquivo leia
1208 {
1209 fgets(texto,255,arq);
1210 printf("%s", texto);
1211
1212 }
1213
1214 */
1215
1216
1217 void Inserir()
1218 {
1219 FILE *arq;
1220 char nome[200];
1221 char serie[200];
1222 char departamento[200];
1223 char ip[200];
1224 char TipoCartucho[100];
1225 int QtdEstoque;
1226 int QtdIdeal;
1227 char pedido[100];
1228
1229 int opc;
1230 /*abrindo o arquivo com o tipo de abertura w*/
1231 arq = fopen("Impressoras.txt", "a");
1232
1233 if(arq == NULL)
1234 {
1235 printf("Erro na abertura do arquivo!");
1236 return 1;
1237 }else{
1238
1239 do{
1240 printf("\n\n Digite a quantidade de Impressoras que deseja cadastrar\n");
1241 printf("\n Digite [0] para Sair ou [1] Para continuar\n\n");
1242 printf(" \n Digite>>> ");
1243 scanf("%i",&opc);
1244
1245 if(opc != 0)
1246 {
1247 system("cls");
1248 fflush(stdin);
1249 printf("\n\nDigite o nome: ");
1250 scanf("%s%*c",&nome);
1251 fprintf(arq,"Nome: %s\n", nome);
1252
1253 fflush(stdin);
1254 printf("Digite a série: ");
1255 scanf("%s%*c",&serie);
1256 fprintf(arq,"Serie: %s\n", serie);
1257
1258 printf("Digite o departamento: ");
1259 scanf("%s%*c",departamento);
1260 fprintf(arq,"Departamento: %s\n", departamento);
1261
1262 printf("Digite o ip: ");
1263 printf(" ");
1264 scanf("%s%*c",&ip);
1265 fprintf(arq,"IP: %s\n", ip);
1266
1267 printf("Digite o Tipo Cartucho: ");
1268 scanf("%s%*c",&TipoCartucho);
1269 fprintf(arq,"Tipo: %s\n", TipoCartucho);
1270
1271 printf("Quantidade em Estoque: ");
1272 scanf("%i",&QtdEstoque);
1273 fprintf(arq,"Qtd Estoque: %i\n", QtdEstoque);
1274
1275 printf("Quantidade Ideal: ");
1276 scanf("%i",&QtdIdeal);
1277 fprintf(arq,"QtdIdeal %i\n", QtdIdeal);
1278
1279 printf("Possuí Pedido: ");
1280 scanf("%s%*c",&pedido);
1281 fprintf(arq,"Pedido: %s\n",pedido);
1282 fprintf(arq,"\n-------------------------------------------------\n\n");
1283 }
1284 }while(opc != 0);
1285
1286 }
1287
1288 fclose(arq);
1289 printf("\nDados gravados com sucesso!");
1290 }
1291
1292 void Listar()
1293 {
1294 char texto[1000];
1295 int cont = 0;
1296
1297 fflush(stdin);
1298 FILE *arq;
1299 arq = fopen("Impressoras.txt", "r");
1300
1301 if(arq == NULL)
1302 {
1303 printf("Erro na abertura do arquivo!");
1304 return 1;
1305 }else{
1306
1307 /*while(fread(&ctt,sizeof(Biblioteca),1, arq) != NULL){*/
1308 /*while(fgets(&ctt,sizeof(Biblioteca),arq)!= NULL)*/
1309 /*while(fread(&ctt,sizeof(Biblioteca),1, arq) == 1)*/
1310
1311
1312 while(!feof(arq))
1313 {
1314
1315 fgets(texto,1000,arq);
1316 printf("%s", texto);
1317 }
1318
1319 }
1320
1321 fclose(arq);
1322 }
1323
1324
1325 void ler()
1326 {
1327
1328 FILE *arq;
1329 char Linha[1000];
1330 char ch;
1331 int i, retorno;
1332
1333 arq = fopen("Impressoras.txt", "rt");
1334 if (arq == NULL)
1335 {
1336 printf("Problemas na abertura do arquivo\n");
1337 return;
1338 }else{
1339 i = 1;
1340
1341
1342 do{
1343 ch = fgetc(arq);
1344
1345 if(ch == "PO_ADMI_R02")
1346 {
1347 printf("%c", ch);
1348
1349 }
1350
1351
1352
1353
1354
1355
1356 /*i++;*/
1357
1358
1359
1360 }while (!feof(arq));
1361 }
1362
1363
1364
1365 fclose(arq);
1366
1367 }
1368
1369
1370
1371 int main()
1372 {
1373 Ptr;
1374 /*Inserir();*/
1375 /*Listar();*/
1376
1377 ler();
1378
1379
1380
1381
1382
1383
1384
1385
1386
1387
1388
1389 return 0;
1390
1391 }
1392
1393 #endif
1394
1395 /*Função Parte 4*/
1396
1397 #ifdef exe1
1398
1399 /*
1400 1. Faça um programa que exiba os números ímpares de 50 até 150.Utilize o laço
for.
1401
1402 */
1403 int main()
1404 {
1405 int i,x;
1406
1407 for(i=50;i<=150;i++)
1408 {
1409 x = i%2;
1410 if(x != 0)
1411 {
1412 printf("%i\n",i);
1413 }
1414 }
1415
1416 return 0;
1417 }
1418 #endif
1419
1420 #ifdef exe2
1421
1422 /*
1423 2. Faça um programa que exiba os números pares entre -10 e 50. Utilize o.
Utilize o laço do while.
1424
1425 */
1426
1427 int main()
1428 {
1429 int i=-11,x;
1430
1431 do
1432 {
1433 i+=1;
1434 x = i%2;
1435 if(x == 0)
1436 {
1437 printf("%i\n",i);
1438 }
1439
1440 }while(i>=-11 && i<51);
1441
1442
1443 return 0;
1444 }
1445
1446 #endif // exe2
1447
1448 #ifdef exe3
1449
1450 /*
1451 3. Faça um programa que exiba os números que são múltiplos de 5 entre 1 e 100.
Utilize o laço while.
1452
1453 */
1454
1455 int main()
1456 {
1457 int cont;
1458
1459 cont=0;
1460 do
1461 {
1462 cont+=5;
1463 printf("num=%d\n",cont);
1464
1465 } while (cont<100);
1466
1467 return 0;
1468 }
1469
1470 #endif // exe3
1471
1472 #ifdef exe4
1473 /*
1474 4. Faça um programa que exiba os números que são múltiplos de 3 e são ímpares.
1475 */
1476
1477 int main()
1478 {
1479 int cont,x;
1480
1481 cont=0;
1482 do
1483 {
1484 cont+=3;
1485 x = cont%2;
1486 if(x!=0)
1487 {
1488 printf("num=%d\n",cont);
1489 }
1490
1491 } while (cont<100);
1492
1493 return 0;
1494 }
1495
1496 #endif // exe4
1497
1498 #ifdef exe5
1499 /*
1500 5. Faça um programa em C que solicite ao usuário a quantidade de termos que ele
deseja exibir da seguinte sequência:3, 6, 9, 12, 15,...
1501 Obs.: Crie uma função para garantir que essa quantidade deve ser deve ser
maior que zero e representada pela variável K.
1502
1503 */
1504 int k,num,cont;
1505
1506 void Mzero()
1507 {
1508 if(k<0)
1509 {
1510 printf("Quantidade deve ser maior que zero\n");
1511 system("pause");
1512 system("cls");
1513 return main();
1514 }
1515 }
1516
1517 main()
1518 {
1519
1520 printf("Digite a quantidade >0 3, 6, 9, 12, 15,...\n");
1521 scanf("%i",&k);
1522 Mzero();
1523 for(cont=1;cont<=k;cont+=1)
1524 {
1525 num+=3;
1526 printf("numero digitado = %d\n",num);
1527 }
1528
1529 }
1530
1531
1532
1533 #endif // exe5
1534
1535 #ifdef exe6
1536
1537 /*
1538 6. Faça um programa em C que solicite ao usuário a quantidade de termos que ele
deseja exibir da seguinte sequência: 1/4, 1/8, 1/12, 1/16, 1/20,...
1539 Obs.: Crie uma função para garantir que essa quantidade deve ser deve ser maior
que zero e representada pela variável K.
1540 */
1541 int k,cont,num=1,den=0;
1542
1543 void Mzero()
1544 {
1545 if(k<0)
1546 {
1547 printf("Quantidade deve ser maior que zero\n");
1548 system("pause");
1549 system("cls");
1550 return main();
1551 }
1552 }
1553
1554
1555 main()
1556 {
1557 setlocale(LC_ALL,"");
1558 do{
1559 printf("Digite a quantidade>0 da seguência: 1/4, 1/8, 1/12, 1/16,
1/20,...\n");
1560 scanf("%i",&k);
1561 Mzero();
1562
1563 }while(k<=0);
1564 for(cont=1;cont<=k;cont+=1)
1565 {
1566 num=1;
1567 den+=4;
1568 printf("%d/%d\n",num,den);
1569 }
1570 }
1571
1572
1573 #endif // exe6
1574
1575 #ifdef exe7
1576
1577 /*
1578 7. Faça um programa em C que solicite ao usuário a quantidade de termos que ele
deseja exibir da seguinte sequência: 2/5, 4/10, 6/15, 8/20, 10/25, 12/30,...
1579 Obs.: Crie uma função para garantir que essa quantidade deve ser deve ser maior
que zero e representada pela variável K.
1580 .
1581 */
1582 int k,cont,num,den=0;
1583
1584 void Mzero()
1585 {
1586 if(k<0)
1587 {
1588 printf("Quantidade deve ser maior que zero\n");
1589 system("pause");
1590 system("cls");
1591 return main();
1592 }
1593 }
1594
1595
1596 main()
1597 {
1598 setlocale(LC_ALL,"");
1599 do{
1600 printf("Digite a quantidade>0 da seguência: 2/5, 4/10, 6/15, 8/20, 10/25,
12/30,...\n");
1601 scanf("%i",&k);
1602 Mzero();
1603
1604 }while(k<=0);
1605 for(cont=1;cont<=k;cont+=1)
1606 {
1607 num+=2;
1608 den+=5;
1609 printf("%d/%d\n",num,den);
1610 }
1611 }
1612
1613 #endif // exe7
1614
1615 #ifdef exe8
1616
1617 /*
1618 8. Faça um programa em C que solicite ao usuário a quantidade de termos
representada pela variável X
1619 que representa a quantidade de termos que o usuário deseja. H representa
cada um desses números, calcule o produto dos X números.
1620 OBS: H deve ser maior ou igual a 15.
1621 */
1622
1623
1624 int x,h,cont,prod=1;
1625
1626
1627 void Mzero()
1628 {
1629 if(x<=0)
1630 {
1631 printf("Quantidade deve ser maior que 0\n");
1632 system("pause");
1633 system("cls");
1634 return main();
1635 }
1636 }
1637
1638 void Mquinze()
1639 {
1640 if(h<15)
1641 {
1642 printf(" Numero deve ser maior que 15\n");
1643 system("pause");
1644 system("cls");
1645 return main();
1646 }
1647 }
1648
1649
1650 main()
1651 {
1652 setlocale(LC_ALL,"");
1653
1654 printf(" Digite a quantidade que deseja: ");
1655 scanf("%i",&x);
1656 Mzero();
1657
1658 for(cont=1;cont<=x;cont++)
1659 {
1660 printf(" Digite o numero: ");
1661 scanf("%i",&h);
1662 Mquinze();
1663 printf(" %iº numero = %i\n\n",cont,h);
1664
1665 prod *=h;
1666 }
1667 printf(" \n\n**O Produto dos numeros: %i\n",prod);
1668
1669
1670
1671 return 0;
1672
1673 }
1674
1675
1676 #endif // exe8
1677
1678
1679 #ifdef exe9
1680
1681 /*
1682 A nota final de um exame é calculada a partir de três notas atribuídas
respectivamente a um trabalho
1683 de laboratório, uma avaliação semestral e a um exame final. A média das três
notas mencionadas anteriormente
1684 obedece aos pesos a seguir
1685
1686 Trabalho de Laboratório peso 2
1687 Avaliação Semestral peso 3
1688 Exame final peso 5
1689
1690 Mp = [(N1 x P1) + (N2 x P2) + (N3 x P3) + (N4 x P4)] ÷ (P1 + P2 + P3 + P4)
1691 Calculo da média ponderada
1692 */
1693 int TrabLab,AvalSem,ExamFinal, Med, mediafinal;
1694 char conc;
1695
1696 int Media()
1697 {
1698
1699 Med = (TrabLab*2)+(AvalSem*3)+(ExamFinal*5);
1700 Med = Med/10;
1701 printf("\nNota da Média Final: %i", Med);
1702
1703
1704 }
1705
1706 char Conceito()
1707 {
1708 if(Med>=8 && Med<=10)
1709 {
1710 conc = 'A';
1711 printf("\nA nota conceitual é: %c", conc);
1712
1713 }
1714 if(Med>=7 && Med<8)
1715 {
1716 conc = 'B';
1717 printf("\nA nota conceitual é: %c", conc);
1718
1719 }
1720 if(Med>=6 && Med<7)
1721 {
1722 conc = 'C';
1723 printf("\nA nota conceitual é: %c", conc);
1724
1725 }
1726 if(Med>=5 && Med<6)
1727 {
1728 conc = 'D';
1729 printf("\nA nota conceitual é: %c", conc);
1730
1731 }
1732 if(Med>=0 && Med<5)
1733 {
1734 conc = 'E';
1735 printf("\nA nota conceitual é: %c", conc);
1736 }
1737
1738 }
1739
1740
1741 int main()
1742 {
1743
1744 setlocale(LC_ALL,"Portuguese");
1745 printf("Digite a nota do Trabalho de Laboratório: ");
1746 scanf("%i",&TrabLab);
1747 printf("Digite a nota do Avaliação Semestral: ");
1748 scanf("%i",&AvalSem);
1749 printf("Digite a nota do Exame final: ");
1750 scanf("%i",&ExamFinal);
1751
1752 Media();
1753 Conceito();
1754
1755
1756
1757
1758
1759
1760 return 0;
1761 }
1762 #endif
1763
1764 /*
1765 Faça um programa que receba três notas de um aluno, calcule e mostre a média
aritmética
1766 e a mensagem que segue a tabela abaixo. Para alunos de exame, calcule e mostre a
nota que
1767 deverá ser tirada no exame para aprovação, considerando a média no exame é 6.0.
1768
1769
1770 */
1771
1772 #ifdef exe10
1773
1774 int i,nota,Med=0,exame;
1775 int v[3];
1776
1777
1778 int Media()
1779 {
1780 int nota1=0, nota2=0, nota3=0;
1781 nota1 = v[0];
1782 nota2 = v[1];
1783 nota3 = v[2];
1784
1785 Med = (nota1+nota2+nota3)/3;
1786 printf("\nNota da Média Final: %i\n\n\n", Med);
1787
1788
1789 }
1790
1791 void VerificaNota ()
1792 {
1793 if(nota<0 || nota>10)
1794 {
1795 printf(" Você Digitou um valor inválido %i\n Digite valores entre 0
e 10 ", nota);
1796 system("pause");
1797 return main();
1798 }
1799 else
1800 {
1801 printf(" Você Digitou a nota:%i\n",i+1);
1802 v[i] = nota;
1803 }
1804 }
1805 void VerificaMedia()
1806 {
1807 if(Med>=0 && Med<3)
1808 {
1809 printf("\n****Aluno Reprovado!");
1810 }
1811 if(Med>=3 && Med<7)
1812 {
1813 printf("\n****Aluno vai para Exame!\n");
1814 printf("\nDigite Nota da Prova do Exame: ");
1815 scanf("%i",&exame);
1816 VerificaNota();
1817
1818 if(exame>5)
1819 {
1820 printf("\nAluno Aprovado no Exame!");
1821 }
1822 else
1823 {
1824 printf("\n****Aluno Reprovado!");
1825 }
1826 }
1827 if(Med>=7 && Med<10)
1828 {
1829 printf("\n****Aluno Aprovado!");
1830 }
1831
1832 }
1833
1834
1835 int main()
1836 {
1837
1838 setlocale(LC_ALL,"Portuguese");
1839 for(i=0;i<3;i++)
1840 {
1841 v[i]=0;
1842 printf(" \n\nDigite 3 notas");
1843 printf("\nDigite: ");scanf("%i",&nota);
1844 VerificaNota ();
1845 }
1846 Media();
1847 VerificaMedia();
1848
1849
1850
1851
1852 return 0;
1853
1854 }
1855
1856 #endif
1857 /*
1858 3. Faça um programa que mostre o menu de opções a seguir, receba a opção do
usuário e os dados necessários para executar cada operação.
1859 Menu de opções:
1860 1. Somar dois números
1861 2. Raiz quadrada de um número
1862 3. Divisão do primeiro pelo segundo número
1863 4. Um número positivo elevado ao quadrado.
1864 5. Encerrar o programa.
1865 Digite a opção desejada:
1866 Obs:Garante que só sejam válidos os números de 1 até 5.As opções de 1 até 4
devem garantir o retorno ao menu de opções para uma nova escolha.
1867
1868 */
1869
1870
1871 #ifdef exe12
1872 int opc,a,b,c;
1873
1874 int Soma()
1875 {
1876 c = a+b;
1877 printf("\nValor da soma: %i",c);
1878 }
1879
1880 int Raiz()
1881 {
1882
1883 b = (int)sqrt( a );
1884 printf("\nValor da raiz: %i",b);
1885 }
1886
1887
1888 int main()
1889 {
1890 setlocale(LC_ALL,"Portuguese");
1891
1892
1893
1894 printf(" \n[1] Somar dois Numeros ");
1895 printf(" \n[2] Raiz quadrada de um numero ");
1896 printf(" \n[9] Para Sair\n");
1897 printf("\nDigite uma opção: ");scanf("%d",&opc);
1898
1899 switch(opc)
1900 {
1901 case 1:
1902 printf("\nDigite um numero para somar:");
1903 scanf("%i",&a);
1904 printf("\nDigite um numero para somar:");
1905 scanf("%i",&b);
1906 Soma();
1907 break;
1908
1909 case 2:
1910 printf("\nDigite um numero para calcular a raiz:");
1911 scanf("%i",&a);
1912 Raiz();
1913 break;
1914
1915 case 9:
1916 system("exit");
1917 break;
1918
1919 default:
1920 printf("Opção Inválida!");
1921 break;
1922 }
1923
1924
1925
1926
1927 return 0;
1928 }
1929
1930 #endif // exe1
1931
1932 /*
1933 1. Crie uma função chamada Notas para garantir o recebimento de cada uma das
notas uma de cada vez. As notas deverão ser maiores ou iguais a
1934 zero e menores ou iguais a dez. Receba quatro valores referentes às notas
escolares de um aluno. Crie uma função Média para calcular a média aritmética do
aluno.
1935 Exiba a média e se o aluno foi aprovado ou não no interior da função main.
1936 Ele será aprovado se a média for maior ou igual a 6. Caso contrário informe que
ele está reprovado.
1937
1938 */
1939
1940 #ifdef exe13
1941
1942 int ExibeMedia(int notas[4]);
1943 int Notas(int notas[4]);
1944
1945 /*
1946 Função para garantir que as notas seja entre 0 e 10
1947 */
1948 int Notas(int notas[4])
1949 {
1950 int i;
1951
1952 for(i=0;i<4;i++)
1953 {
1954 if(notas[i]>=0 && notas[i]<=10)
1955 {
1956 notas[i] = notas[i];
1957 }
1958 else
1959 {
1960 system("cls");
1961 printf("******Esse valor eh invalido, somente eh aceito Notas entre 0 e
10\n");
1962 printf("Digite Novamente");
1963 return main ();
1964 }
1965 }
1966
1967 return ExibeMedia(notas);
1968 }
1969 /*
1970 Calcular Média -> recebe a função verificada pega cada posição e extrai a média
1971 */
1972 int ExibeMedia(int notas[4])
1973 {
1974 int media;
1975 int soma=0;
1976 int i;
1977
1978 for(i=0;i<4;i++)
1979 {
1980 soma += notas[i];
1981 }
1982 media = soma/4;
1983
1984 if(media>=6)
1985 {
1986 return printf("\n*******Aluno Aprovado!! Nota: %d *********",media);
1987 }
1988 else
1989 {
1990 return printf("\n*******Aluno Reprovado!! Nota: %d ********",media);
1991 }
1992
1993 }
1994
1995 int main (){
1996
1997 int notaAluno,i=0;
1998 int nota[4];
1999
2000 while(i<4){
2001 printf("Digite a nota do aluno: ");
2002 scanf("%d",&notaAluno);
2003 nota[i] = notaAluno;
2004 i++;
2005 }
2006 Notas(nota);
2007
2008 return 0;
2009 }
2010
2011 #endif
2012
2013 /*
2014 2. Crie uma função que garanta o recebimento de números maiores que zero e
menores ou iguais a 10.
2015 Receba dois números utilizando está função e o terceiro número deverá ser a soma
dos dois anteriores.
2016 Crie a função produto para calcular o produto destes três números.
2017 No interior da função main verifique se o produto obtido for menor que 500,
solicite novos dados.
2018
2019 */
2020
2021
2022 #ifdef exe14
2023 int vet[11]={0,1,2,3,4,5,6,7,8,9,10};
2024
2025 int *ptr, posicao, i, num=0, num2=0, num3=0, produto;
2026 int VerificaNum (int num, int num2);
2027 int CalcProd(int Num, int Num2, int Num3);
2028
2029
2030 int VerificaNum (int num, int num2)
2031 {
2032 /*
2033 Foi deifinido um vetor de 11 posições para garantir que os numeros estejam
sempre nessa faixa de verificação
2034 Recebe o endereço do vetor
2035 *ptr aponta para o primeiro conteudo do vetor e armazena na variável posicao
2036 o if no for verifica se determinada posição existe comparando com a variável
num e num2
2037
2038 */
2039 ptr = &vet[11];
2040 posicao = *ptr;
2041
2042 for(i=0;i<11;i++)
2043 {
2044 if(posicao+i == num)
2045 {
2046 num = posicao+i;
2047 }
2048
2049 if(posicao+i == num2)
2050 {
2051 num2 = posicao+i;
2052 }
2053 }
2054 if(num==0 || num2==0 || num<0 || num2<0 || num>10 || num2>10 )
2055 {
2056 return '1';
2057 }
2058 else
2059 {
2060 num3 = num + num2;
2061 return CalcProd(num, num2,num3);
2062 }
2063 }
2064
2065
2066 int CalcProd(int Num, int Num2, int Num3)
2067 {
2068 produto = Num*Num2*Num3;
2069 return produto;
2070
2071 }
2072
2073 int main(){
2074
2075
2076 printf("\n\n");
2077 printf("VERIFICA QUAL EH O PRODUTO DE UM NUMERO");
2078 printf("\n\n");
2079 do
2080 {
2081 printf("\nDigite o numero: ");
2082 scanf("%d",&num);
2083 printf("\nDigite o numero: ");
2084 scanf("%d",&num2);
2085
2086 if(VerificaNum (num, num2)== '1' )
2087 {
2088 printf("\n******NUMERO INVALIDO DIGITE NUMEROS DE 0 A 10*****");
2089 printf("\n\n");
2090 }
2091 else
2092 {
2093 printf("\n\n");
2094 printf("\n O Produto do Numero: %d\n",VerificaNum (num, num2));
2095 }
2096
2097 }while (VerificaNum (num, num2) < 500);
2098
2099
2100 return 0;
2101 }
2102
2103 #endif
2104
2105 /*
2106
2107
2108 3. Crie uma função que garanta que cada lado deve ser maior que zero. Receba
três números que representam os lados de um triângulo.
2109 Garanta no interior da função main a existência de um triângulo. Informe ao
usuário se o triângulo é isóscele, equilátero ou escaleno.
2110
2111 Observações:
2112
2113 a. Garantir que cada lado é menor que a soma dos outros dois lados.
2114 b. O triângulo é equilátero quando todos os lados são iguais.
2115 c. O triângulo é isóscele quando apenas dois lados são iguais.
2116 d. O triângulo é escaleno quando todos os lados são diferentes
2117
2118
2119
2120 */
2121
2122 #ifdef exe15
2123
2124
2125 int a,b,c;
2126 char condicao1, condicao2, condicao3, condicaofinal;
2127
2128 /*
2129 Só irá existir um triângulo se, somente se,
2130 os seus lados obedeceram à seguinte regra: um de seus lados deve ser maior
que o valor absoluto (módulo)
2131 da diferença dos outros dois lados e menor que a soma dos outros dois lados.
2132
2133 | b - c | < a < b + c
2134 | a - c | < b < a + c
2135 | a - b | < c < a + b
2136 */
2137 int main(){
2138
2139 printf("\n\n");
2140
2141
2142 printf("\n\tVERIFICA TRIANGULO");
2143 printf("\n\n");
2144
2145 printf("DIGITE O LADO A: ");
2146 scanf("%d",&a);
2147 printf("DIGITE O LADO B: ");
2148 scanf("%d",&b);
2149 printf("DIGITE O LADO C: ");
2150 scanf("%d",&c);
2151
2152 if (b - c < a && a < b + c)
2153 {
2154 condicao1 = 'v';
2155 }
2156 else
2157 {
2158 condicao1 = 'n';
2159 }
2160 if (a - c < b && b < a + c)
2161 {
2162 condicao2 = 'v';
2163 }
2164 else
2165 {
2166 condicao2 = 'n';
2167 }
2168 if (a - b < c && c < a + b)
2169 {
2170 condicao3 = 'v';
2171 }
2172 else
2173 {
2174 condicao3 = 'n';
2175 }
2176
2177 if(condicao1 == 'v' && condicao2 =='v' && condicao3 == 'v')
2178 {
2179 printf("\n\n");
2180 printf("Este eh um Triangulo!");
2181 condicaofinal = 'v';
2182
2183 }
2184 if(condicao1 == 'n' || condicao2 == 'n' || condicao3 == 'n')
2185 {
2186 printf("\n\n");
2187 printf("Verifique os numeros digitados, eles nao representam valores que
formam um triangulo");
2188 printf("\n\n");
2189 }
2190
2191
2192 if(condicaofinal == 'v')
2193 {
2194 if (a == b || c == b || a == c)
2195 {
2196 printf("\n\n");
2197 printf("\nDo tipo: Triangulo Isoceles");
2198 printf("\n\n");
2199 }
2200
2201 if (a == b && c == b && a == c)
2202 {
2203 printf("\n\n");
2204 printf("\nDo tipo: Triangulo Equilatero");
2205 printf("\n\n");
2206 }
2207
2208 if (a != b && c != b && a != c)
2209 {
2210 printf("\n\n");
2211 printf("\nDo tipo: Triangulo Escaleno");
2212 printf("\n\n");
2213 }
2214 }
2215 return 0;
2216 }
2217
2218 #endif
2219
2220 /*
2221 4. Crie uma função que garanta que um número é negativo. Receba dois números
utilizando esta função.
2222 Crie a função Verifcamultiplos e verifique se estes dois números são múltiplos
ou não.
2223 Exiba se são múltiplos ou não no interior da função VerificaMultiplos. Pesquise
na internet o que são múltiplos.
2224
2225
2226 */
2227
2228 #ifdef exe16
2229 int m,n,k;
2230
2231 /*
2232 VerificaMultiplos(a,b);
2233 */
2234
2235 int RecebaNumero(int a, int b)
2236 {
2237 if(a<0 && b<0)
2238 {
2239 return VerificaMultiplos(a, b);
2240 }
2241 else
2242 {
2243 return printf("\n*****Numero invalido!! so sao aceitos numeros negativos");
2244 }
2245
2246 }
2247
2248 void VerificaMultiplos(int m, int n)
2249 {
2250
2251 k = m/n;
2252 if(k*n == m)
2253 {
2254 printf("\nEsses Dois Numeros sao multiplos! ");
2255 }
2256 else
2257 {
2258 printf("\nEsses Numeros nao sao multiplos! ");
2259 }
2260
2261 }
2262
2263 int main()
2264 {
2265
2266 printf("\n\n");
2267 printf("\nDigite o numero: ");
2268 scanf("%d",&m);
2269 printf("\nDigite o numero: ");
2270 scanf("%d",&n);
2271 RecebaNumero(m, n);
2272
2273 }
2274
2275 #endif // exe4
2276
2277 /*
2278 Crie a função Esfera que receba da função main o valor do raio e calcule o
volume da esfera o seu volume v =(4*Pi*R3)/3.
2279 Crie também uma função para garantir que o raio deve ser maior que zero.
2280 Exiba o volume da esfera no interior da função main.
2281
2282 */
2283
2284 #ifdef exe17
2285 /*
2286 CALCULA O VOLUME DE UMA ESFERA
2287
2288 */
2289 int raio=0;
2290 int num=0;
2291
2292 int Esfera(int raio);
2293 int MaiorqZero(int num);
2294
2295 int Esfera(int raio)
2296 {
2297 float volume;
2298 raio = pow(raio,3);
2299 volume = 4.0 / 3.0*M_PI*raio;
2300
2301 return printf("\n%.2f",volume);
2302 }
2303
2304 /*
2305 Verifica se o numero é maior que zero e passa o valor para a função esfera que
calcula o valor
2306 */
2307 int MaiorqZero(int num)
2308 {
2309 if(num<=0)
2310 {
2311 printf("*******NUMERO INVALIDO!******\n");
2312 printf("****Digite outro numero!****\n\n");
2313 return main();
2314 }
2315 else
2316 {
2317 return Esfera(num);
2318 }
2319
2320 }
2321
2322 int main()
2323 {
2324
2325
2326 printf("CALCULA O VOLUME DE UMA ESFERA\n\n");
2327
2328
2329 printf("Insira o valor do raio da esfera: ");
2330 scanf(" %d", &raio);
2331 MaiorqZero(raio);
2332
2333 printf("\n\n");
2334
2335 return 0;
2336 }
2337
2338 #endif
2339
2340 /*
2341 2. Crie a função verifica para verificar e exibir no seu interior se o número é
positivo, negativo ou zero.
2342 O número deverá ser do tipo inteiro e deverá ser recebido no interior função
main...
2343 */
2344
2345 #ifdef exe18
2346 void VerificaNum(int num);
2347 int num=0;
2348
2349 void VerificaNum(int num)
2350 {
2351 if(num>0)
2352 {
2353 printf(" \nEste numero e POSITIVO\n ");
2354 }
2355 if(num==0)
2356 {
2357 printf(" \nVoce Digitou ZERO\n ");
2358 }
2359 if(num<0)
2360 {
2361 printf(" \nVoce Digitou NEGATIVO\n ");
2362 }
2363
2364 }
2365
2366 int main()
2367 {
2368
2369 printf("VERIFICA SE NUMERO E POSITIVO OU NEGATIVO\n\n");
2370 printf("Insira um Numero: ");
2371 scanf(" %d", &num);
2372 VerificaNum(num);
2373
2374 return 0;
2375 }
2376 #endif
2377 /*
2378 3. Crie a função Divisão que receba da função main dois números diferentes de
zero que possibilitem o cálculo da divisão do primeiro pelo segundo.
2379 Crie uma função para garantir que os números devem ser diferentes de zero.
2380 Exiba na função main os números e o resultado obtido na função Divisão.
2381 */
2382 #ifdef exe19
2383
2384 void Divisao (int a, int b);
2385 int a,b;
2386
2387 void Divisao (int a, int b)
2388 {
2389 int c;
2390 if(a==0 || b==0)
2391 {
2392 printf("Nao e possivel fazer divisao por 0");
2393 return main();
2394 }
2395 else
2396 {
2397 c = a / b;
2398 return printf("O valor da Divisao %d", c);
2399 }
2400 }
2401
2402 int main()
2403 {
2404
2405
2406 printf("\nDIVISAO\n\n");
2407 printf("Digite um numero para dividir: ");
2408 scanf("%d", &a);
2409 printf("Digite o segundo numero para quanto quer dividir: ");
2410 scanf("%d", &b);
2411 Divisao(a,b);
2412
2413
2414 return 0;
2415 }
2416
2417
2418 #endif
2419
2420 #ifdef exe28
2421
2422 /*
2423
2424 28. Gere a seguinte sequência abaixo para K termos.
2425 K representa a quantidade de números que o usuário gostaria quer
2426 fosse exibida dessa sequência. Mostre também a somatória apenas dos números
divisíveis por
2427 3 dessa sequência. Utilize o laço do while para a entrada da quantidade K e um
laço for para
2428 efetuar os cálculos solicitados.
2429
2430 1, 1, 2, 3, 5, 8, 13, 21,.....
2431 */
2432
2433
2434
2435 int ExibaSeq(int num)
2436 {
2437 int i, vet[num];
2438 int t1 = 0, t2 = 1;
2439 int nextTerm = t1 + t2;
2440
2441 printf("\nSequência Escolhida: \n");
2442 printf("%d ", t2);
2443
2444 for (i = 3; i <= num+1; ++i)
2445 {
2446 printf(", %d ", nextTerm);
2447 t1 = t2;
2448 t2 = nextTerm;
2449 nextTerm = t1 + t2;
2450 vet[i] = nextTerm;
2451 }
2452 ExibeDivTres(vet, num);
2453 }
2454
2455 int ExibeDivTres(int vet[], int num)
2456 {
2457 int i;
2458 printf("\n\n\nDivisivel por Três: \n");
2459 for (i = 1; i <= num; ++i)
2460 {
2461
2462 vet[1] = 1;
2463 vet[2] = 1;
2464 if(vet[i]%3 == 0){
2465 printf(" %d, ", vet[i]);
2466 }
2467 }
2468 printf("\n\n");
2469 system("pause");
2470 }
2471
2472 int main(){
2473
2474 Ptr;
2475 int opc;
2476
2477 do
2478 {
2479 system("cls");
2480 printf("\n\nDigite a quantidade de Termos que deseja exibir\n ");
2481 printf("\nOu [0] para Sair\n ");
2482 printf("\nDigite>>> ");
2483 scanf("%i",&opc);
2484 if(opc != 0)
2485 {
2486 ExibaSeq(opc);
2487
2488 }else{
2489 printf("\nVocê optou por sair!");
2490 printf("\n\n");
2491 }
2492
2493 }while(opc != 0);
2494
2495
2496
2497 return 0;
2498
2499 }
2500
2501 #endif // exe
2502
2503 #ifdef exe29
2504 /*
2505 32. Receba doze números positivos e armazene no vetor A.
2506 Após a alimentação de todos os números mostre apenas os
2507 números maiores que 121 que estão armazenados no vetor.
2508 */
2509
2510 int ExibaVet(int opc)
2511 {
2512 int vet[8];
2513 int i;
2514
2515 for(i=0;i<=8;i++)
2516 {
2517 vet[i] = opc;
2518 if(vet[i]>121){
2519 printf("Numero Maior que 121: %i", vet[i]);
2520 break;
2521 }
2522 else{
2523 break;
2524 }
2525 }
2526 }
2527
2528 int main(){
2529
2530 Ptr;
2531 int opc, i=1;
2532
2533 while(i <= 8)
2534 {
2535 printf("\n\nDigite a quantidade de Termos que deseja exibir\n ");
2536 printf("\nOu [0] para Sair\n ");
2537 printf("\nDigite>>> ");
2538 scanf("%i",&opc);
2539
2540 ExibaVet(opc);
2541 i++;
2542 }
2543
2544 return 0;
2545
2546 }
2547
2548 #endif
2549
2550 #ifdef exe30
2551
2552 /*
2553 33. Leia oito elementos e armazene-os no vetor A. Construa o vetor B de mesma
dimensão
2554 com os elementos do vetor A multiplicados por 3. Apresente o conteúdo dos dois
vetores.
2555 */
2556 int vetA[8];
2557 int vetB[8];
2558
2559 int ExibaVet()
2560 {
2561 int i;
2562
2563 for(i=1;i<=8;i++)
2564 {
2565 printf("Conteúdo Vetor A: %i\n",vetA[i]);
2566 }
2567 printf("\n\n");
2568 for(i=1;i<=8;i++)
2569 {
2570 printf("Conteúdo Vetor B: %i\n",vetB[i]*3);
2571 }
2572 }
2573
2574 int main(){
2575
2576 Ptr;
2577 int opc, i=1;
2578
2579 while(i <= 8)
2580 {
2581 printf("\n\nDigite 8 Elementos para Armazenar no Vetor\n ");
2582 printf("\nOu [0] para Sair\n ");
2583 printf("\nDigite>>> ");
2584 scanf("%i",&opc);
2585 vetA[i] = opc;
2586 vetB[i] = vetA[i];
2587
2588 i++;
2589 }
2590 ExibaVet();
2591
2592 return 0;
2593
2594 }
2595
2596 #endif // exe29
2597
2598 #ifdef exe31
2599
2600 /*
2601 35. Armazene num vetor dez números positivos. Exiba o conteúdo do vetor.
2602 Mostre o maior número, quantas vezes ele foi digitado e em que posições ele
apareceu dentro do vetor.
2603 */
2604 int vet[10];
2605
2606 void ExibaVet()
2607 {
2608 int i, MaiorNumero=0, cont=0;
2609 printf("\nDados do Vetor\n\n");
2610 for(i=1;i<=10;i++)
2611 {
2612 printf("vetor: %i\n",vet[i]);
2613 if(vet[i]>MaiorNumero)
2614 {
2615 MaiorNumero = vet[i];
2616 }
2617 }
2618 for(i=1;i<=10;i++)
2619 {
2620 if(vet[i] == MaiorNumero)
2621 {
2622 cont +=1;
2623 }
2624 }
2625 printf("\n");
2626 printf("Maior Numero: %i\n", MaiorNumero);
2627 printf("Numero de vezes que foi Digitado: %i\n", cont);
2628 printf("\n");
2629 for(i=1;i<=10;i++)
2630 {
2631 if(vet[i] == MaiorNumero)
2632 {
2633 printf("posição: %i\n", i);
2634 }
2635 }
2636 printf("\n\n");
2637 }
2638
2639
2640 int main(){
2641
2642 Ptr;
2643 int opc, i=1;
2644
2645 while(i <= 10)
2646 {
2647 system("cls");
2648 printf("\n\nDigite 10 Numeros para Armazenar no Vetor [%i]\n ", i);
2649 printf("\nOu [0] para Sair\n ");
2650 printf("\nDigite>>> ");
2651 scanf("%i",&opc);
2652 vet[i] = opc;
2653
2654 i++;
2655 }
2656 ExibaVet();
2657
2658 return 0;
2659
2660 }
2661
2662 #endif // exe31
2663
2664 #ifdef exe32
2665 /*
2666 36. Armazene no vetor A 10 elementos positivos. Construa o vetor B do mesmo tipo
e dimensão.
2667 Cada elemento do vetor B deve ser o valor negativo do elemento
correspondente do vetor A.
2668 Desta forma, se em A [1] estiver armazenado o elemento 8 deve estar em B [1]
o valor –8,
2669 e assim por diante. Apresentar o conteúdo dos dois vetores.
2670 */
2671 int vetA[6];
2672 int vetB[6];
2673
2674
2675 int ExibaVet(){
2676
2677 int i;
2678
2679 printf("\nValores nos vetores\n\n");
2680
2681 for(i=1;i<=6;i++)
2682 {
2683 printf("Valor: %i posição: %i\n", vetA[i], i);
2684 }
2685 printf("\n\n");
2686 for(i=1;i<=6;i++)
2687 {
2688 printf("Valor: %i posição: %i\n", vetB[i], i);
2689 }
2690 }
2691
2692
2693 int main(){
2694
2695 Ptr;
2696 int opc, i=1;
2697
2698 while(i <= 6)
2699 {
2700 system("cls");
2701 printf("\n\nDigite 10 Numeros para Armazenar no Vetor [%i]\n ", i);
2702 printf("\nOu [0] para Sair\n ");
2703 printf("\nDigite>>> ");
2704 scanf("%i",&opc);
2705 vetA[i] = opc;
2706 vetB[i] = opc*(-1);
2707
2708 i++;
2709 }
2710 ExibaVet();
2711
2712 return 0;
2713
2714 }
2715
2716 #endif // exe32
2717
2718 #ifdef exe33
2719
2720 /*
2721 39. Leia três vetores (A, B e C) de uma dimensão com 5 elementos cada.
2722 Construa o vetor D, sendo este a junção dos três outros vetores. Armazene no
vetor D o primeiro elemento do vetor
2723 A depois do B e do C e assim sucessivamente. Apresentar o conteúdo de todos
os vetores.
2724 Exiba quantas vezes apareceram números negativos no vetor D.
2725 */
2726
2727
2728 int vetA[5];
2729 int vetB[5];
2730 int vetC[5];
2731 int vetD[15];
2732
2733 void OrdenaVet(int vet[], int n)
2734 {
2735 int i, j, aux;
2736
2737 for (i=0; i<n; i++)
2738 for (j=0; j<n-i-1; j++)
2739 if (vet[j]>vet[j+1])
2740 {
2741 aux = vet[j];
2742 vet[j] = vet[j+1];
2743 vet[j+1] = aux;
2744 }
2745
2746 printf("\n");
2747 for(i=0; i<n; i++)
2748 {
2749 printf("Vetor Ordenado [%i]: %i\n ", i, vet[i]);
2750 }
2751 }
2752
2753 int ExibaVet(){
2754
2755 int i;
2756
2757 printf("\nValores nos vetores\n\n");
2758
2759 for(i=0;i<5;i++)
2760 {
2761 vetA[i] = i;
2762 printf("Valor: %i\n", vetA[i]);
2763 }
2764
2765 printf("\n");
2766
2767 for(i=0;i<5;i++)
2768 {
2769 vetB[i] = i+11;
2770 printf("Valor: %i\n", vetB[i]);
2771
2772 }
2773 printf("\n");
2774
2775 for(i=0;i<5;i++)
2776 {
2777 vetC[i] = i+82;
2778 printf("Valor: %i\n", vetC[i]);
2779
2780 }
2781 printf("\n");
2782
2783 for(i=0;i<5;i++)
2784 {
2785 vetD[i*3] = vetA[i];
2786 }
2787
2788 for(i=0;i<5;i++)
2789 {
2790 vetD[i*3+1] = vetB[i];
2791 }
2792
2793 for(i=0;i<5;i++)
2794 {
2795 vetD[i*3+2] = vetC[i];
2796 }
2797
2798
2799 for(i=0;i<15;i++)
2800 {
2801 printf("Vetor D [%i] : %i \n", i, vetD[i]);
2802 }
2803
2804 OrdenaVet(vetD, 15);
2805
2806 }
2807
2808
2809 int main(){
2810
2811 Ptr;
2812
2813 ExibaVet();
2814
2815 return 0;
2816
2817 }
2818
2819 #endif // exe33
2820
2821 #ifdef exe34
2822 /*
2823 41. Elabore um programa que efetue o cálculo de uma tabuada de um número
2824 qualquer e armazene os resultados no vetor A de uma dimensão para 10
elementos.
2825 O usuário deverá digitar o número e o programa deverá construir e exibir a
tabuada correspondente.
2826
2827 */
2828
2829 vet[10];
2830
2831 int CalcTabuada(int num)
2832 {
2833 int i;
2834 for(i=0;i<=10;i++)
2835 {
2836 vet[i] = num*i;
2837 }
2838
2839 printf("\n\n");
2840
2841 for(i=0;i<=10;i++)
2842 {
2843
2844 printf("| %i X %i = %i\n", num, i, vet[i]);
2845 }
2846 printf("\n\n");
2847 system("pause");
2848 }
2849
2850 void mostra()
2851 {
2852 printf(" **************************************************\n");
2853 printf(" TABUADA \n");
2854 printf(" **************************************************\n");
2855
2856 }
2857
2858 int main(){
2859 Ptr;
2860
2861 int opc, i=1;
2862
2863 do
2864 {
2865 system("cls");
2866 mostra();
2867 printf("\n Digite o Numero da Tabuada que você Quer saber\n ");
2868 printf("\n Ou [0] para Sair\n ");
2869 printf("\n Digite>>> ");
2870 scanf("%i",&opc);
2871
2872 if(opc != 0){
2873 CalcTabuada(opc);
2874 }else{
2875
2876 printf("\n\n");
2877 printf("Você optou por Sair!");
2878 printf("\n\n");
2879
2880 }
2881
2882 }while(opc > 0);
2883
2884 return 0;
2885
2886 }
2887 #endif // exe34
2888
2889
