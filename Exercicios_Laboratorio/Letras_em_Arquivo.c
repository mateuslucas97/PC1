#include <stdio.h>
#include <string.h>

int main()
{
  FILE *fp;
  char nome[100];
  char a;
  int cont=0;
  printf("Digite o nome do arquivo: ");
  scanf("%s",nome);

  fp=fopen(nome,"r");
  if(!fp)
  {
    printf("Erro, seu lerdo!!!\n");
    return 0;
  }
  printf("\n\n");

  while((a=fgetc(fp))!=EOF)
  {
    if(a=='A'|| a=='a')
      cont++;
  }
  printf("Quantidade de letras A: %d",cont);
  fclose(fp);
  return 0;
}
