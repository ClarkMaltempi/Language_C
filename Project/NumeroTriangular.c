#include <stdio.h>


/* Procura ou determina o n-ésimo numero triangular */
int Triangular (int n){

    if(n==1){

    return 1;
    }else{
    return n+Triangular(n-1);
    }
}

int main() {
  int i,n,cont,j;

  printf("Digite o valor de n: ");
  scanf("%d",&n);

  printf("%d",Triangular(n));
  printf("\n");

for (j=0;j<n;j++)
{
    for (cont=1;cont>0;cont--)
    {
        printf("\n");
            for(i=n-j;i>0;i--)
            {
                printf("* ");
            }
    }
}

printf("\n");
  return 0;
}
