#include <stdio.h>
#include <math.h>
int main()
{
  int a,b;
  int vistas,frequencia;
  int final;
  printf("Digite as duas notas: ");
  scanf("%d %d", &a, &b);
  printf("Digite as aulas assistidas: ");
  scanf("%d", &vistas);

  final=(a+b)/2;
  frequencia=100*vistas/100;
  if(final>=60 && frequencia>=75)
  {
    printf("Aprovado");
  }
  else
  printf("Reprovado");

  return 0;
}
