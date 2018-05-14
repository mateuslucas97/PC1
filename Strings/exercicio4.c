#include <stdio.h>
#include <string.h>

int main()
{
  char frase[50];
  char letra;
  int i,cont=0;
  printf("Digite a frase: ");
  fgets(frase,50,stdin);
  printf("Digite uma letra: ");
  scanf("%c",&letra);

  for(i=0;frase[i]!='\0';i++)
  {
   if(frase[i]==letra)
   {
     cont++;
   }
   else
   printf("Este caracter nao aparece na frase");

  }
  printf("O caracter %c aparece %d vezes",letra,cont);
  return 0;
}
