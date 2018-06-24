#include <stdio.h>

int main()
{
  FILE *fp;
  char string[100];
  int i;
  fp= fopen("exemplo.txt","wb");
  if(!fp)
  {
    printf("erro na abertura do arquivo, seu imcompetente.\n");
    return 0;
  }
  printf("Digite a string a ser gravada: ");
  fgets(string,100,stdin);
  for(i=0;i<strlen(string);i++)
  fputc(string[i], fp);

  fclose(fp);
  return 0;
}
