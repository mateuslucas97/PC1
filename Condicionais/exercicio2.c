#include <stdio.h>

int main()
{
  int x;
  printf("Digite um numero: ");
  scanf("%d", &x);

  if(x>=18 || x>=60)
  printf("Valor entre o intervalo");
  else
  printf("Fora do intervalo");

  return 0;
}
