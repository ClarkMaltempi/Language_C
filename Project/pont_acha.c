#include <stdio.h>

char *procura(char *s, char ch)
{
   while (*s != ch && *s != '\0')
      s++;
	  
   if (*s != '\0')	  
      return s;
   else
      return (char *)0;// NULL
}


int main()
{
  char str[81], *ptr;
  
  printf("Digite uma frase: \n");
  gets(str);
  
  ptr=procura(str,'H'); 
  
  printf("\nA frase comeca no endereco %p\n", str);
  
  if (ptr)
  { 
    printf("\nPrimeira ocorrencia do caractere 'z': %p\n", ptr);
    printf("\nA sua posicao eh: %d\n",ptr-str);	
  }
  else
  {
    printf("O caracter 'z' nao existe nessa frase\n");
  }
  return 0;
}
