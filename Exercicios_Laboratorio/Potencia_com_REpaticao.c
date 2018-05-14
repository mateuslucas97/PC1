#include <stdio.h>

int main()
{
  int x,y,i;
  int pot=1;

  printf("Digite dois numeros inteiros: ");
  scanf("%d %d", &x, &y);

  for(i=1;i<=y;i++)
  {
    pot*=x;
  }
     printf("Resultado = %d", pot);
  return 0;
}
