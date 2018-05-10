#include <stdio.h>
#include <ctype.h>

char verifica(char a);

int main()
{
  char b;
  printf("Digite um caracter: ");
  scanf("%c", &b);
  verifica(b);
  return isalpha(c);
}

char verifica(char a)
{
  if(isalpha(a)!=0)
  printf("1");
  else
  printf("0");
}
