#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <conio.h>
#define Ptr setlocale(LC_ALL,"Portuguese");

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
