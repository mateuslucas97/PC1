#include <stdio.h>

void ordena(int A[]);

int main()
{
  int A[5];
  int i;
  printf("Digite cinco numeros inteiros: ");
  for(i=0;i<=4;i++)
   scanf("%d",&A[i]);

  ordena(A);
  return 0;
}

void ordena(int A[])
{
  int i,j,k;
  int aux=0;
  for(i=0;i<5;i++)
  {
    for(j=i+1;j<5;j++)
    {
      if(A[i]>A[j])
      {
        aux=A[i];
        A[i]=A[j];
        A[j]=aux;
      }
    }
  }
  printf("Ordem crescente: ");
  for(k=0;k<5;k++)
  {
   printf("%2d",A[k]);
  }
}
