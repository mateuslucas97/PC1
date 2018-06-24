#include <stdio.h>
#include <string.h>

int main()
{
  FILE *fp;
  char nome[100];
  int i;
  printf("Digite o nome do arquivo: ");
  scanf("%s",nome);
  
  fp=fopen(nome,"r");
  if(!fp)
  {
  	printf("Erro na abertura\n");
  	return 0;
  }
  i=fgetc(fp);
  printf("\n\n");

  while(!feof(fp))
  {
  	printf("%c",i);
  	i=fgetc(fp);
  }
  fclose(fp);
  return 0;
}
