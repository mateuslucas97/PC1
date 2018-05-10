#include <stdio.h>

int main()
{
  char conceito;
  printf("Digite o conceito: ");
  scanf("%c", &conceito);

  switch(conceito)
  {
   case 'A': printf("Otimo"); break;
   case 'B': printf("Bom"); break;
   case 'C': printf("Regular"); break;
   case 'D': printf("Ruim"); break;
   case 'E': printf("Pessimo"); break;
   case 'F': printf("Reprovado"); break;

   default: printf("Conceito invalido");
  }
  return 0;
}
