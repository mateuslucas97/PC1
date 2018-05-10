#include <stdio.h>

int compara(int x, int y, int z);

int main()
{
  int a,b,c;
  printf("Digite tres numeros: ");
  scanf("%d %d %d", &a,&b,&c);
  compara(a,b,c);
  return 0;
}

int compara(int x,int y,int z)
{
  int maior=0;
  if(x>y)
  {
  maior=x;
  }
  else
  {
  maior=y;
  }
  if(maior<z)
  {
  maior=z;
  }
  printf("O maior numero e: %d\n",maior);
  return maior;
}
