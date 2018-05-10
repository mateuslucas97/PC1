#include <stdio.h>
#include <time.h>

int primo(int N);

int main()
{
  int a[100];
  int i;
  printf("Vetor: ");
  for(i=0;i<100;i++)
  {
    printf(" %d", rand()%100);
  }
  primo(a);
  return 0;
}

int primo(int N)
{
 int resultado=0;
 int num_divisores=0;
 for(int i=1;i<=N;i++)
 {
   if(N%i==0)
   num_divisores++;
 }
 if(num_divisores>2)
 resultado=1;
 return resultado;
}
