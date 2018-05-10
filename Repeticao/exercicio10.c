#include <stdio.h>

int main()
{
  int n,i,a,b;
  int resultado;

  printf("Digite um numero: ");
  scanf("%d", &n);
  a=0;
  b=1;

  for(i=1;i<=n;i++)
  {
    resultado=a+b;
    a=b;
    b=resultado;
    printf("%3d", resultado);
  }
  return 0;
}
