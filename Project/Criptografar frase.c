#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define TAM_VET 20

void CriptoFrase(char *palavra){

    char palavraDig[TAM_VET],frase2[TAM_VET];
    char *palavraCripto[TAM_VET];
    char carInicial;
    int i;
    int x;


    //Verifica frase Digitada
     strcpy(palavraDig, palavra);
     printf("\nDigitado: %s", palavraDig);

    //Invertendo a frase
    size_t size = strlen(palavraDig);
    for(i=0;i<size/2;i++){
        carInicial = palavraDig[i]; //armazena o character inicial
       palavraDig[i] = palavraDig[size - i - 1]; //Troca o character da ponta oposta
       palavraDig[size - i - 1] = carInicial; //Armazena o character inicial no palavraDig

    }
    printf("\nInvertida: %s", palavraDig);

    //Armazena em um Ponteiro Array
    strcpy(palavra, palavraDig);
    //Percorre Array ponteiro e troca caracter
    for(x=0;x<strlen(palavra);x++){

        if((*(palavra+x) != 'a') && (*(palavra+x) != 'e')&& (*(palavra+x) != 'i')&&
           (*(palavra+x) != 'o') && (*(palavra+x) != 'u') && (*(palavra+x) != ' '))
         {

                    *(palavra+x)='#';

                }
    }

}

int main() {

    char frase[TAM_VET];

    printf("Informe uma frase de ate 18 caracteres:" ) ;
    gets(frase);
    CriptoFrase(frase);

    printf("\nFrase Criptografada: %s", frase);

 return 0;
 }


