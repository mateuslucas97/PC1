#include <stdio.h>
#include <stdlib.h>

#define lin 6
#define col 3

void maior(int mat[lin][col]);
void menor(int mat[lin][col]);

int main()
{
  int mat[lin][col];
  int i,j;
  printf("Digite os elementos da matriz:\n");
  for(i=0;i<lin;i++)
  {
    for(j=0;j<col;j++)
    scanf("%d",&mat[i][j]);
  }
  maior(mat);
  printf("\n");
  menor(mat);
  return 0;
}

void maior(int mat[lin][col])
{
  int i,j;
  int maior,res[0][0];

  for(i=0;i<lin;i++)
  {
    for(j=0;j<col;j++)
    {
      if(i==0 && j==0)
      {
        maior=res[0][0];
      }
      if(mat[i][j]>maior)
      {
        maior=mat[i][j];
      }
    }
  }
  printf("O maior valor da matriz e: [%d] na posicao (%d, %d)\n",maior,i,j);
}
void menor(int mat[lin][col])
{
  int i,j;
  int menor;

  for(i=0;i<lin;i++)
  {
    for(j=0;j<col;j++)
    {
      if(mat[i][j]<menor)
      {
        menor=mat[i][j];
      }
    }
  }
  printf("O menor elemento da matriz e: [%d] na posicao (%d, %d)\n",menor,i,j);
}
