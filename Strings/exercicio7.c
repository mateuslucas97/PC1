#include <stdio.h>
#include <string.h>

int main()
{
  char cadeia[50],subcadeia[50];
  int tamanho,tam;
  int i,j,cont=0;
  printf("Digite uma casdeia: ");
  fgets(cadeia,50,stdin);
  printf("Digite uma subcadeia: ");
  fgets(subcadeia,50,stdin);

  if(strcmp(cadeia,subcadeia)!=0);
  {
   cont++;
  }
  printf("aparece %d vezes",cont);
  return 0;
}
