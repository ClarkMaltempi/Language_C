#include <stdio.h>
#include <string.h>

int main(){

int i,x,ind;
char nome[50], sobrenome[50], nomecompleto[50];

    printf("Digite seu nome completo: ");
    gets(nomecompleto);

	for(x=0; x<strlen(nomecompleto); x++){
      if(nomecompleto[x] != ' ')
         nome[x] = nomecompleto[x];
      else
         break;
	}
    nome[x]='\0';

   for(x=strlen(nomecompleto)-1; x>=0; x--){
      if(nomecompleto[x] == ' ')
	  {
		  ind = x;
		  break;
	  }
   }

    printf("O nome Digitado: %s , %s", nomecompleto+ind, nome);


return 0;
}
