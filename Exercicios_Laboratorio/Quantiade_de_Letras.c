#include <stdio.h>
#include <string.h>

int main()
{
  char frase[20];
  int tamanho;
  printf("Digite uma palavra com no maximo 20 letras: ");
  scanf("%s",frase);

  tamanho=strlen(frase);
  printf("\n");
  printf("\n");
  printf("Quantidade de letras: %d",tamanho);
  return 0;
}
