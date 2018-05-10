#include <stdio.h>
#include <time.h>

void par(int b[6]);
void impar(int b[6]);

int main()
{
  int a[6];
  int i;
  printf("Elementos do vetor: ");
  for(i=0;i<=6;i++)
  {
    a[i]=1+(rand()%50);
    printf("%5d",a[i]);
  }
  par(a);
  printf("\n");
  impar(a);
  return 0;
}

void par(int b[6])
{
  int i;
  int resultado[6];
  for(i=0;i<=6;i++)
  {
    if((b[i]%2)==0)
    {
    resultado[i]=b[i];
    printf("\nNUmeros Pares: %d\n",resultado[i]);
    }
  }

}

void impar(int b[6])
{
  int i;
  int resultado[6];
  for(i=0;i<=6;i++)
  {
    if((b[i]%2)!=0)
    {
      resultado[i]=b[i];
      printf("\nNUmeros IMpares: %d\n",resultado[i]);
    }
  }

}
