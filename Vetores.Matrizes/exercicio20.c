#include <stdio.h>

void resposta(int x,int mat[5][5]);

int main()
{
  int mat[5][5];
  int x,i,j;
  printf("Preencha a Matriz: ");
  for(i=0;i<5;i++)
  {
    for(j=0;j<5;j++)
      scanf("%d",&mat[i][j]);
  }
  printf("Digite o valor x pedido: ");
  scanf("%d",&x);
  resposta(x,mat);
  return 0;
}

void resposta(int x,int mat[5][5])
{
  int i,j,resultado=0;
  for(i=0;i<5;i++)
  {
    for(j=0;j<5;j++)
    {
      if(mat[i][j]==x)
      {
        resultado++;
      }
    }
  }
  printf("O numero [%d] aparece [%d] vezes",x,resultado);
}
