#include <stdio.h>
#include<time.h>

void multiplicacao(int a[3][3],int b[3][3]);

int main()
{
  int A[3][3], B[3][3];
  int i,j,k,l;
  printf("Matriz A: ");
  srand(time(NULL));
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    printf(" %d\n", rand()%10);
  }
  printf("Matriz B: ");
  srand(time(NULL));
  for(k=0;k<3;k++)
  {
    for(l=0;l<3;l++)
    printf(" %d\n", rand()%10);
  }
  multiplicacao(A,B);
  return 0;
}

void multiplicacao(int a[3][3],int b[3][3])
{
  int i,j,k,l;
  int resultado=0;
  for(i=0;i<3;i++)
  {
   for(j=0;j<3;j++)
   {
     for(k=0;k<3;k++)
     {
       for(k=0;k<3;k++)
       {
         for(l=0;l<3;l++)
         {
           resultado=a[i][j]*b[k][l];
         }
       }
     }
   }
  }
  printf("Resultado:  %d",resultado);
}
