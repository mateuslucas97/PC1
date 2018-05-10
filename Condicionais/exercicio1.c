#include <stdio.h>
int main()
{
  int A;
  printf("Digite um num: ");
  scanf("%d", &A);

  if(A%2==0)
  {
    printf("Numero par\n");
  }
  else
  printf("Impar\n");

  if(A<0)
  {
    printf("Negativo\n");
  }
  else
  printf("Positivo\n");
  return 0;
}
