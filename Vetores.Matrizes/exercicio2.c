#include <stdio.h>

void multiplicacao(int a[10],int b[10]);

int main()
{
  int a[10],b[10];
  int i,j;
  printf("Primeiro vetor: ");
  for(i=0;i<=9;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("Segundo vetor: ");
  for(j=0;j<=9;j++)
  {
    scanf("%d",&b[j]);
  }
  multiplicacao(a,b);
  return 0;
}

void multiplicacao(int a[10],int b[10])
{
  int i;
  int resultante[10];
  for(i=0;i<=9;i++)
  {
     for(i=0;i<=9;i++)
      {
        resultante[i]=a[i]*b[i];
      }
         for(i=0;i<=10;i++)
         {
            printf("Vetor resultante: %d\n",resultante[i]);
         }
 }
}
