#include <stdio.h>

void intersecao(int a[],int b[]);

int main()
{
  int a[10],b[10];
  int i,j;
  printf("Primeiro vetor: ");
  for(i=0;i<=9;i++)
  scanf("%d",&a[i]);

  printf("Segundo vetor: ");
  for(j=0;j<=9;j++)
  scanf("%d",&b[j]);

  intersecao(a,b);
  return 0;
}

void intersecao(int a[],int b[])
{
  int i,j;
  int in[10];
  for(i=0;i<=9;i++)
  {
    for(j=0;j<=9;j++)
    {
      if(a[j]==b[i])
      {
        in[i]=b[i];
      }
    }
    printf("Intersecao: %d\n",in[i]);
  }
}
