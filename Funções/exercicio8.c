#include <stdio.h>

int fatorial(int fat);

int main()
{
  int fat;
  printf("Digite um numero: ");
  scanf("%d", &fat);
  fatorial(fat);
  return 0;
}

int fatorial(int fat)
{
  int i,total=1;
  for(i=1;i<=fat;i++)
  {
   total*=i;
  }
  printf("Resultado: %d\n",total);
  return total;
}
