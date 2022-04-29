#include <stdio.h>


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
